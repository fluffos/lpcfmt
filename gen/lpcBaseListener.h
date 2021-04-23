
// Generated from D:/src/lpcfmt\lpc.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "lpcListener.h"


/**
 * This class provides an empty implementation of lpcListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  lpcBaseListener : public lpcListener {
public:

  virtual void enterProgram(lpcParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(lpcParser::ProgramContext * /*ctx*/) override { }

  virtual void enterPreprocessor_invoke_arglist(lpcParser::Preprocessor_invoke_arglistContext * /*ctx*/) override { }
  virtual void exitPreprocessor_invoke_arglist(lpcParser::Preprocessor_invoke_arglistContext * /*ctx*/) override { }

  virtual void enterPreprocessor_invoke(lpcParser::Preprocessor_invokeContext * /*ctx*/) override { }
  virtual void exitPreprocessor_invoke(lpcParser::Preprocessor_invokeContext * /*ctx*/) override { }

  virtual void enterInheritance(lpcParser::InheritanceContext * /*ctx*/) override { }
  virtual void exitInheritance(lpcParser::InheritanceContext * /*ctx*/) override { }

  virtual void enterReal(lpcParser::RealContext * /*ctx*/) override { }
  virtual void exitReal(lpcParser::RealContext * /*ctx*/) override { }

  virtual void enterNumber(lpcParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(lpcParser::NumberContext * /*ctx*/) override { }

  virtual void enterOptional_star(lpcParser::Optional_starContext * /*ctx*/) override { }
  virtual void exitOptional_star(lpcParser::Optional_starContext * /*ctx*/) override { }

  virtual void enterBlock_or_semi(lpcParser::Block_or_semiContext * /*ctx*/) override { }
  virtual void exitBlock_or_semi(lpcParser::Block_or_semiContext * /*ctx*/) override { }

  virtual void enterIdentifier(lpcParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(lpcParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterFunction(lpcParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(lpcParser::FunctionContext * /*ctx*/) override { }

  virtual void enterDef(lpcParser::DefContext * /*ctx*/) override { }
  virtual void exitDef(lpcParser::DefContext * /*ctx*/) override { }

  virtual void enterVar(lpcParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(lpcParser::VarContext * /*ctx*/) override { }

  virtual void enterModifier_change(lpcParser::Modifier_changeContext * /*ctx*/) override { }
  virtual void exitModifier_change(lpcParser::Modifier_changeContext * /*ctx*/) override { }

  virtual void enterMember_name(lpcParser::Member_nameContext * /*ctx*/) override { }
  virtual void exitMember_name(lpcParser::Member_nameContext * /*ctx*/) override { }

  virtual void enterType_decl(lpcParser::Type_declContext * /*ctx*/) override { }
  virtual void exitType_decl(lpcParser::Type_declContext * /*ctx*/) override { }

  virtual void enterNew_local_name(lpcParser::New_local_nameContext * /*ctx*/) override { }
  virtual void exitNew_local_name(lpcParser::New_local_nameContext * /*ctx*/) override { }

  virtual void enterAtomic_type(lpcParser::Atomic_typeContext * /*ctx*/) override { }
  virtual void exitAtomic_type(lpcParser::Atomic_typeContext * /*ctx*/) override { }

  virtual void enterOpt_atomic_type(lpcParser::Opt_atomic_typeContext * /*ctx*/) override { }
  virtual void exitOpt_atomic_type(lpcParser::Opt_atomic_typeContext * /*ctx*/) override { }

  virtual void enterBasic_type(lpcParser::Basic_typeContext * /*ctx*/) override { }
  virtual void exitBasic_type(lpcParser::Basic_typeContext * /*ctx*/) override { }

  virtual void enterArg_type(lpcParser::Arg_typeContext * /*ctx*/) override { }
  virtual void exitArg_type(lpcParser::Arg_typeContext * /*ctx*/) override { }

  virtual void enterNew_arg(lpcParser::New_argContext * /*ctx*/) override { }
  virtual void exitNew_arg(lpcParser::New_argContext * /*ctx*/) override { }

  virtual void enterArgument(lpcParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(lpcParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterArgument_list(lpcParser::Argument_listContext * /*ctx*/) override { }
  virtual void exitArgument_list(lpcParser::Argument_listContext * /*ctx*/) override { }

  virtual void enterType_modifier_list(lpcParser::Type_modifier_listContext * /*ctx*/) override { }
  virtual void exitType_modifier_list(lpcParser::Type_modifier_listContext * /*ctx*/) override { }

  virtual void enterType(lpcParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(lpcParser::TypeContext * /*ctx*/) override { }

  virtual void enterCast(lpcParser::CastContext * /*ctx*/) override { }
  virtual void exitCast(lpcParser::CastContext * /*ctx*/) override { }

  virtual void enterOpt_basic_type(lpcParser::Opt_basic_typeContext * /*ctx*/) override { }
  virtual void exitOpt_basic_type(lpcParser::Opt_basic_typeContext * /*ctx*/) override { }

  virtual void enterNew_name(lpcParser::New_nameContext * /*ctx*/) override { }
  virtual void exitNew_name(lpcParser::New_nameContext * /*ctx*/) override { }

  virtual void enterBlock(lpcParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(lpcParser::BlockContext * /*ctx*/) override { }

  virtual void enterDecl_block(lpcParser::Decl_blockContext * /*ctx*/) override { }
  virtual void exitDecl_block(lpcParser::Decl_blockContext * /*ctx*/) override { }

  virtual void enterLocal_declarations(lpcParser::Local_declarationsContext * /*ctx*/) override { }
  virtual void exitLocal_declarations(lpcParser::Local_declarationsContext * /*ctx*/) override { }

  virtual void enterNew_local_def(lpcParser::New_local_defContext * /*ctx*/) override { }
  virtual void exitNew_local_def(lpcParser::New_local_defContext * /*ctx*/) override { }

  virtual void enterSingle_new_local_def(lpcParser::Single_new_local_defContext * /*ctx*/) override { }
  virtual void exitSingle_new_local_def(lpcParser::Single_new_local_defContext * /*ctx*/) override { }

  virtual void enterSingle_new_local_def_with_init(lpcParser::Single_new_local_def_with_initContext * /*ctx*/) override { }
  virtual void exitSingle_new_local_def_with_init(lpcParser::Single_new_local_def_with_initContext * /*ctx*/) override { }

  virtual void enterStatement(lpcParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(lpcParser::StatementContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(lpcParser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(lpcParser::While_stmtContext * /*ctx*/) override { }

  virtual void enterDo_stmt(lpcParser::Do_stmtContext * /*ctx*/) override { }
  virtual void exitDo_stmt(lpcParser::Do_stmtContext * /*ctx*/) override { }

  virtual void enterFor_stmt(lpcParser::For_stmtContext * /*ctx*/) override { }
  virtual void exitFor_stmt(lpcParser::For_stmtContext * /*ctx*/) override { }

  virtual void enterForeach_var(lpcParser::Foreach_varContext * /*ctx*/) override { }
  virtual void exitForeach_var(lpcParser::Foreach_varContext * /*ctx*/) override { }

  virtual void enterForeach_vars(lpcParser::Foreach_varsContext * /*ctx*/) override { }
  virtual void exitForeach_vars(lpcParser::Foreach_varsContext * /*ctx*/) override { }

  virtual void enterForeach(lpcParser::ForeachContext * /*ctx*/) override { }
  virtual void exitForeach(lpcParser::ForeachContext * /*ctx*/) override { }

  virtual void enterFor_expr(lpcParser::For_exprContext * /*ctx*/) override { }
  virtual void exitFor_expr(lpcParser::For_exprContext * /*ctx*/) override { }

  virtual void enterFirst_for_expr(lpcParser::First_for_exprContext * /*ctx*/) override { }
  virtual void exitFirst_for_expr(lpcParser::First_for_exprContext * /*ctx*/) override { }

  virtual void enterSwitch_stmt(lpcParser::Switch_stmtContext * /*ctx*/) override { }
  virtual void exitSwitch_stmt(lpcParser::Switch_stmtContext * /*ctx*/) override { }

  virtual void enterCase_stmt(lpcParser::Case_stmtContext * /*ctx*/) override { }
  virtual void exitCase_stmt(lpcParser::Case_stmtContext * /*ctx*/) override { }

  virtual void enterCase_label(lpcParser::Case_labelContext * /*ctx*/) override { }
  virtual void exitCase_label(lpcParser::Case_labelContext * /*ctx*/) override { }

  virtual void enterConstant(lpcParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(lpcParser::ConstantContext * /*ctx*/) override { }

  virtual void enterComma_expr(lpcParser::Comma_exprContext * /*ctx*/) override { }
  virtual void exitComma_expr(lpcParser::Comma_exprContext * /*ctx*/) override { }

  virtual void enterRef(lpcParser::RefContext * /*ctx*/) override { }
  virtual void exitRef(lpcParser::RefContext * /*ctx*/) override { }

  virtual void enterExpr0(lpcParser::Expr0Context * /*ctx*/) override { }
  virtual void exitExpr0(lpcParser::Expr0Context * /*ctx*/) override { }

  virtual void enterReturn_stmt(lpcParser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(lpcParser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterExpr_list(lpcParser::Expr_listContext * /*ctx*/) override { }
  virtual void exitExpr_list(lpcParser::Expr_listContext * /*ctx*/) override { }

  virtual void enterExpr_list_node(lpcParser::Expr_list_nodeContext * /*ctx*/) override { }
  virtual void exitExpr_list_node(lpcParser::Expr_list_nodeContext * /*ctx*/) override { }

  virtual void enterExpr_list2(lpcParser::Expr_list2Context * /*ctx*/) override { }
  virtual void exitExpr_list2(lpcParser::Expr_list2Context * /*ctx*/) override { }

  virtual void enterExpr_list3(lpcParser::Expr_list3Context * /*ctx*/) override { }
  virtual void exitExpr_list3(lpcParser::Expr_list3Context * /*ctx*/) override { }

  virtual void enterExpr_list4(lpcParser::Expr_list4Context * /*ctx*/) override { }
  virtual void exitExpr_list4(lpcParser::Expr_list4Context * /*ctx*/) override { }

  virtual void enterAssoc_pair(lpcParser::Assoc_pairContext * /*ctx*/) override { }
  virtual void exitAssoc_pair(lpcParser::Assoc_pairContext * /*ctx*/) override { }

  virtual void enterLvalue(lpcParser::LvalueContext * /*ctx*/) override { }
  virtual void exitLvalue(lpcParser::LvalueContext * /*ctx*/) override { }

  virtual void enterL_new_function_open(lpcParser::L_new_function_openContext * /*ctx*/) override { }
  virtual void exitL_new_function_open(lpcParser::L_new_function_openContext * /*ctx*/) override { }

  virtual void enterExpr3(lpcParser::Expr3Context * /*ctx*/) override { }
  virtual void exitExpr3(lpcParser::Expr3Context * /*ctx*/) override { }

  virtual void enterExpr4(lpcParser::Expr4Context * /*ctx*/) override { }
  virtual void exitExpr4(lpcParser::Expr4Context * /*ctx*/) override { }

  virtual void enterExpr_or_block(lpcParser::Expr_or_blockContext * /*ctx*/) override { }
  virtual void exitExpr_or_block(lpcParser::Expr_or_blockContext * /*ctx*/) override { }

  virtual void enterCatch_block(lpcParser::Catch_blockContext * /*ctx*/) override { }
  virtual void exitCatch_block(lpcParser::Catch_blockContext * /*ctx*/) override { }

  virtual void enterTree_block(lpcParser::Tree_blockContext * /*ctx*/) override { }
  virtual void exitTree_block(lpcParser::Tree_blockContext * /*ctx*/) override { }

  virtual void enterSscanf(lpcParser::SscanfContext * /*ctx*/) override { }
  virtual void exitSscanf(lpcParser::SscanfContext * /*ctx*/) override { }

  virtual void enterParse_command(lpcParser::Parse_commandContext * /*ctx*/) override { }
  virtual void exitParse_command(lpcParser::Parse_commandContext * /*ctx*/) override { }

  virtual void enterTime_expression(lpcParser::Time_expressionContext * /*ctx*/) override { }
  virtual void exitTime_expression(lpcParser::Time_expressionContext * /*ctx*/) override { }

  virtual void enterLvalue_list(lpcParser::Lvalue_listContext * /*ctx*/) override { }
  virtual void exitLvalue_list(lpcParser::Lvalue_listContext * /*ctx*/) override { }

  virtual void enterString(lpcParser::StringContext * /*ctx*/) override { }
  virtual void exitString(lpcParser::StringContext * /*ctx*/) override { }

  virtual void enterStringConstConcat(lpcParser::StringConstConcatContext * /*ctx*/) override { }
  virtual void exitStringConstConcat(lpcParser::StringConstConcatContext * /*ctx*/) override { }

  virtual void enterStringConstPlus(lpcParser::StringConstPlusContext * /*ctx*/) override { }
  virtual void exitStringConstPlus(lpcParser::StringConstPlusContext * /*ctx*/) override { }

  virtual void enterStringConstInParen(lpcParser::StringConstInParenContext * /*ctx*/) override { }
  virtual void exitStringConstInParen(lpcParser::StringConstInParenContext * /*ctx*/) override { }

  virtual void enterString_con2(lpcParser::String_con2Context * /*ctx*/) override { }
  virtual void exitString_con2(lpcParser::String_con2Context * /*ctx*/) override { }

  virtual void enterClass_init(lpcParser::Class_initContext * /*ctx*/) override { }
  virtual void exitClass_init(lpcParser::Class_initContext * /*ctx*/) override { }

  virtual void enterOpt_class_init(lpcParser::Opt_class_initContext * /*ctx*/) override { }
  virtual void exitOpt_class_init(lpcParser::Opt_class_initContext * /*ctx*/) override { }

  virtual void enterEfun_override(lpcParser::Efun_overrideContext * /*ctx*/) override { }
  virtual void exitEfun_override(lpcParser::Efun_overrideContext * /*ctx*/) override { }

  virtual void enterFunction_name(lpcParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(lpcParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterCond(lpcParser::CondContext * /*ctx*/) override { }
  virtual void exitCond(lpcParser::CondContext * /*ctx*/) override { }

  virtual void enterOptional_else_part(lpcParser::Optional_else_partContext * /*ctx*/) override { }
  virtual void exitOptional_else_part(lpcParser::Optional_else_partContext * /*ctx*/) override { }

  virtual void enterError(lpcParser::ErrorContext * /*ctx*/) override { }
  virtual void exitError(lpcParser::ErrorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

