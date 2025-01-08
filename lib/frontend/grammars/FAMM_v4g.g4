grammar FAMM;

program: line* EOF;

line: (expression | statement | ifBlock | whileBlock | forBlock | functionDefinition) SEMICOLON;

statement: declaration | definition | functionCall | returnStatement;

ifBlock: IF LPAR expression RPAR block (ELSE block)?;

whileBlock: WHILE LPAR expression RPAR block;

forBlock: FOR LPAR declarationWithDefinition ARROW expression BY expression RPAR block;

block: LBRACE line* RBRACE;

declaration: declarationWithoutDefinition | declarationWithDefinition;
declarationWithDefinition: VAR IDENTIFIER COLON type ASSIGNMENT expression; // var i: int = 2;
declarationWithoutDefinition: VAR IDENTIFIER (COMMA IDENTIFIER)* COLON type; // var i: int;
definition: IDENTIFIER assignmentOp expression; // a += 3, a = 3

functionCall: IDENTIFIER LPAR (expression (COMMA expression)*)? RPAR;
functionDefinition: FUNC IDENTIFIER LPAR parameterList? RPAR COLON type ASSIGNMENT block;
parameterList: parameter (COMMA parameter)*;
parameter: IDENTIFIER COLON type;

returnStatement: RETURN expression?;

expression
    : constant                                 # ConstantExpression // константа
    | functionCall                             # FunctionCallExpression // вызов функции
    | IDENTIFIER                               # IdentifierExpression // переменная
    | expression LBRACKET expression RBRACKET  # ArrayAccessExpression // обращение к массиву
    | LPAR expression RPAR                     # ParenExpression // в скобочках выражение
    | NOT expression                           # NegationExpression // отрицание
    | MINUS expression                         # NegativeExpression // унарный минус
    | expression multOp expression             # MulDivExpression // умножение
    | expression addOp expression              # AddSubExpression // сложение
    | expression compareOp expression          # CompareExpression // сравнение
    | expression boolOp expression             # BoolExpression // булевы операции
    ;

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

arrayType : LBRACKET type COMMA INTEGER_LIT RBRACKET;

// var a: [int, 3] = [1,2,3]
// var a: [[int, 1], 3] = [[1],[2],[3]]
// var a: [[int, ?], 3] = [[1, 3],[2],[3]] # error

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
    | NIH_LIT
    | arrayLiteral
    ;

arrayLiteral
    : LBRACKET (expression (COMMA expression)*)? RBRACKET
    ;

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