#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>

#include "antlr4-runtime.h"
#include "gen/lpcLexer.h"
#include "gen/lpcParser.h"
#include "gen/lpcBaseListener.h"
#include "gen/lpcBaseVisitor.h"

using namespace antlr4;

std::string join(std::vector<std::string> x) {
  if(x.empty()) return "";

  std::ostringstream os;
  std::copy(x.begin(), x.end() - 1,
            std::ostream_iterator<std::string>(os, " "));
  os << *x.rbegin();
  return os.str();
}

class fmtVisitor: public lpcBaseVisitor {

 public:
  std::vector<std::string> results;

  antlrcpp::Any visitTerminal(tree::TerminalNode *node) override {
    return node->getText();
  }
 protected:
  antlrcpp::Any aggregateResult(antlrcpp::Any any, const antlrcpp::Any &nextResult) override {
    if(nextResult.isNotNull()) {
      results.push_back(nextResult.as<std::string>());
    }
    return nextResult;
  }
};

struct ASTNode {
  virtual std::string emit() {};
};

struct TextNode: public ASTNode {
 public:
  std::string value;
  TextNode(std::string value) {this->value = value;}
  virtual std::string emit() {
    return value;
  }
};

struct ModifiersNode: public TextNode {
  explicit ModifiersNode(const std::string &value) : TextNode(value) {}
};

struct StringCon1: public TextNode {
  explicit StringCon1(const std::string &value) : TextNode(value) {}

};

struct InheritanceNode: public ASTNode {
 public:
  ModifiersNode modifiers;
  StringCon1 value;

  InheritanceNode(ModifiersNode modifiers, const StringCon1 &value) : modifiers(std::move(modifiers)), value(value) {}
  std::string emit() override {
    return modifiers.emit() + "inherit " + value.emit() + ";";
  }
};

struct VarNode: public ASTNode {
 public:
  ModifiersNode modifiers;
  TextNode id;
  TextNode expr;
}

class fmtListener: public lpcBaseListener {
 public:
  fmtListener(CommonTokenStream* tokens) {
    _tokens = tokens;
  }

  void enterInheritance(lpcParser::InheritanceContext *context) override {
    fmtVisitor visitor;

    visitor.results.clear();
    context->type_modifier_list()->accept(&visitor);
    ModifiersNode modifiers(join(visitor.results));

    visitor.results.clear();
    context->string_con1()->accept(&visitor);
    StringCon1 value(join(visitor.results));

    InheritanceNode node(modifiers, value);
    std::cout << node.emit() << std::endl;
  }

  void enterVar(lpcParser::VarContext *context) override {
    lpcBaseListener::enterVar(context);
  }

 private:
    CommonTokenStream* _tokens;

    std::vector<std::string> current_rule;
};

int main() {
  std::string filename = "tests/1.lpc";
  std::fstream s(filename, s.binary | s.in);
  assert(s.is_open());

  ANTLRInputStream input(s);
  lpcLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();

  lpcParser parser(&tokens);
  tree::ParseTree* tree = parser.program();

  fmtListener listener(&tokens);
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return 0;
}
