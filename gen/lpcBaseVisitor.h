
// Generated from D:/src/lpcfmt\lpc.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "lpcVisitor.h"


/**
 * This class provides an empty implementation of lpcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  lpcBaseVisitor : public lpcVisitor {
public:

  virtual antlrcpp::Any visitProgram(lpcParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessor_invoke_arglist(lpcParser::Preprocessor_invoke_arglistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessor_invoke(lpcParser::Preprocessor_invokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInheritance(lpcParser::InheritanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal(lpcParser::RealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(lpcParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptional_star(lpcParser::Optional_starContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_or_semi(lpcParser::Block_or_semiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(lpcParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(lpcParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDef(lpcParser::DefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(lpcParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifier_change(lpcParser::Modifier_changeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMember_name(lpcParser::Member_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_decl(lpcParser::Type_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_local_name(lpcParser::New_local_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomic_type(lpcParser::Atomic_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpt_atomic_type(lpcParser::Opt_atomic_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasic_type(lpcParser::Basic_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_type(lpcParser::Arg_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_arg(lpcParser::New_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(lpcParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument_list(lpcParser::Argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_modifier_list(lpcParser::Type_modifier_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(lpcParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCast(lpcParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpt_basic_type(lpcParser::Opt_basic_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_name(lpcParser::New_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(lpcParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl_block(lpcParser::Decl_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocal_declarations(lpcParser::Local_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_local_def(lpcParser::New_local_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_new_local_def(lpcParser::Single_new_local_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_new_local_def_with_init(lpcParser::Single_new_local_def_with_initContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(lpcParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stmt(lpcParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDo_stmt(lpcParser::Do_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_stmt(lpcParser::For_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeach_var(lpcParser::Foreach_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeach_vars(lpcParser::Foreach_varsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeach(lpcParser::ForeachContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_expr(lpcParser::For_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFirst_for_expr(lpcParser::First_for_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitch_stmt(lpcParser::Switch_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_stmt(lpcParser::Case_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_label(lpcParser::Case_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(lpcParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComma_expr(lpcParser::Comma_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRef(lpcParser::RefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr0(lpcParser::Expr0Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(lpcParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(lpcParser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list_node(lpcParser::Expr_list_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list2(lpcParser::Expr_list2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list3(lpcParser::Expr_list3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list4(lpcParser::Expr_list4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssoc_pair(lpcParser::Assoc_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLvalue(lpcParser::LvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitL_new_function_open(lpcParser::L_new_function_openContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr3(lpcParser::Expr3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr4(lpcParser::Expr4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_or_block(lpcParser::Expr_or_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatch_block(lpcParser::Catch_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTree_block(lpcParser::Tree_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSscanf(lpcParser::SscanfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParse_command(lpcParser::Parse_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTime_expression(lpcParser::Time_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLvalue_list(lpcParser::Lvalue_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(lpcParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringConstConcat(lpcParser::StringConstConcatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringConstPlus(lpcParser::StringConstPlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringConstInParen(lpcParser::StringConstInParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_con2(lpcParser::String_con2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClass_init(lpcParser::Class_initContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpt_class_init(lpcParser::Opt_class_initContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEfun_override(lpcParser::Efun_overrideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name(lpcParser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCond(lpcParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptional_else_part(lpcParser::Optional_else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError(lpcParser::ErrorContext *ctx) override {
    return visitChildren(ctx);
  }


};

