grammar FAMM;

program: line* EOF;

impline: (
    statement
    | ifBlock
    | whileBlock
    | forBlock
    | functionBlock
    |
    ) ';';

statement
    : variableDeclaration
    | variableDefinition
    | functionCall;

ifBlock: 'if' '(' expression ')' block ('else' block)?;

whileBlock: 'while' '(' expression ')' '=' block;

forBlock: 'for' '(' 'var' IDENTIFIER ':' type '=' expression '->' expression ',' expression ')' '=' block;

functionBlock: 'func' IDENTIFIER '(' parameterList? ')' ':' returnType '=' block;

parameterList: parameter (',' parameter)*;

parameter: IDENTIFIER ':' type;

returnType: type | 'nih';

block: '{' line* '}';

variableDeclaration: 'var' IDENTIFIER ':' type ('=' expression)?;

variableDefinition: IDENTIFIER assignmentOp expression;

functionCall: IDENTIFIER '(' argumentList? ')';

argumentList: expression (',' expression)*;

expression
    : constant
    | IDENTIFIER
    | functionCall
    | '(' expression ')'
    | '!' expression
    | expression multOp expression
    | expression addOp expression
    | expression compareOp expression
    | expression boolOp expression
    ;

assignmentOp
    : '='
    | '+='
    | '-='
    | '*='
    | '/='
    | '//='
    | '%='
    ;

multOp: '*' | '/' | '//' | '%';
addOp: '+' | '-';
compareOp: '==' | '!=' | '>' | '<' | '>=' | '<=';
boolOp: 'and' | 'or';

type: 'int' | 'float' | 'string' | 'bool';

constant: INTEGER_LIT | FLOAT_LIT | STRING_LIT | BOOL_LIT;

IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

INTEGER_LIT: [0-9]+;
FLOAT_LIT: [0-9]+ '.' [0-9]* | '.' [0-9]+;
STRING_LIT: '"' ( ~["\\\r\n] | '\\' . )* '"';
BOOL_LIT: 'true' | 'false';

COMMENT: '#' ~[\r\n]* -> skip;

WS: [ \t\r\n]+ -> skip;
