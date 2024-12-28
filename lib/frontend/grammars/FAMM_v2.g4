grammar FAMM;

program: line* EOF;

line: (statement | ifBlock | whileBlock) ';';

statement: declaration | definition | functionCall;

ifBlock: 'if' '(' expression ')' block ('else' block);

whileBlock: 'while' '(' expression ')' block;

block: '{' line* '}';

declaration: 'var' IDENTIFIER ':' type '=' expression;

definition: IDENTIFIER assignmentOp expression;

functionCall: IDENTIFIER '(' (expression (',' expression)*)? ')';

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

constant: INTEGER_LIT | FLOAT_LIT | STRING_LIT | BOOL_LIT | NIH_LIT;

IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

INTEGER_LIT: [0-9]+;
FLOAT_LIT: [0-9]+ '.' [0-9]* | '.' [0-9]+;
STRING_LIT: '"' ( ~["\\\r\n] | '\\' . )* '"';
BOOL_LIT: 'true' | 'false';
NIH_LIT: 'nih';

WS: [ \t\r\n]+ -> skip;