grammar FAMM;

program
    : (varDecl | funcDef | statement)*
    ;

varDecl
    : VAR IDENTIFIER COLON type ASSIGN expression SEMICOLON
    ;

funcDef
    : FUNC IDENTIFIER ( LPAREN parameters? RPAREN )? COLON returnType ASSIGN LBRACE statements RBRACE
    ;

parameters
    : parameter ( COMMA parameter )*
    ;

parameter
    : IDENTIFIER COLON type
    ;

returnType
    : NIL
    | type
    ;

statements
    : statement*
    ;

statement
    : varDecl
    | assignment
    | ifStatement
    | whileLoop
    | forLoop
    | expressionStatement
    | returnStatement
    | SEMICOLON
    ;

assignment
    : (IDENTIFIER | arrayAccess) assignmentOperator expression SEMICOLON
    ;

assignmentOperator
    : PLUS_ASSIGN
    | MINUS_ASSIGN
    | MULT_ASSIGN
    | DIV_ASSIGN
    | INT_DIV_ASSIGN
    | MOD_ASSIGN
    | ASSIGN
    ;

ifStatement
    : IF LPAREN expression RPAREN LBRACE statements RBRACE
    ;

whileLoop
    : WHILE LPAREN expression RPAREN ASSIGN LBRACE statements RBRACE
    ;

forLoop
    : FOR LPAREN VAR IDENTIFIER COLON type ASSIGN expression ARROW expression ( COMMA expression )? RPAREN LBRACE statements RBRACE
    ;

returnStatement
    : RETURN expression? SEMICOLON
    ;

expressionStatement
    : expression SEMICOLON
    ;

expression
    : logicalOrExpression
    ;

logicalOrExpression
    : logicalOrExpression OR logicalAndExpression
    | logicalAndExpression
    ;

logicalAndExpression
    : logicalAndExpression AND equalityExpression
    | equalityExpression
    ;

equalityExpression
    : equalityExpression (EQUAL | NOT_EQUAL) comparisonExpression
    | comparisonExpression
    ;

comparisonExpression
    : comparisonExpression (LT | GT | LTE | GTE) additiveExpression
    | additiveExpression
    ;

additiveExpression
    : additiveExpression (PLUS | MINUS) multiplicativeExpression
    | multiplicativeExpression
    ;

multiplicativeExpression
    : multiplicativeExpression (MULTIPLY | DIVIDE | INT_DIVIDE | MODULO) unaryExpression
    | unaryExpression
    ;

unaryExpression
    : (NOT | MINUS) unaryExpression
    | primaryExpression
    ;

primaryExpression
    : LPAREN expression RPAREN
    | functionCall
    | typeCast
    | arrayAccess
    | IDENTIFIER
    | literal
    ;

functionCall
    : IDENTIFIER LPAREN argumentList? RPAREN
    ;

argumentList
    : expression ( COMMA expression )*
    ;

typeCast
    : type LPAREN expression RPAREN
    ;

arrayAccess
    : IDENTIFIER LBRACKET expression RBRACKET
    ;

literal
    : INT_LITERAL
    | FLOAT_LITERAL
    | STRING_LITERAL
    | BOOLEAN_LITERAL
    | arrayLiteral
    ;

arrayLiteral
    : LBRACKET expressionList? RBRACKET
    ;

expressionList
    : expression ( COMMA expression )*
    ;

type
    : INT_TYPE
    | FLOAT_TYPE
    | BOOL_TYPE
    | STRING_TYPE
    | LBRACKET type RBRACKET
    ;

VAR: 'var';
FUNC: 'func';
RETURN: 'return';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
FOR: 'for';
NIL: 'nih';

ASSIGN: '=';
PLUS_ASSIGN: '+=' ;
MINUS_ASSIGN: '-=' ;
MULT_ASSIGN: '*=' ;
DIV_ASSIGN: '/=' ;
INT_DIV_ASSIGN: '//=' ;
MOD_ASSIGN: '%=' ;

PLUS: '+';
MINUS: '-';
MULTIPLY: '*';
DIVIDE: '/';
INT_DIVIDE: '//';
MODULO: '%';

EQUAL: '==';
NOT_EQUAL: '!=';
GT: '>';
LT: '<';
GTE: '>=';
LTE: '<=';

AND: '&';
OR: '|';
NOT: '!';

LPAREN: '(';
RPAREN: ')';
LBRACE: '{';
RBRACE: '}';
LBRACKET: '[';
RBRACKET: ']';
COLON: ':';
COMMA: ',';
SEMICOLON: ';';
ARROW: '->';

INT_TYPE: 'int';
FLOAT_TYPE: 'float';
BOOL_TYPE: 'bool';
STRING_TYPE: 'string';

BOOLEAN_LITERAL: 'true' | 'false';

IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

INT_LITERAL: [0-9]+;
FLOAT_LITERAL: [0-9]+ '.' [0-9]* | '.' [0-9]+;
STRING_LITERAL: '"' ( ~["\\\r\n] | '\\' . )* '"';

WS: [ \t\r\n]+ -> skip;
COMMENT: '#' ~[\r\n]* -> skip;