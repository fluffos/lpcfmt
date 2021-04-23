
// Generated from D:/src/lpcfmt\lpc.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "lpcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by lpcParser.
 */
class  lpcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(lpcParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(lpcParser::ProgramContext *ctx) = 0;

  virtual void enterPreprocessor_invoke_arglist(lpcParser::Preprocessor_invoke_arglistContext *ctx) = 0;
  virtual void exitPreprocessor_invoke_arglist(lpcParser::Preprocessor_invoke_arglistContext *ctx) = 0;

  virtual void enterPreprocessor_invoke(lpcParser::Preprocessor_invokeContext *ctx) = 0;
  virtual void exitPreprocessor_invoke(lpcParser::Preprocessor_invokeContext *ctx) = 0;

  virtual void enterInheritance(lpcParser::InheritanceContext *ctx) = 0;
  virtual void exitInheritance(lpcParser::InheritanceContext *ctx) = 0;

  virtual void enterReal(lpcParser::RealContext *ctx) = 0;
  virtual void exitReal(lpcParser::RealContext *ctx) = 0;

  virtual void enterNumber(lpcParser::NumberContext *ctx) = 0;
  virtual void exitNumber(lpcParser::NumberContext *ctx) = 0;

  virtual void enterOptional_star(lpcParser::Optional_starContext *ctx) = 0;
  virtual void exitOptional_star(lpcParser::Optional_starContext *ctx) = 0;

  virtual void enterBlock_or_semi(lpcParser::Block_or_semiContext *ctx) = 0;
  virtual void exitBlock_or_semi(lpcParser::Block_or_semiContext *ctx) = 0;

  virtual void enterIdentifier(lpcParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(lpcParser::IdentifierContext *ctx) = 0;

  virtual void enterFunction(lpcParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(lpcParser::FunctionContext *ctx) = 0;

  virtual void enterDef(lpcParser::DefContext *ctx) = 0;
  virtual void exitDef(lpcParser::DefContext *ctx) = 0;

  virtual void enterVar(lpcParser::VarContext *ctx) = 0;
  virtual void exitVar(lpcParser::VarContext *ctx) = 0;

  virtual void enterModifier_change(lpcParser::Modifier_changeContext *ctx) = 0;
  virtual void exitModifier_change(lpcParser::Modifier_changeContext *ctx) = 0;

  virtual void enterMember_name(lpcParser::Member_nameContext *ctx) = 0;
  virtual void exitMember_name(lpcParser::Member_nameContext *ctx) = 0;

  virtual void enterType_decl(lpcParser::Type_declContext *ctx) = 0;
  virtual void exitType_decl(lpcParser::Type_declContext *ctx) = 0;

  virtual void enterNew_local_name(lpcParser::New_local_nameContext *ctx) = 0;
  virtual void exitNew_local_name(lpcParser::New_local_nameContext *ctx) = 0;

  virtual void enterAtomic_type(lpcParser::Atomic_typeContext *ctx) = 0;
  virtual void exitAtomic_type(lpcParser::Atomic_typeContext *ctx) = 0;

  virtual void enterOpt_atomic_type(lpcParser::Opt_atomic_typeContext *ctx) = 0;
  virtual void exitOpt_atomic_type(lpcParser::Opt_atomic_typeContext *ctx) = 0;

  virtual void enterBasic_type(lpcParser::Basic_typeContext *ctx) = 0;
  virtual void exitBasic_type(lpcParser::Basic_typeContext *ctx) = 0;

  virtual void enterArg_type(lpcParser::Arg_typeContext *ctx) = 0;
  virtual void exitArg_type(lpcParser::Arg_typeContext *ctx) = 0;

  virtual void enterNew_arg(lpcParser::New_argContext *ctx) = 0;
  virtual void exitNew_arg(lpcParser::New_argContext *ctx) = 0;

  virtual void enterArgument(lpcParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(lpcParser::ArgumentContext *ctx) = 0;

  virtual void enterArgument_list(lpcParser::Argument_listContext *ctx) = 0;
  virtual void exitArgument_list(lpcParser::Argument_listContext *ctx) = 0;

  virtual void enterType_modifier_list(lpcParser::Type_modifier_listContext *ctx) = 0;
  virtual void exitType_modifier_list(lpcParser::Type_modifier_listContext *ctx) = 0;

  virtual void enterType(lpcParser::TypeContext *ctx) = 0;
  virtual void exitType(lpcParser::TypeContext *ctx) = 0;

  virtual void enterCast(lpcParser::CastContext *ctx) = 0;
  virtual void exitCast(lpcParser::CastContext *ctx) = 0;

  virtual void enterOpt_basic_type(lpcParser::Opt_basic_typeContext *ctx) = 0;
  virtual void exitOpt_basic_type(lpcParser::Opt_basic_typeContext *ctx) = 0;

  virtual void enterNew_name(lpcParser::New_nameContext *ctx) = 0;
  virtual void exitNew_name(lpcParser::New_nameContext *ctx) = 0;

  virtual void enterBlock(lpcParser::BlockContext *ctx) = 0;
  virtual void exitBlock(lpcParser::BlockContext *ctx) = 0;

  virtual void enterDecl_block(lpcParser::Decl_blockContext *ctx) = 0;
  virtual void exitDecl_block(lpcParser::Decl_blockContext *ctx) = 0;

  virtual void enterLocal_declarations(lpcParser::Local_declarationsContext *ctx) = 0;
  virtual void exitLocal_declarations(lpcParser::Local_declarationsContext *ctx) = 0;

  virtual void enterNew_local_def(lpcParser::New_local_defContext *ctx) = 0;
  virtual void exitNew_local_def(lpcParser::New_local_defContext *ctx) = 0;

  virtual void enterSingle_new_local_def(lpcParser::Single_new_local_defContext *ctx) = 0;
  virtual void exitSingle_new_local_def(lpcParser::Single_new_local_defContext *ctx) = 0;

  virtual void enterSingle_new_local_def_with_init(lpcParser::Single_new_local_def_with_initContext *ctx) = 0;
  virtual void exitSingle_new_local_def_with_init(lpcParser::Single_new_local_def_with_initContext *ctx) = 0;

  virtual void enterStatement(lpcParser::StatementContext *ctx) = 0;
  virtual void exitStatement(lpcParser::StatementContext *ctx) = 0;

  virtual void enterWhile_stmt(lpcParser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(lpcParser::While_stmtContext *ctx) = 0;

  virtual void enterDo_stmt(lpcParser::Do_stmtContext *ctx) = 0;
  virtual void exitDo_stmt(lpcParser::Do_stmtContext *ctx) = 0;

  virtual void enterFor_stmt(lpcParser::For_stmtContext *ctx) = 0;
  virtual void exitFor_stmt(lpcParser::For_stmtContext *ctx) = 0;

  virtual void enterForeach_var(lpcParser::Foreach_varContext *ctx) = 0;
  virtual void exitForeach_var(lpcParser::Foreach_varContext *ctx) = 0;

  virtual void enterForeach_vars(lpcParser::Foreach_varsContext *ctx) = 0;
  virtual void exitForeach_vars(lpcParser::Foreach_varsContext *ctx) = 0;

  virtual void enterForeach(lpcParser::ForeachContext *ctx) = 0;
  virtual void exitForeach(lpcParser::ForeachContext *ctx) = 0;

  virtual void enterFor_expr(lpcParser::For_exprContext *ctx) = 0;
  virtual void exitFor_expr(lpcParser::For_exprContext *ctx) = 0;

  virtual void enterFirst_for_expr(lpcParser::First_for_exprContext *ctx) = 0;
  virtual void exitFirst_for_expr(lpcParser::First_for_exprContext *ctx) = 0;

  virtual void enterSwitch_stmt(lpcParser::Switch_stmtContext *ctx) = 0;
  virtual void exitSwitch_stmt(lpcParser::Switch_stmtContext *ctx) = 0;

  virtual void enterCase_stmt(lpcParser::Case_stmtContext *ctx) = 0;
  virtual void exitCase_stmt(lpcParser::Case_stmtContext *ctx) = 0;

  virtual void enterCase_label(lpcParser::Case_labelContext *ctx) = 0;
  virtual void exitCase_label(lpcParser::Case_labelContext *ctx) = 0;

  virtual void enterConstant(lpcParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(lpcParser::ConstantContext *ctx) = 0;

  virtual void enterComma_expr(lpcParser::Comma_exprContext *ctx) = 0;
  virtual void exitComma_expr(lpcParser::Comma_exprContext *ctx) = 0;

  virtual void enterRef(lpcParser::RefContext *ctx) = 0;
  virtual void exitRef(lpcParser::RefContext *ctx) = 0;

  virtual void enterExpr0(lpcParser::Expr0Context *ctx) = 0;
  virtual void exitExpr0(lpcParser::Expr0Context *ctx) = 0;

  virtual void enterReturn_stmt(lpcParser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(lpcParser::Return_stmtContext *ctx) = 0;

  virtual void enterExpr_list(lpcParser::Expr_listContext *ctx) = 0;
  virtual void exitExpr_list(lpcParser::Expr_listContext *ctx) = 0;

  virtual void enterExpr_list_node(lpcParser::Expr_list_nodeContext *ctx) = 0;
  virtual void exitExpr_list_node(lpcParser::Expr_list_nodeContext *ctx) = 0;

  virtual void enterExpr_list2(lpcParser::Expr_list2Context *ctx) = 0;
  virtual void exitExpr_list2(lpcParser::Expr_list2Context *ctx) = 0;

  virtual void enterExpr_list3(lpcParser::Expr_list3Context *ctx) = 0;
  virtual void exitExpr_list3(lpcParser::Expr_list3Context *ctx) = 0;

  virtual void enterExpr_list4(lpcParser::Expr_list4Context *ctx) = 0;
  virtual void exitExpr_list4(lpcParser::Expr_list4Context *ctx) = 0;

  virtual void enterAssoc_pair(lpcParser::Assoc_pairContext *ctx) = 0;
  virtual void exitAssoc_pair(lpcParser::Assoc_pairContext *ctx) = 0;

  virtual void enterLvalue(lpcParser::LvalueContext *ctx) = 0;
  virtual void exitLvalue(lpcParser::LvalueContext *ctx) = 0;

  virtual void enterL_new_function_open(lpcParser::L_new_function_openContext *ctx) = 0;
  virtual void exitL_new_function_open(lpcParser::L_new_function_openContext *ctx) = 0;

  virtual void enterExpr3(lpcParser::Expr3Context *ctx) = 0;
  virtual void exitExpr3(lpcParser::Expr3Context *ctx) = 0;

  virtual void enterExpr4(lpcParser::Expr4Context *ctx) = 0;
  virtual void exitExpr4(lpcParser::Expr4Context *ctx) = 0;

  virtual void enterExpr_or_block(lpcParser::Expr_or_blockContext *ctx) = 0;
  virtual void exitExpr_or_block(lpcParser::Expr_or_blockContext *ctx) = 0;

  virtual void enterCatch_block(lpcParser::Catch_blockContext *ctx) = 0;
  virtual void exitCatch_block(lpcParser::Catch_blockContext *ctx) = 0;

  virtual void enterTree_block(lpcParser::Tree_blockContext *ctx) = 0;
  virtual void exitTree_block(lpcParser::Tree_blockContext *ctx) = 0;

  virtual void enterSscanf(lpcParser::SscanfContext *ctx) = 0;
  virtual void exitSscanf(lpcParser::SscanfContext *ctx) = 0;

  virtual void enterParse_command(lpcParser::Parse_commandContext *ctx) = 0;
  virtual void exitParse_command(lpcParser::Parse_commandContext *ctx) = 0;

  virtual void enterTime_expression(lpcParser::Time_expressionContext *ctx) = 0;
  virtual void exitTime_expression(lpcParser::Time_expressionContext *ctx) = 0;

  virtual void enterLvalue_list(lpcParser::Lvalue_listContext *ctx) = 0;
  virtual void exitLvalue_list(lpcParser::Lvalue_listContext *ctx) = 0;

  virtual void enterString(lpcParser::StringContext *ctx) = 0;
  virtual void exitString(lpcParser::StringContext *ctx) = 0;

  virtual void enterStringConstConcat(lpcParser::StringConstConcatContext *ctx) = 0;
  virtual void exitStringConstConcat(lpcParser::StringConstConcatContext *ctx) = 0;

  virtual void enterStringConstPlus(lpcParser::StringConstPlusContext *ctx) = 0;
  virtual void exitStringConstPlus(lpcParser::StringConstPlusContext *ctx) = 0;

  virtual void enterStringConstInParen(lpcParser::StringConstInParenContext *ctx) = 0;
  virtual void exitStringConstInParen(lpcParser::StringConstInParenContext *ctx) = 0;

  virtual void enterString_con2(lpcParser::String_con2Context *ctx) = 0;
  virtual void exitString_con2(lpcParser::String_con2Context *ctx) = 0;

  virtual void enterClass_init(lpcParser::Class_initContext *ctx) = 0;
  virtual void exitClass_init(lpcParser::Class_initContext *ctx) = 0;

  virtual void enterOpt_class_init(lpcParser::Opt_class_initContext *ctx) = 0;
  virtual void exitOpt_class_init(lpcParser::Opt_class_initContext *ctx) = 0;

  virtual void enterEfun_override(lpcParser::Efun_overrideContext *ctx) = 0;
  virtual void exitEfun_override(lpcParser::Efun_overrideContext *ctx) = 0;

  virtual void enterFunction_name(lpcParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(lpcParser::Function_nameContext *ctx) = 0;

  virtual void enterCond(lpcParser::CondContext *ctx) = 0;
  virtual void exitCond(lpcParser::CondContext *ctx) = 0;

  virtual void enterOptional_else_part(lpcParser::Optional_else_partContext *ctx) = 0;
  virtual void exitOptional_else_part(lpcParser::Optional_else_partContext *ctx) = 0;

  virtual void enterError(lpcParser::ErrorContext *ctx) = 0;
  virtual void exitError(lpcParser::ErrorContext *ctx) = 0;


};

