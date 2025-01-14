grammar FAMM;

program: line* EOF;

line
    : expression SEMICOLON     # ExpressionLine
    | statement SEMICOLON      # StatementLine
    ;

// любая конструкция
statement
    : declarationWithDefinition      # DeclarationWithDefinitionStatement
    | declarationWithoutDefinition   # DeclarationWithoutDefinitionStatement
    | definition                     # DefinitionStatement
    | arrayElementDefinition         # ArrayElementDefinitionStatement
    | RETURN expression?             # ReturnStatement
    | block                          # BlockStatement
    ;

block
    : IF LPAR expression RPAR scope (ELSE scope)?                                    # IfBlock
    | WHILE LPAR expression RPAR scope                                               # WhileBlock
    | FOR LPAR declarationWithDefinition ARROW expression BY expression RPAR scope   # ForBlock
    | FUNC IDENTIFIER LPAR parameterList? RPAR COLON (type | NIH_LIT) ASSIGNMENT scope           # FunctionBlock
    ;


parameterList: parameter (COMMA parameter)*;
parameter: IDENTIFIER COLON type;

scope: LBRACE line* RBRACE;

definition: IDENTIFIER assignmentOp expression;
arrayElementDefinition: arrayAccessPtr assignmentOp expression;
declarationWithDefinition: VAR IDENTIFIER COLON type ASSIGNMENT expression;
declarationWithoutDefinition: VAR IDENTIFIER (COMMA IDENTIFIER)* COLON type;

expression
    : constant                                 # ConstantExpression
    | functionCall                             # FunctionCallExpression
    | IDENTIFIER                               # IdentifierExpression
    | expression LBRACKET expression RBRACKET  # ArrayAccessExpression
    | LPAR expression RPAR                     # ParenExpression
    | NOT expression                           # NegationExpression
    | MINUS expression                         # NegativeExpression
    | expression multOp expression             # MulDivExpression
    | expression addOp expression              # AddSubExpression
    | expression compareOp expression          # CompareExpression
    | expression boolOp expression             # BoolExpression
    ;

arrayAccessPtr: expression LBRACKET expression RBRACKET;

functionCall: IDENTIFIER LPAR (expression (COMMA expression)*)? RPAR;

assignmentOp // =, += и подобные
    : ASSIGNMENT
    | MULT_ASSIGNMENT
    | DIV_ASSIGNMENT
    | FLOOR_DIV_ASSIGNMENT
    | MOD_ASSIGNMENT
    | PLUS_ASSIGNMENT
    | MINUS_ASSIGNMENT
    ;

multOp: MULT | DIV | FLOOR_DIV | MOD;
addOp: PLUS | MINUS;
compareOp: EQ | NEQ | GT | LT | GE | LE;
boolOp: AND | OR;

type : baseType | arrayType;

arrayType: LBRACKET type COMMA size RBRACKET;
size: INTEGER_LIT;

baseType
    : INT
    | FLOAT
    | STRING
    | BOOL
    ;

constant
    : INTEGER_LIT
    | FLOAT_LIT
    | STRING_LIT
    | BOOL_LIT
    | arrayLiteral
    ;

arrayLiteral: LBRACKET (expression (COMMA expression)*)? RBRACKET;

VAR: 'var';
FUNC: 'func';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
FOR: 'for';
BY: 'by';
RETURN: 'return';
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
LBRACKET: '[';
RBRACKET: ']';

INT: 'int';
FLOAT: 'float';
STRING: 'string';
BOOL: 'bool';

INTEGER_LIT: [0-9]+;
FLOAT_LIT: [0-9]+ '.' [0-9]* | '.' [0-9]+;
STRING_LIT: '"' ( ~["\\] | '\\' . )* '"';
BOOL_LIT: TRUE | FALSE;
NIH_LIT: 'nih';

TRUE: 'true';
FALSE: 'false';

IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

WS: [ \t\r\n]+ -> skip;

COMMENT: '#' ~[\r\n]* -> skip;