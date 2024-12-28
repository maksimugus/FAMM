grammar FAMM;

program: line* EOF;

line: (expression | statement | ifBlock | whileBlock | forBlock | functionDefinition) ';';

statement: declaration | definition | functionCall;

ifBlock: 'if' '(' expression ')' block ('else' block)?;

whileBlock: 'while' '(' expression ')' block;

forBlock: 'for' '(' declarationWithDefinition '->' expression 'by' expression ')' block;

block: '{' line* '}';

declaration: declarationWithoutDefinition | declarationWithDefinition;
declarationWithDefinition: 'var' IDENTIFIER ':' type '=' expression;
declarationWithoutDefinition: 'var' IDENTIFIER (',' IDENTIFIER)* ':' type;
definition: IDENTIFIER assignmentOp expression;

functionCall: IDENTIFIER '(' (expression (',' expression)*)? ')';
functionDefinition: 'func' IDENTIFIER '(' parameterList? ')' ':' type block;
parameterList: parameter (',' parameter)*;
parameter: IDENTIFIER ':' type;

expression
    : expression boolOp expression    # BoolExpression
    | expression compareOp expression # CompareExpression
    | expression addOp expression     # AddSubExpression
    | expression multOp expression    # MulDivExpression
    | '!' expression                  # NegationExpression
    | '(' expression ')'              # ParenExpression
    | constant                        # ConstantExpression
    | functionCall                    # FunctionCallExpression
    | IDENTIFIER                      # IdentifierExpression
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

COMMENT: '#' ~[\r\n]* -> skip;
