grammar lpc;

import literal, lpcid;

BlockComment
    :   '/*' .*? '*/'
        -> channel(HIDDEN);


LineComment
    :   '//' ~[\r\n]*
         -> channel(HIDDEN);


Whitespace
    :   [ \t]+
        -> skip
    ;

Newline
    :   (   '\r' '\n'?
        |   '\n'
        )
         -> channel(HIDDEN);


L_PREPROCESSOR_COMMAND:
    '#' ~[\r\n]* -> channel(HIDDEN);



L_TREE: '__TREE__';
L_BREAK: 'break';
L_CASE: 'case';
L_CATCH: 'catch';
L_CLASS: 'class'
        | 'struct' ;
L_CONTINUE: 'continue';
L_DEFAULT: 'default';
L_DO: 'do';
L_EFUN: 'efun';
L_ELSE: 'else';
L_BASIC_TYPE:
        'float' // TYPE_REAL
        | 'function'
        | 'int'
        | 'mapping'
        | 'object'
        | 'string'
        | 'mixed'
        | 'void' ;
L_FOR: 'for';
L_FOREACH: 'foreach';
L_IF: 'if';
L_IN: 'in';
L_INHERIT: 'inherit';
L_NEW: 'new';

L_TYPE_MODIFIER:
        'nomask'
        | 'nosave'
        | 'private'
        | 'protected'
        | 'public'
        | 'static'
        | 'varargs';

L_PARSE_COMMAND: 'parse_command';
L_REF: 'ref';
L_RETURN: 'return';
L_SSCANF: 'sscanf';

L_SWITCH: 'switch';

L_TIME_EXPRESSION: 'time_expression';
L_WHILE: 'while';

L_STRING: StringLiteral;
L_NUMBER: CharacterConstant | IntegerConstant;
L_REAL: FloatingConstant;

L_IDENTIFIER: L_IDENTIFIER_LITERAL;
L_LAND: '&&';
L_LOR: '||';
L_LSH: '<<';
L_RSH: '>>';
L_NOT: '!';
L_RANGE: '..';
L_DOT_DOT_DOT: '...';
L_ARRAY: 'array';

L_PARAMETER: '$' DecimalConstant;

L_ORDER: '<=' | '>=';
L_ASSIGN: '=' | '+=' | '-=' | '&=' | '|=' | '^='
          | '>>='
          | '<<='
          | '*='
          | '%='
          | '/=';
L_INC: '++';
L_DEC: '--';
L_EQ: '==';
L_NE: '!=';
L_ARROW: '->';
L_COLON_COLON: '::';
L_ARRAY_OPEN: '({';
L_MAPPING_OPEN: '([';

program: (preprocessor_invoke | def | ';')* EOF;

preprocessor_invoke_arglist:
        preprocessor_invoke_arglist ',' preprocessor_invoke_arglist
       | (preprocessor_invoke | L_STRING);

preprocessor_invoke: L_IDENTIFIER
                    | L_IDENTIFIER '(' (preprocessor_invoke_arglist) ')';
inheritance
         : type_modifier_list L_INHERIT string_con1 ';';
real     : L_REAL;
number   : L_NUMBER;
optional_star
         : '*'?;
block_or_semi
         : block
           | ';'
           | error;
//identifier
//         : L_DEFINED_NAME
//           | L_IDENTIFIER;
identifier
         : L_IDENTIFIER;

function : type optional_star identifier '(' argument ')' block_or_semi;
def      : function
           | var
           | inheritance
           | type_decl
           | modifier_change;

var : type new_name (',' new_name)* ';';

modifier_change
         : type_modifier_list ':';
member_name
         : optional_star identifier;
type_decl
         : type_modifier_list L_CLASS identifier '{' ( basic_type ( member_name ',' )* member_name ';' )* '}';
new_local_name
         : L_IDENTIFIER;
           //| L_DEFINED_NAME;
atomic_type
         : L_BASIC_TYPE
           //| L_CLASS L_DEFINED_NAME
           | L_CLASS L_IDENTIFIER;
opt_atomic_type
         : atomic_type?;
basic_type
         : atomic_type
           | opt_atomic_type L_ARRAY;
arg_type : basic_type
           | basic_type ref;
new_arg  : arg_type optional_star
           | arg_type optional_star new_local_name
           | new_local_name;
argument : ( argument_list | argument_list L_DOT_DOT_DOT )?;
argument_list
         : new_arg ( ',' new_arg )*;
type_modifier_list
         : L_TYPE_MODIFIER*;
type     : type_modifier_list opt_basic_type;
cast     : '(' basic_type optional_star ')';
opt_basic_type
         : basic_type?;
new_name : optional_star identifier
           | optional_star identifier L_ASSIGN expr0;
block    : '{' local_declarations statement* ( error ';' )? '}';
decl_block
         : block
           | for_stmt
           | foreach;
local_declarations
         : ( basic_type ( new_local_def ',' )* new_local_def ';' )*;
new_local_def
         : optional_star new_local_name
           | optional_star new_local_name L_ASSIGN expr0;
single_new_local_def
         : arg_type optional_star new_local_name;
single_new_local_def_with_init
         : single_new_local_def L_ASSIGN expr0;
statement
         : comma_expr ';'
           | cond
           | while_stmt
           | do_stmt
           | switch_stmt
           | return_stmt
           | decl_block
           | ';'
           | L_BREAK ';'
           | L_CONTINUE ';';
while_stmt    : L_WHILE '(' comma_expr ')' statement;
do_stmt       : L_DO statement L_WHILE '(' comma_expr ')' ';';
for_stmt      : L_FOR '(' first_for_expr ';' for_expr ';' for_expr ')' statement;
foreach_var
         : L_IDENTIFIER
           | single_new_local_def;
           //| L_DEFINED_NAME;
foreach_vars
         : foreach_var
           | foreach_var ',' foreach_var;
foreach  : L_FOREACH '(' foreach_vars L_IN expr0 ')' statement;
for_expr : comma_expr?;
first_for_expr
         : for_expr
           | single_new_local_def_with_init;
switch_stmt   : L_SWITCH '(' comma_expr ')' '{' local_declarations case_stmt ( case_stmt | statement )* '}';
case_stmt     : L_CASE case_label ':'
           | L_CASE case_label L_RANGE case_label ':'
           | L_CASE case_label L_RANGE ':'
           | L_CASE L_RANGE case_label ':'
           | L_DEFAULT ':';
case_label
         : constant
           | string_con1;
constant : constant '|' constant
           | constant '^' constant
           | constant '&' constant
           | constant L_EQ constant
           | constant L_NE constant
           | constant L_ORDER constant
           | constant '<' constant
           | constant L_LSH constant
           | constant L_RSH constant
           | constant '+' constant
           | constant '-' constant
           | constant '*' constant
           | constant '%' constant
           | constant '/' constant
           | '(' constant ')'
           | L_NUMBER
           | '-' L_NUMBER
           | L_NOT L_NUMBER
           | '~' L_NUMBER;
comma_expr
         : expr0 ( ',' expr0 )*;
ref      : L_REF;

expr0    : ref lvalue
           | lvalue L_ASSIGN expr0
           | error L_ASSIGN expr0
           | expr0 '?' expr0 ':' expr0
           | expr0 L_LOR expr0
           | expr0 L_LAND expr0
           | expr0 '|' expr0
           | expr0 '^' expr0
           | expr0 '&' expr0
           | expr0 L_EQ expr0
           | expr0 L_NE expr0
           | expr0 L_ORDER expr0
           | expr0 '<' expr0
           | expr0 L_LSH expr0
           | expr0 L_RSH expr0
           | expr0 '+' expr0
           | expr0 '-' expr0
           | expr0 '*' expr0
           | expr0 '%' expr0
           | expr0 '/' expr0
           | cast expr0
           | L_INC lvalue
           | L_DEC lvalue
           | L_NOT expr0
           | '~' expr0
           | '-' expr0
           | lvalue L_INC
           | lvalue L_DEC
           | expr4
           | sscanf
           | parse_command
           | time_expression
           | number
           | real;
return_stmt   : L_RETURN ';'
           | L_RETURN comma_expr ';';
expr_list
         : ( expr_list2 | expr_list2 ',' )?;
expr_list_node
         : expr0
           | expr0 L_DOT_DOT_DOT;
expr_list2
         : expr_list_node ( ',' expr_list_node )*;
expr_list3
         : ( expr_list4 | expr_list4 ',' )?;
expr_list4
         : assoc_pair ( ',' assoc_pair )*;
assoc_pair
         : expr0 ':' expr0;
lvalue   : expr4;
l_new_function_open
         : '(:'
           | '(:' efun_override;

expr3:  //| L_DEFINED_NAME
                        L_IDENTIFIER
                       | L_PARAMETER
                       | '$' '(' comma_expr ')'
                       | string
                       | '(' comma_expr ')'
                       | catch_block
                       | tree_block
                       | L_BASIC_TYPE '(' argument ')' block
                       | l_new_function_open ':' ')'
                       | l_new_function_open ',' expr_list2 ':' ')'
                       | '(:' comma_expr ':' ')'
                       | L_MAPPING_OPEN expr_list3 ']' ')'
                       | L_ARRAY_OPEN expr_list '}' ')'
                       | function_name '(' expr_list ')';

expr4    : ( (efun_override '(' expr_list ')'
                | L_NEW '(' expr_list ')'
                //| L_NEW '(' L_CLASS L_DEFINED_NAME opt_class_init ')'
                | L_NEW '(' L_CLASS L_IDENTIFIER opt_class_init ')'
                //| L_DEFINED_NAME '(' expr_list ')'
                | function_name '(' expr_list ')'
                | expr3 L_ARROW identifier '(' expr_list ')'
                | '(' '*' comma_expr ')' '(' expr_list ')'
             ) | expr3
            ) ( L_ARROW identifier
                | '[' comma_expr L_RANGE comma_expr ']'
                | '[' '<' comma_expr L_RANGE comma_expr ']'
                | '[' '<' comma_expr L_RANGE '<' comma_expr ']'
                | '[' comma_expr L_RANGE '<' comma_expr ']'
                | '[' comma_expr L_RANGE ']'
                | '[' '<' comma_expr L_RANGE ']'
                | '[' '<' comma_expr ']'
                | '[' comma_expr ']'
                )*;
expr_or_block
         : block
           | '(' comma_expr ')';
catch_block    : L_CATCH expr_or_block;
tree_block     : L_TREE block
           | L_TREE '(' comma_expr ')';
sscanf   : L_SSCANF '(' expr0 ',' expr0 lvalue_list ')';
parse_command
         : L_PARSE_COMMAND '(' expr0 ',' expr0 ',' expr0 lvalue_list ')';
time_expression
         : L_TIME_EXPRESSION expr_or_block;
lvalue_list
         : ( ',' lvalue )*;
string   : string_con2;
string_con1
         : string_con2 # StringConstConcat
           | '(' string_con1 ')' # StringConstInParen
           | string_con1 '+' string_con1 # StringConstPlus
           ;
string_con2
         : L_STRING+;
class_init
         : identifier ':' expr0;
opt_class_init
         : ( ',' class_init )*;

efun_override
         : L_EFUN L_COLON_COLON identifier
           | L_EFUN L_COLON_COLON L_NEW;
function_name
         : L_IDENTIFIER
           | L_COLON_COLON identifier
           | L_BASIC_TYPE L_COLON_COLON identifier
           | identifier L_COLON_COLON identifier;
cond     : L_IF '(' comma_expr ')' statement optional_else_part;
optional_else_part
         : ( L_ELSE statement )?;
error: L_ERROR;
L_ERROR: 'error';
