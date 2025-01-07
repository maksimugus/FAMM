grammar FAMM;

program: line* EOF;

line: (expression | statement | ifBlock | whileBlock | forBlock | functionDefinition) SEMICOLON;

statement: declaration | definition | functionCall;

ifBlock: IF LPAR expression RPAR block (ELSE block)?;

whileBlock: WHILE LPAR expression RPAR block;

forBlock: FOR LPAR declarationWithDefinition ARROW expression BY expression RPAR block;

block: LBRACE line* RBRACE;

declaration: declarationWithoutDefinition | declarationWithDefinition;
declarationWithDefinition: VAR IDENTIFIER COLON type ASSIGNMENT expression;
declarationWithoutDefinition: VAR IDENTIFIER (COMMA IDENTIFIER)* COLON type;
definition: IDENTIFIER assignmentOp expression;

functionCall: IDENTIFIER LPAR (expression (COMMA expression)*)? RPAR;
functionDefinition: FUNC IDENTIFIER LPAR parameterList? RPAR COLON type block;
parameterList: parameter (COMMA parameter)*;
parameter: IDENTIFIER COLON type;

expression
    : expression boolOp expression    # BoolExpression
    | expression compareOp expression # CompareExpression
    | expression addOp expression     # AddSubExpression
    | expression multOp expression    # MulDivExpression
    | NOT expression                  # NegationExpression
    | LPAR expression RPAR            # ParenExpression
    | constant                        # ConstantExpression
    | functionCall                    # FunctionCallExpression
    | IDENTIFIER                      # IdentifierExpression
    ;

assignmentOp
    : ASSIGNMENT
    | PLUS_ASSIGNMENT
    | MINUS_ASSIGNMENT
    | MULT_ASSIGNMENT
    | DIV_ASSIGNMENT
    | FLOOR_DIV_ASSIGNMENT
    | MOD_ASSIGNMENT
    ;

multOp: MULT | DIV | FLOOR_DIV | MOD;
addOp: PLUS | MINUS;
compareOp: EQ | NEQ | GT | LT | GE | LE;
boolOp: AND | OR;

type: INT | FLOAT | STRING | BOOL;

constant: INTEGER_LIT | FLOAT_LIT | STRING_LIT | BOOL_LIT | NIH_LIT;

VAR: 'var';
FUNC: 'func';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
FOR: 'for';
BY: 'by';
ARROW: '->';
NOT: '!';
ASSIGNMENT: '=';
PLUS_ASSIGNMENT: '+=';
MINUS_ASSIGNMENT: '-=';
MULT_ASSIGNMENT: '*=';
DIV_ASSIGNMENT: '/=';
FLOOR_DIV_ASSIGNMENT: '//=';
MOD_ASSIGNMENT: '%=';
MULT: '*';
DIV: '/';
FLOOR_DIV: '//';
MOD: '%';
PLUS: '+';
MINUS: '-';
EQ: '==';
NEQ: '!=';
GT: '>';
LT: '<';
GE: '>=';
LE: '<=';
AND: 'and';
OR: 'or';

LPAR: '(';
RPAR: ')';
LBRACE: '{';
RBRACE: '}';
SEMICOLON: ';';
COLON: ':';
COMMA: ',';

INT: 'int';
FLOAT: 'float';
STRING: 'string';
BOOL: 'bool';

INTEGER_LIT: [0-9]+;
FLOAT_LIT: [0-9]+ '.' [0-9]* | '.' [0-9]+;
STRING_LIT: '"' ( ~["\\\r\n] | '\\' . )* '"';
BOOL_LIT: TRUE | FALSE;
NIH_LIT: 'nih';

TRUE: 'true';
FALSE: 'false';

IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

WS: [ \t\r\n]+ -> skip;

COMMENT: '#' ~[\r\n]* -> skip;
