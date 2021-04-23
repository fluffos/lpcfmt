lexer grammar lpcid;

fragment
Identifier
    :   IdentifierNondigit
        (   IdentifierNondigit
        |   Digit
        )*
    ;

fragment
IdentifierNondigit
    :   Nondigit
    // |   UniversalCharacterName
    //|   // other implementation-defined characters...
    ;

fragment
Nondigit
    :   [a-zA-Z_]
    ;

fragment
Digit
    :   [0-9]
    ;

fragment
L_IDENTIFIER_LITERAL: Identifier;
                //-> pushMode(M_AFTER_IDENTIFIER);
//fragment
//L_DEFINED_NAME_LITERAL: Identifier
//                -> pushMode(M_AFTER_IDENTIFIER);

//mode M_AFTER_IDENTIFIER;
//L_FUNCTION_OPEN: '(:' -> popMode;
// L_NEW_FUNCTION_OPEN: '(:' -> popMode;
