
// Generated from D:/src/lpcfmt\lpc.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  lpcParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, BlockComment = 23, LineComment = 24, Whitespace = 25, 
    Newline = 26, L_PREPROCESSOR_COMMAND = 27, L_TREE = 28, L_BREAK = 29, 
    L_CASE = 30, L_CATCH = 31, L_CLASS = 32, L_CONTINUE = 33, L_DEFAULT = 34, 
    L_DO = 35, L_EFUN = 36, L_ELSE = 37, L_BASIC_TYPE = 38, L_FOR = 39, 
    L_FOREACH = 40, L_IF = 41, L_IN = 42, L_INHERIT = 43, L_NEW = 44, L_TYPE_MODIFIER = 45, 
    L_PARSE_COMMAND = 46, L_REF = 47, L_RETURN = 48, L_SSCANF = 49, L_SWITCH = 50, 
    L_TIME_EXPRESSION = 51, L_WHILE = 52, L_STRING = 53, L_NUMBER = 54, 
    L_REAL = 55, L_IDENTIFIER = 56, L_LAND = 57, L_LOR = 58, L_LSH = 59, 
    L_RSH = 60, L_NOT = 61, L_RANGE = 62, L_DOT_DOT_DOT = 63, L_ARRAY = 64, 
    L_PARAMETER = 65, L_ORDER = 66, L_ASSIGN = 67, L_INC = 68, L_DEC = 69, 
    L_EQ = 70, L_NE = 71, L_ARROW = 72, L_COLON_COLON = 73, L_ARRAY_OPEN = 74, 
    L_MAPPING_OPEN = 75, L_ERROR = 76, StringLiteral = 77, DigitSequence = 78
  };

  enum {
    RuleProgram = 0, RulePreprocessor_invoke_arglist = 1, RulePreprocessor_invoke = 2, 
    RuleInheritance = 3, RuleReal = 4, RuleNumber = 5, RuleOptional_star = 6, 
    RuleBlock_or_semi = 7, RuleIdentifier = 8, RuleFunction = 9, RuleDef = 10, 
    RuleVar = 11, RuleModifier_change = 12, RuleMember_name = 13, RuleType_decl = 14, 
    RuleNew_local_name = 15, RuleAtomic_type = 16, RuleOpt_atomic_type = 17, 
    RuleBasic_type = 18, RuleArg_type = 19, RuleNew_arg = 20, RuleArgument = 21, 
    RuleArgument_list = 22, RuleType_modifier_list = 23, RuleType = 24, 
    RuleCast = 25, RuleOpt_basic_type = 26, RuleNew_name = 27, RuleBlock = 28, 
    RuleDecl_block = 29, RuleLocal_declarations = 30, RuleNew_local_def = 31, 
    RuleSingle_new_local_def = 32, RuleSingle_new_local_def_with_init = 33, 
    RuleStatement = 34, RuleWhile_stmt = 35, RuleDo_stmt = 36, RuleFor_stmt = 37, 
    RuleForeach_var = 38, RuleForeach_vars = 39, RuleForeach = 40, RuleFor_expr = 41, 
    RuleFirst_for_expr = 42, RuleSwitch_stmt = 43, RuleCase_stmt = 44, RuleCase_label = 45, 
    RuleConstant = 46, RuleComma_expr = 47, RuleRef = 48, RuleExpr0 = 49, 
    RuleReturn_stmt = 50, RuleExpr_list = 51, RuleExpr_list_node = 52, RuleExpr_list2 = 53, 
    RuleExpr_list3 = 54, RuleExpr_list4 = 55, RuleAssoc_pair = 56, RuleLvalue = 57, 
    RuleL_new_function_open = 58, RuleExpr3 = 59, RuleExpr4 = 60, RuleExpr_or_block = 61, 
    RuleCatch_block = 62, RuleTree_block = 63, RuleSscanf = 64, RuleParse_command = 65, 
    RuleTime_expression = 66, RuleLvalue_list = 67, RuleString = 68, RuleString_con1 = 69, 
    RuleString_con2 = 70, RuleClass_init = 71, RuleOpt_class_init = 72, 
    RuleEfun_override = 73, RuleFunction_name = 74, RuleCond = 75, RuleOptional_else_part = 76, 
    RuleError = 77
  };

  explicit lpcParser(antlr4::TokenStream *input);
  ~lpcParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class Preprocessor_invoke_arglistContext;
  class Preprocessor_invokeContext;
  class InheritanceContext;
  class RealContext;
  class NumberContext;
  class Optional_starContext;
  class Block_or_semiContext;
  class IdentifierContext;
  class FunctionContext;
  class DefContext;
  class VarContext;
  class Modifier_changeContext;
  class Member_nameContext;
  class Type_declContext;
  class New_local_nameContext;
  class Atomic_typeContext;
  class Opt_atomic_typeContext;
  class Basic_typeContext;
  class Arg_typeContext;
  class New_argContext;
  class ArgumentContext;
  class Argument_listContext;
  class Type_modifier_listContext;
  class TypeContext;
  class CastContext;
  class Opt_basic_typeContext;
  class New_nameContext;
  class BlockContext;
  class Decl_blockContext;
  class Local_declarationsContext;
  class New_local_defContext;
  class Single_new_local_defContext;
  class Single_new_local_def_with_initContext;
  class StatementContext;
  class While_stmtContext;
  class Do_stmtContext;
  class For_stmtContext;
  class Foreach_varContext;
  class Foreach_varsContext;
  class ForeachContext;
  class For_exprContext;
  class First_for_exprContext;
  class Switch_stmtContext;
  class Case_stmtContext;
  class Case_labelContext;
  class ConstantContext;
  class Comma_exprContext;
  class RefContext;
  class Expr0Context;
  class Return_stmtContext;
  class Expr_listContext;
  class Expr_list_nodeContext;
  class Expr_list2Context;
  class Expr_list3Context;
  class Expr_list4Context;
  class Assoc_pairContext;
  class LvalueContext;
  class L_new_function_openContext;
  class Expr3Context;
  class Expr4Context;
  class Expr_or_blockContext;
  class Catch_blockContext;
  class Tree_blockContext;
  class SscanfContext;
  class Parse_commandContext;
  class Time_expressionContext;
  class Lvalue_listContext;
  class StringContext;
  class String_con1Context;
  class String_con2Context;
  class Class_initContext;
  class Opt_class_initContext;
  class Efun_overrideContext;
  class Function_nameContext;
  class CondContext;
  class Optional_else_partContext;
  class ErrorContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Preprocessor_invokeContext *> preprocessor_invoke();
    Preprocessor_invokeContext* preprocessor_invoke(size_t i);
    std::vector<DefContext *> def();
    DefContext* def(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Preprocessor_invoke_arglistContext : public antlr4::ParserRuleContext {
  public:
    Preprocessor_invoke_arglistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Preprocessor_invokeContext *preprocessor_invoke();
    antlr4::tree::TerminalNode *L_STRING();
    std::vector<Preprocessor_invoke_arglistContext *> preprocessor_invoke_arglist();
    Preprocessor_invoke_arglistContext* preprocessor_invoke_arglist(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Preprocessor_invoke_arglistContext* preprocessor_invoke_arglist();
  Preprocessor_invoke_arglistContext* preprocessor_invoke_arglist(int precedence);
  class  Preprocessor_invokeContext : public antlr4::ParserRuleContext {
  public:
    Preprocessor_invokeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_IDENTIFIER();
    Preprocessor_invoke_arglistContext *preprocessor_invoke_arglist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Preprocessor_invokeContext* preprocessor_invoke();

  class  InheritanceContext : public antlr4::ParserRuleContext {
  public:
    InheritanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_modifier_listContext *type_modifier_list();
    antlr4::tree::TerminalNode *L_INHERIT();
    String_con1Context *string_con1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InheritanceContext* inheritance();

  class  RealContext : public antlr4::ParserRuleContext {
  public:
    RealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_REAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealContext* real();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Optional_starContext : public antlr4::ParserRuleContext {
  public:
    Optional_starContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optional_starContext* optional_star();

  class  Block_or_semiContext : public antlr4::ParserRuleContext {
  public:
    Block_or_semiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ErrorContext *error();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_or_semiContext* block_or_semi();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    Optional_starContext *optional_star();
    IdentifierContext *identifier();
    ArgumentContext *argument();
    Block_or_semiContext *block_or_semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  DefContext : public antlr4::ParserRuleContext {
  public:
    DefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    VarContext *var();
    InheritanceContext *inheritance();
    Type_declContext *type_decl();
    Modifier_changeContext *modifier_change();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefContext* def();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    std::vector<New_nameContext *> new_name();
    New_nameContext* new_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarContext* var();

  class  Modifier_changeContext : public antlr4::ParserRuleContext {
  public:
    Modifier_changeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_modifier_listContext *type_modifier_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modifier_changeContext* modifier_change();

  class  Member_nameContext : public antlr4::ParserRuleContext {
  public:
    Member_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Optional_starContext *optional_star();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_nameContext* member_name();

  class  Type_declContext : public antlr4::ParserRuleContext {
  public:
    Type_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_modifier_listContext *type_modifier_list();
    antlr4::tree::TerminalNode *L_CLASS();
    IdentifierContext *identifier();
    std::vector<Basic_typeContext *> basic_type();
    Basic_typeContext* basic_type(size_t i);
    std::vector<Member_nameContext *> member_name();
    Member_nameContext* member_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declContext* type_decl();

  class  New_local_nameContext : public antlr4::ParserRuleContext {
  public:
    New_local_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_local_nameContext* new_local_name();

  class  Atomic_typeContext : public antlr4::ParserRuleContext {
  public:
    Atomic_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BASIC_TYPE();
    antlr4::tree::TerminalNode *L_CLASS();
    antlr4::tree::TerminalNode *L_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atomic_typeContext* atomic_type();

  class  Opt_atomic_typeContext : public antlr4::ParserRuleContext {
  public:
    Opt_atomic_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_typeContext *atomic_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_atomic_typeContext* opt_atomic_type();

  class  Basic_typeContext : public antlr4::ParserRuleContext {
  public:
    Basic_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_typeContext *atomic_type();
    Opt_atomic_typeContext *opt_atomic_type();
    antlr4::tree::TerminalNode *L_ARRAY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_typeContext* basic_type();

  class  Arg_typeContext : public antlr4::ParserRuleContext {
  public:
    Arg_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_typeContext *basic_type();
    RefContext *ref();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_typeContext* arg_type();

  class  New_argContext : public antlr4::ParserRuleContext {
  public:
    New_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arg_typeContext *arg_type();
    Optional_starContext *optional_star();
    New_local_nameContext *new_local_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_argContext* new_arg();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Argument_listContext *argument_list();
    antlr4::tree::TerminalNode *L_DOT_DOT_DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<New_argContext *> new_arg();
    New_argContext* new_arg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Argument_listContext* argument_list();

  class  Type_modifier_listContext : public antlr4::ParserRuleContext {
  public:
    Type_modifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_TYPE_MODIFIER();
    antlr4::tree::TerminalNode* L_TYPE_MODIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_modifier_listContext* type_modifier_list();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_modifier_listContext *type_modifier_list();
    Opt_basic_typeContext *opt_basic_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  CastContext : public antlr4::ParserRuleContext {
  public:
    CastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_typeContext *basic_type();
    Optional_starContext *optional_star();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastContext* cast();

  class  Opt_basic_typeContext : public antlr4::ParserRuleContext {
  public:
    Opt_basic_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_typeContext *basic_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_basic_typeContext* opt_basic_type();

  class  New_nameContext : public antlr4::ParserRuleContext {
  public:
    New_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Optional_starContext *optional_star();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *L_ASSIGN();
    Expr0Context *expr0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_nameContext* new_name();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_declarationsContext *local_declarations();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    ErrorContext *error();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  Decl_blockContext : public antlr4::ParserRuleContext {
  public:
    Decl_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    For_stmtContext *for_stmt();
    ForeachContext *foreach();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_blockContext* decl_block();

  class  Local_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Local_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Basic_typeContext *> basic_type();
    Basic_typeContext* basic_type(size_t i);
    std::vector<New_local_defContext *> new_local_def();
    New_local_defContext* new_local_def(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_declarationsContext* local_declarations();

  class  New_local_defContext : public antlr4::ParserRuleContext {
  public:
    New_local_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Optional_starContext *optional_star();
    New_local_nameContext *new_local_name();
    antlr4::tree::TerminalNode *L_ASSIGN();
    Expr0Context *expr0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_local_defContext* new_local_def();

  class  Single_new_local_defContext : public antlr4::ParserRuleContext {
  public:
    Single_new_local_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arg_typeContext *arg_type();
    Optional_starContext *optional_star();
    New_local_nameContext *new_local_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_new_local_defContext* single_new_local_def();

  class  Single_new_local_def_with_initContext : public antlr4::ParserRuleContext {
  public:
    Single_new_local_def_with_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Single_new_local_defContext *single_new_local_def();
    antlr4::tree::TerminalNode *L_ASSIGN();
    Expr0Context *expr0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_new_local_def_with_initContext* single_new_local_def_with_init();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comma_exprContext *comma_expr();
    CondContext *cond();
    While_stmtContext *while_stmt();
    Do_stmtContext *do_stmt();
    Switch_stmtContext *switch_stmt();
    Return_stmtContext *return_stmt();
    Decl_blockContext *decl_block();
    antlr4::tree::TerminalNode *L_BREAK();
    antlr4::tree::TerminalNode *L_CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_WHILE();
    Comma_exprContext *comma_expr();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  Do_stmtContext : public antlr4::ParserRuleContext {
  public:
    Do_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_DO();
    StatementContext *statement();
    antlr4::tree::TerminalNode *L_WHILE();
    Comma_exprContext *comma_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_stmtContext* do_stmt();

  class  For_stmtContext : public antlr4::ParserRuleContext {
  public:
    For_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_FOR();
    First_for_exprContext *first_for_expr();
    std::vector<For_exprContext *> for_expr();
    For_exprContext* for_expr(size_t i);
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_stmtContext* for_stmt();

  class  Foreach_varContext : public antlr4::ParserRuleContext {
  public:
    Foreach_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_IDENTIFIER();
    Single_new_local_defContext *single_new_local_def();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreach_varContext* foreach_var();

  class  Foreach_varsContext : public antlr4::ParserRuleContext {
  public:
    Foreach_varsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Foreach_varContext *> foreach_var();
    Foreach_varContext* foreach_var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreach_varsContext* foreach_vars();

  class  ForeachContext : public antlr4::ParserRuleContext {
  public:
    ForeachContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_FOREACH();
    Foreach_varsContext *foreach_vars();
    antlr4::tree::TerminalNode *L_IN();
    Expr0Context *expr0();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeachContext* foreach();

  class  For_exprContext : public antlr4::ParserRuleContext {
  public:
    For_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comma_exprContext *comma_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_exprContext* for_expr();

  class  First_for_exprContext : public antlr4::ParserRuleContext {
  public:
    First_for_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_exprContext *for_expr();
    Single_new_local_def_with_initContext *single_new_local_def_with_init();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  First_for_exprContext* first_for_expr();

  class  Switch_stmtContext : public antlr4::ParserRuleContext {
  public:
    Switch_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_SWITCH();
    Comma_exprContext *comma_expr();
    Local_declarationsContext *local_declarations();
    std::vector<Case_stmtContext *> case_stmt();
    Case_stmtContext* case_stmt(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_stmtContext* switch_stmt();

  class  Case_stmtContext : public antlr4::ParserRuleContext {
  public:
    Case_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_CASE();
    std::vector<Case_labelContext *> case_label();
    Case_labelContext* case_label(size_t i);
    antlr4::tree::TerminalNode *L_RANGE();
    antlr4::tree::TerminalNode *L_DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_stmtContext* case_stmt();

  class  Case_labelContext : public antlr4::ParserRuleContext {
  public:
    Case_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    String_con1Context *string_con1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_labelContext* case_label();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    antlr4::tree::TerminalNode *L_NUMBER();
    antlr4::tree::TerminalNode *L_NOT();
    antlr4::tree::TerminalNode *L_EQ();
    antlr4::tree::TerminalNode *L_NE();
    antlr4::tree::TerminalNode *L_ORDER();
    antlr4::tree::TerminalNode *L_LSH();
    antlr4::tree::TerminalNode *L_RSH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();
  ConstantContext* constant(int precedence);
  class  Comma_exprContext : public antlr4::ParserRuleContext {
  public:
    Comma_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expr0Context *> expr0();
    Expr0Context* expr0(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comma_exprContext* comma_expr();

  class  RefContext : public antlr4::ParserRuleContext {
  public:
    RefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefContext* ref();

  class  Expr0Context : public antlr4::ParserRuleContext {
  public:
    Expr0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RefContext *ref();
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *L_ASSIGN();
    std::vector<Expr0Context *> expr0();
    Expr0Context* expr0(size_t i);
    ErrorContext *error();
    CastContext *cast();
    antlr4::tree::TerminalNode *L_INC();
    antlr4::tree::TerminalNode *L_DEC();
    antlr4::tree::TerminalNode *L_NOT();
    Expr4Context *expr4();
    SscanfContext *sscanf();
    Parse_commandContext *parse_command();
    Time_expressionContext *time_expression();
    NumberContext *number();
    RealContext *real();
    antlr4::tree::TerminalNode *L_LOR();
    antlr4::tree::TerminalNode *L_LAND();
    antlr4::tree::TerminalNode *L_EQ();
    antlr4::tree::TerminalNode *L_NE();
    antlr4::tree::TerminalNode *L_ORDER();
    antlr4::tree::TerminalNode *L_LSH();
    antlr4::tree::TerminalNode *L_RSH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr0Context* expr0();
  Expr0Context* expr0(int precedence);
  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_RETURN();
    Comma_exprContext *comma_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_list2Context *expr_list2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_listContext* expr_list();

  class  Expr_list_nodeContext : public antlr4::ParserRuleContext {
  public:
    Expr_list_nodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr0Context *expr0();
    antlr4::tree::TerminalNode *L_DOT_DOT_DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_list_nodeContext* expr_list_node();

  class  Expr_list2Context : public antlr4::ParserRuleContext {
  public:
    Expr_list2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expr_list_nodeContext *> expr_list_node();
    Expr_list_nodeContext* expr_list_node(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_list2Context* expr_list2();

  class  Expr_list3Context : public antlr4::ParserRuleContext {
  public:
    Expr_list3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_list4Context *expr_list4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_list3Context* expr_list3();

  class  Expr_list4Context : public antlr4::ParserRuleContext {
  public:
    Expr_list4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assoc_pairContext *> assoc_pair();
    Assoc_pairContext* assoc_pair(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_list4Context* expr_list4();

  class  Assoc_pairContext : public antlr4::ParserRuleContext {
  public:
    Assoc_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expr0Context *> expr0();
    Expr0Context* expr0(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assoc_pairContext* assoc_pair();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr4Context *expr4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LvalueContext* lvalue();

  class  L_new_function_openContext : public antlr4::ParserRuleContext {
  public:
    L_new_function_openContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Efun_overrideContext *efun_override();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  L_new_function_openContext* l_new_function_open();

  class  Expr3Context : public antlr4::ParserRuleContext {
  public:
    Expr3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_IDENTIFIER();
    antlr4::tree::TerminalNode *L_PARAMETER();
    Comma_exprContext *comma_expr();
    StringContext *string();
    Catch_blockContext *catch_block();
    Tree_blockContext *tree_block();
    antlr4::tree::TerminalNode *L_BASIC_TYPE();
    ArgumentContext *argument();
    BlockContext *block();
    L_new_function_openContext *l_new_function_open();
    Expr_list2Context *expr_list2();
    antlr4::tree::TerminalNode *L_MAPPING_OPEN();
    Expr_list3Context *expr_list3();
    antlr4::tree::TerminalNode *L_ARRAY_OPEN();
    Expr_listContext *expr_list();
    Function_nameContext *function_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr3Context* expr3();

  class  Expr4Context : public antlr4::ParserRuleContext {
  public:
    Expr4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr3Context *expr3();
    std::vector<antlr4::tree::TerminalNode *> L_ARROW();
    antlr4::tree::TerminalNode* L_ARROW(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Comma_exprContext *> comma_expr();
    Comma_exprContext* comma_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> L_RANGE();
    antlr4::tree::TerminalNode* L_RANGE(size_t i);
    Efun_overrideContext *efun_override();
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *L_NEW();
    antlr4::tree::TerminalNode *L_CLASS();
    antlr4::tree::TerminalNode *L_IDENTIFIER();
    Opt_class_initContext *opt_class_init();
    Function_nameContext *function_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr4Context* expr4();

  class  Expr_or_blockContext : public antlr4::ParserRuleContext {
  public:
    Expr_or_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    Comma_exprContext *comma_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_or_blockContext* expr_or_block();

  class  Catch_blockContext : public antlr4::ParserRuleContext {
  public:
    Catch_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_CATCH();
    Expr_or_blockContext *expr_or_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Catch_blockContext* catch_block();

  class  Tree_blockContext : public antlr4::ParserRuleContext {
  public:
    Tree_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_TREE();
    BlockContext *block();
    Comma_exprContext *comma_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tree_blockContext* tree_block();

  class  SscanfContext : public antlr4::ParserRuleContext {
  public:
    SscanfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_SSCANF();
    std::vector<Expr0Context *> expr0();
    Expr0Context* expr0(size_t i);
    Lvalue_listContext *lvalue_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SscanfContext* sscanf();

  class  Parse_commandContext : public antlr4::ParserRuleContext {
  public:
    Parse_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PARSE_COMMAND();
    std::vector<Expr0Context *> expr0();
    Expr0Context* expr0(size_t i);
    Lvalue_listContext *lvalue_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parse_commandContext* parse_command();

  class  Time_expressionContext : public antlr4::ParserRuleContext {
  public:
    Time_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_TIME_EXPRESSION();
    Expr_or_blockContext *expr_or_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_expressionContext* time_expression();

  class  Lvalue_listContext : public antlr4::ParserRuleContext {
  public:
    Lvalue_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LvalueContext *> lvalue();
    LvalueContext* lvalue(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lvalue_listContext* lvalue_list();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_con2Context *string_con2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  String_con1Context : public antlr4::ParserRuleContext {
  public:
    String_con1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    String_con1Context() = default;
    void copyFrom(String_con1Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StringConstConcatContext : public String_con1Context {
  public:
    StringConstConcatContext(String_con1Context *ctx);

    String_con2Context *string_con2();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringConstPlusContext : public String_con1Context {
  public:
    StringConstPlusContext(String_con1Context *ctx);

    std::vector<String_con1Context *> string_con1();
    String_con1Context* string_con1(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringConstInParenContext : public String_con1Context {
  public:
    StringConstInParenContext(String_con1Context *ctx);

    String_con1Context *string_con1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  String_con1Context* string_con1();
  String_con1Context* string_con1(int precedence);
  class  String_con2Context : public antlr4::ParserRuleContext {
  public:
    String_con2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_STRING();
    antlr4::tree::TerminalNode* L_STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_con2Context* string_con2();

  class  Class_initContext : public antlr4::ParserRuleContext {
  public:
    Class_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Expr0Context *expr0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_initContext* class_init();

  class  Opt_class_initContext : public antlr4::ParserRuleContext {
  public:
    Opt_class_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Class_initContext *> class_init();
    Class_initContext* class_init(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_class_initContext* opt_class_init();

  class  Efun_overrideContext : public antlr4::ParserRuleContext {
  public:
    Efun_overrideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_EFUN();
    antlr4::tree::TerminalNode *L_COLON_COLON();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *L_NEW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Efun_overrideContext* efun_override();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_IDENTIFIER();
    antlr4::tree::TerminalNode *L_COLON_COLON();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *L_BASIC_TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_IF();
    Comma_exprContext *comma_expr();
    StatementContext *statement();
    Optional_else_partContext *optional_else_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondContext* cond();

  class  Optional_else_partContext : public antlr4::ParserRuleContext {
  public:
    Optional_else_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_ELSE();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optional_else_partContext* optional_else_part();

  class  ErrorContext : public antlr4::ParserRuleContext {
  public:
    ErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_ERROR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorContext* error();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool preprocessor_invoke_arglistSempred(Preprocessor_invoke_arglistContext *_localctx, size_t predicateIndex);
  bool constantSempred(ConstantContext *_localctx, size_t predicateIndex);
  bool expr0Sempred(Expr0Context *_localctx, size_t predicateIndex);
  bool string_con1Sempred(String_con1Context *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

