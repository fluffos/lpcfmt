
// Generated from D:/src/lpcfmt\lpc.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "lpcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by lpcParser.
 */
class  lpcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by lpcParser.
   */
    virtual antlrcpp::Any visitProgram(lpcParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessor_invoke_arglist(lpcParser::Preprocessor_invoke_arglistContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessor_invoke(lpcParser::Preprocessor_invokeContext *context) = 0;

    virtual antlrcpp::Any visitInheritance(lpcParser::InheritanceContext *context) = 0;

    virtual antlrcpp::Any visitReal(lpcParser::RealContext *context) = 0;

    virtual antlrcpp::Any visitNumber(lpcParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitOptional_star(lpcParser::Optional_starContext *context) = 0;

    virtual antlrcpp::Any visitBlock_or_semi(lpcParser::Block_or_semiContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(lpcParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitFunction(lpcParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitDef(lpcParser::DefContext *context) = 0;

    virtual antlrcpp::Any visitVar(lpcParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitModifier_change(lpcParser::Modifier_changeContext *context) = 0;

    virtual antlrcpp::Any visitMember_name(lpcParser::Member_nameContext *context) = 0;

    virtual antlrcpp::Any visitType_decl(lpcParser::Type_declContext *context) = 0;

    virtual antlrcpp::Any visitNew_local_name(lpcParser::New_local_nameContext *context) = 0;

    virtual antlrcpp::Any visitAtomic_type(lpcParser::Atomic_typeContext *context) = 0;

    virtual antlrcpp::Any visitOpt_atomic_type(lpcParser::Opt_atomic_typeContext *context) = 0;

    virtual antlrcpp::Any visitBasic_type(lpcParser::Basic_typeContext *context) = 0;

    virtual antlrcpp::Any visitArg_type(lpcParser::Arg_typeContext *context) = 0;

    virtual antlrcpp::Any visitNew_arg(lpcParser::New_argContext *context) = 0;

    virtual antlrcpp::Any visitArgument(lpcParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitArgument_list(lpcParser::Argument_listContext *context) = 0;

    virtual antlrcpp::Any visitType_modifier_list(lpcParser::Type_modifier_listContext *context) = 0;

    virtual antlrcpp::Any visitType(lpcParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitCast(lpcParser::CastContext *context) = 0;

    virtual antlrcpp::Any visitOpt_basic_type(lpcParser::Opt_basic_typeContext *context) = 0;

    virtual antlrcpp::Any visitNew_name(lpcParser::New_nameContext *context) = 0;

    virtual antlrcpp::Any visitBlock(lpcParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDecl_block(lpcParser::Decl_blockContext *context) = 0;

    virtual antlrcpp::Any visitLocal_declarations(lpcParser::Local_declarationsContext *context) = 0;

    virtual antlrcpp::Any visitNew_local_def(lpcParser::New_local_defContext *context) = 0;

    virtual antlrcpp::Any visitSingle_new_local_def(lpcParser::Single_new_local_defContext *context) = 0;

    virtual antlrcpp::Any visitSingle_new_local_def_with_init(lpcParser::Single_new_local_def_with_initContext *context) = 0;

    virtual antlrcpp::Any visitStatement(lpcParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(lpcParser::While_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDo_stmt(lpcParser::Do_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFor_stmt(lpcParser::For_stmtContext *context) = 0;

    virtual antlrcpp::Any visitForeach_var(lpcParser::Foreach_varContext *context) = 0;

    virtual antlrcpp::Any visitForeach_vars(lpcParser::Foreach_varsContext *context) = 0;

    virtual antlrcpp::Any visitForeach(lpcParser::ForeachContext *context) = 0;

    virtual antlrcpp::Any visitFor_expr(lpcParser::For_exprContext *context) = 0;

    virtual antlrcpp::Any visitFirst_for_expr(lpcParser::First_for_exprContext *context) = 0;

    virtual antlrcpp::Any visitSwitch_stmt(lpcParser::Switch_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCase_stmt(lpcParser::Case_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCase_label(lpcParser::Case_labelContext *context) = 0;

    virtual antlrcpp::Any visitConstant(lpcParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitComma_expr(lpcParser::Comma_exprContext *context) = 0;

    virtual antlrcpp::Any visitRef(lpcParser::RefContext *context) = 0;

    virtual antlrcpp::Any visitExpr0(lpcParser::Expr0Context *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(lpcParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list(lpcParser::Expr_listContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list_node(lpcParser::Expr_list_nodeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list2(lpcParser::Expr_list2Context *context) = 0;

    virtual antlrcpp::Any visitExpr_list3(lpcParser::Expr_list3Context *context) = 0;

    virtual antlrcpp::Any visitExpr_list4(lpcParser::Expr_list4Context *context) = 0;

    virtual antlrcpp::Any visitAssoc_pair(lpcParser::Assoc_pairContext *context) = 0;

    virtual antlrcpp::Any visitLvalue(lpcParser::LvalueContext *context) = 0;

    virtual antlrcpp::Any visitL_new_function_open(lpcParser::L_new_function_openContext *context) = 0;

    virtual antlrcpp::Any visitExpr3(lpcParser::Expr3Context *context) = 0;

    virtual antlrcpp::Any visitExpr4(lpcParser::Expr4Context *context) = 0;

    virtual antlrcpp::Any visitExpr_or_block(lpcParser::Expr_or_blockContext *context) = 0;

    virtual antlrcpp::Any visitCatch_block(lpcParser::Catch_blockContext *context) = 0;

    virtual antlrcpp::Any visitTree_block(lpcParser::Tree_blockContext *context) = 0;

    virtual antlrcpp::Any visitSscanf(lpcParser::SscanfContext *context) = 0;

    virtual antlrcpp::Any visitParse_command(lpcParser::Parse_commandContext *context) = 0;

    virtual antlrcpp::Any visitTime_expression(lpcParser::Time_expressionContext *context) = 0;

    virtual antlrcpp::Any visitLvalue_list(lpcParser::Lvalue_listContext *context) = 0;

    virtual antlrcpp::Any visitString(lpcParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitStringConstConcat(lpcParser::StringConstConcatContext *context) = 0;

    virtual antlrcpp::Any visitStringConstPlus(lpcParser::StringConstPlusContext *context) = 0;

    virtual antlrcpp::Any visitStringConstInParen(lpcParser::StringConstInParenContext *context) = 0;

    virtual antlrcpp::Any visitString_con2(lpcParser::String_con2Context *context) = 0;

    virtual antlrcpp::Any visitClass_init(lpcParser::Class_initContext *context) = 0;

    virtual antlrcpp::Any visitOpt_class_init(lpcParser::Opt_class_initContext *context) = 0;

    virtual antlrcpp::Any visitEfun_override(lpcParser::Efun_overrideContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(lpcParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitCond(lpcParser::CondContext *context) = 0;

    virtual antlrcpp::Any visitOptional_else_part(lpcParser::Optional_else_partContext *context) = 0;

    virtual antlrcpp::Any visitError(lpcParser::ErrorContext *context) = 0;


};

