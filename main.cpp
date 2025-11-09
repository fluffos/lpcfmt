#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>
#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "gen/lpcLexer.h"
#include "gen/lpcParser.h"
#include "gen/lpcBaseVisitor.h"

using namespace antlr4;

class LPCFormatter : public lpcBaseVisitor {
private:
    int indentLevel = 0;
    const std::string indentStr = "  "; // 2 spaces per indent

    std::string indent() {
        std::string result;
        for (int i = 0; i < indentLevel; i++) {
            result += indentStr;
        }
        return result;
    }

    std::string trim(const std::string& str) {
        size_t first = str.find_first_not_of(" \t\n\r");
        if (first == std::string::npos) return "";
        size_t last = str.find_last_not_of(" \t\n\r");
        return str.substr(first, last - first + 1);
    }

public:
    // Visit program - the top level
    antlrcpp::Any visitProgram(lpcParser::ProgramContext *ctx) override {
        std::string result;
        for (auto item : ctx->children) {
            if (item) {
                auto text = visit(item);
                if (!text.isNull()) {
                    std::string s = text.as<std::string>();
                    if (!s.empty()) {
                        result += s;
                    }
                }
            }
        }
        return result;
    }

    // Visit inheritance statement
    antlrcpp::Any visitInheritance(lpcParser::InheritanceContext *ctx) override {
        std::string result = indent();

        // Get modifiers
        auto modList = ctx->type_modifier_list();
        if (modList && !modList->L_TYPE_MODIFIER().empty()) {
            for (auto mod : modList->L_TYPE_MODIFIER()) {
                result += mod->getText() + " ";
            }
        }

        result += "inherit ";

        // Get string constant
        auto str = visit(ctx->string_con1());
        if (!str.isNull()) {
            result += str.as<std::string>();
        }

        result += ";\n";
        return result;
    }

    // Visit variable declaration
    antlrcpp::Any visitVar(lpcParser::VarContext *ctx) override {
        std::string result = indent();

        // Get type
        auto typeCtx = ctx->type();
        if (typeCtx) {
            auto typeStr = visit(typeCtx);
            if (!typeStr.isNull()) {
                result += typeStr.as<std::string>() + " ";
            }
        }

        // Get variable names
        auto newNames = ctx->new_name();
        for (size_t i = 0; i < newNames.size(); i++) {
            if (i > 0) result += ", ";
            auto name = visit(newNames[i]);
            if (!name.isNull()) {
                result += name.as<std::string>();
            }
        }

        result += ";\n";
        return result;
    }

    // Visit type
    antlrcpp::Any visitType(lpcParser::TypeContext *ctx) override {
        std::string result;

        // Get modifiers
        auto modList = ctx->type_modifier_list();
        if (modList && !modList->L_TYPE_MODIFIER().empty()) {
            for (auto mod : modList->L_TYPE_MODIFIER()) {
                result += mod->getText() + " ";
            }
        }

        // Get basic type
        auto basicType = ctx->opt_basic_type();
        if (basicType) {
            auto bt = visit(basicType);
            if (!bt.isNull()) {
                result += bt.as<std::string>();
            }
        }

        return trim(result);
    }

    // Visit optional basic type
    antlrcpp::Any visitOpt_basic_type(lpcParser::Opt_basic_typeContext *ctx) override {
        if (ctx->basic_type()) {
            return visit(ctx->basic_type());
        }
        return std::string("");
    }

    // Visit basic type
    antlrcpp::Any visitBasic_type(lpcParser::Basic_typeContext *ctx) override {
        std::string result;

        if (ctx->atomic_type()) {
            auto at = visit(ctx->atomic_type());
            if (!at.isNull()) {
                result += at.as<std::string>();
            }
        } else if (ctx->L_ARRAY()) {
            auto opt = ctx->opt_atomic_type();
            if (opt) {
                auto ot = visit(opt);
                if (!ot.isNull() && !ot.as<std::string>().empty()) {
                    result += ot.as<std::string>() + " ";
                }
            }
            result += "array";
        }

        return result;
    }

    // Visit atomic type
    antlrcpp::Any visitAtomic_type(lpcParser::Atomic_typeContext *ctx) override {
        if (ctx->L_BASIC_TYPE()) {
            return ctx->L_BASIC_TYPE()->getText();
        } else if (ctx->L_CLASS()) {
            std::string result = "class ";
            if (ctx->L_IDENTIFIER()) {
                result += ctx->L_IDENTIFIER()->getText();
            }
            return result;
        }
        return std::string("");
    }

    // Visit optional atomic type
    antlrcpp::Any visitOpt_atomic_type(lpcParser::Opt_atomic_typeContext *ctx) override {
        if (ctx->atomic_type()) {
            return visit(ctx->atomic_type());
        }
        return std::string("");
    }

    // Visit new_name (variable name with optional initialization)
    antlrcpp::Any visitNew_name(lpcParser::New_nameContext *ctx) override {
        std::string result;

        // Optional star
        if (ctx->optional_star() && ctx->optional_star()->getText() == "*") {
            result += "*";
        }

        // Identifier
        if (ctx->identifier()) {
            result += ctx->identifier()->getText();
        }

        // Optional assignment
        if (ctx->L_ASSIGN() && ctx->expr0()) {
            result += " = ";
            auto expr = visit(ctx->expr0());
            if (!expr.isNull()) {
                result += expr.as<std::string>();
            }
        }

        return result;
    }

    // Visit function definition
    antlrcpp::Any visitFunction(lpcParser::FunctionContext *ctx) override {
        std::string result = "\n" + indent();

        // Return type
        auto typeCtx = ctx->type();
        if (typeCtx) {
            auto typeStr = visit(typeCtx);
            if (!typeStr.isNull()) {
                result += typeStr.as<std::string>() + " ";
            }
        }

        // Optional star
        if (ctx->optional_star() && ctx->optional_star()->getText() == "*") {
            result += "*";
        }

        // Function name
        if (ctx->identifier()) {
            result += ctx->identifier()->getText();
        }

        // Arguments
        result += "(";
        if (ctx->argument()) {
            auto args = visit(ctx->argument());
            if (!args.isNull()) {
                result += args.as<std::string>();
            }
        }
        result += ")";

        // Body or semicolon
        if (ctx->block_or_semi()) {
            auto body = visit(ctx->block_or_semi());
            if (!body.isNull()) {
                result += body.as<std::string>();
            }
        }

        result += "\n";
        return result;
    }

    // Visit block
    antlrcpp::Any visitBlock(lpcParser::BlockContext *ctx) override {
        std::string result = "\n" + indent() + "{\n";
        indentLevel++;

        // Local declarations
        if (ctx->local_declarations()) {
            auto decls = visit(ctx->local_declarations());
            if (!decls.isNull()) {
                std::string declStr = decls.as<std::string>();
                if (!declStr.empty()) {
                    result += declStr;
                }
            }
        }

        // Statements
        for (auto stmt : ctx->statement()) {
            auto s = visit(stmt);
            if (!s.isNull()) {
                result += s.as<std::string>();
            }
        }

        indentLevel--;
        result += indent() + "}";

        return result;
    }

    // Visit block_or_semi
    antlrcpp::Any visitBlock_or_semi(lpcParser::Block_or_semiContext *ctx) override {
        if (ctx->block()) {
            return visit(ctx->block());
        } else if (ctx->getText() == ";") {
            return std::string(";\n");
        }
        return std::string("");
    }

    // Visit string constant
    antlrcpp::Any visitString_con1(lpcParser::String_con1Context *ctx) override {
        return visitChildren(ctx);
    }

    antlrcpp::Any visitString_con2(lpcParser::String_con2Context *ctx) override {
        std::string result;
        for (auto str : ctx->L_STRING()) {
            result += str->getText();
        }
        return result;
    }

    // Visit argument list
    antlrcpp::Any visitArgument(lpcParser::ArgumentContext *ctx) override {
        if (ctx->argument_list()) {
            auto args = visit(ctx->argument_list());
            std::string result;
            if (!args.isNull()) {
                result = args.as<std::string>();
            }
            if (ctx->L_DOT_DOT_DOT()) {
                result += "...";
            }
            return result;
        }
        return std::string("");
    }

    antlrcpp::Any visitArgument_list(lpcParser::Argument_listContext *ctx) override {
        std::string result;
        auto newArgs = ctx->new_arg();
        for (size_t i = 0; i < newArgs.size(); i++) {
            if (i > 0) result += ", ";
            auto arg = visit(newArgs[i]);
            if (!arg.isNull()) {
                result += arg.as<std::string>();
            }
        }
        return result;
    }

    antlrcpp::Any visitNew_arg(lpcParser::New_argContext *ctx) override {
        std::string result;

        if (ctx->arg_type()) {
            auto type = visit(ctx->arg_type());
            if (!type.isNull()) {
                result += type.as<std::string>();
            }

            if (ctx->optional_star() && ctx->optional_star()->getText() == "*") {
                result += " *";
            }

            if (ctx->new_local_name()) {
                result += " " + ctx->new_local_name()->getText();
            }
        } else if (ctx->new_local_name()) {
            result += ctx->new_local_name()->getText();
        }

        return result;
    }

    antlrcpp::Any visitArg_type(lpcParser::Arg_typeContext *ctx) override {
        std::string result;

        if (ctx->basic_type()) {
            auto bt = visit(ctx->basic_type());
            if (!bt.isNull()) {
                result += bt.as<std::string>();
            }

            if (ctx->ref()) {
                result += " ref";
            }
        }

        return result;
    }

    // Visit statements (simplified - just get text for now)
    antlrcpp::Any visitStatement(lpcParser::StatementContext *ctx) override {
        std::string text = ctx->getText();
        if (!text.empty()) {
            return indent() + text + "\n";
        }
        return std::string("");
    }

    // Visit local declarations
    antlrcpp::Any visitLocal_declarations(lpcParser::Local_declarationsContext *ctx) override {
        std::string result;
        // For now, just return the raw text with indentation
        // A full implementation would parse each declaration properly
        return result;
    }

    // Visit expressions (simplified)
    antlrcpp::Any visitExpr0(lpcParser::Expr0Context *ctx) override {
        return ctx->getText();
    }

    // Default visitor for terminal nodes
    antlrcpp::Any visitTerminal(tree::TerminalNode *node) override {
        return node->getText();
    }

    // Aggregate results (for nodes with multiple children)
    antlrcpp::Any aggregateResult(antlrcpp::Any aggregate, const antlrcpp::Any &nextResult) override {
        if (aggregate.isNull()) {
            return nextResult;
        }

        if (nextResult.isNull()) {
            return aggregate;
        }

        std::string aggStr = aggregate.as<std::string>();
        std::string nextStr = nextResult.as<std::string>();
        return aggStr + nextStr;
    }
};

int main(int argc, char* argv[]) {
    std::string filename = "tests/1.lpc";

    // Allow command line argument for filename
    if (argc > 1) {
        filename = argv[1];
    }

    std::ifstream stream;
    stream.open(filename);

    if (!stream.is_open()) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    lpcLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();

    lpcParser parser(&tokens);
    tree::ParseTree* tree = parser.program();

    LPCFormatter formatter;
    auto result = formatter.visit(tree);

    if (!result.isNull()) {
        std::cout << result.as<std::string>();
    }

    return 0;
}
