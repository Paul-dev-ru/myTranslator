grammar myGrammatic;

program
    :   statement* EOF
    ;

statement
    :   assignment
    |   expression
    ;

assignment
    :   variable ASSIGN expression
    ;

expression
    :   expression ADD expression
    |   expression SUB expression
    |   atom
    ;

atom
    :   num
    |   constant
    ;

variable
    : SYMBOL_NUMBER_FOR_ID
    ;

SYMBOL_NUMBER_FOR_ID
    :   VALID_ID_START VALID_ID_CHAR*
    ;

fragment VALID_ID_START
    : 'a' .. 'z' 
    | 'A' .. 'Z' 
    | '_'
    ;

fragment VALID_ID_CHAR
    : VALID_ID_START
    | '0' .. '9'
    ;

num
    :   INTEGER
    |   REAL
    ;
    
INTEGER
    : [0-9] +
    ;


REAL
    : [0-9] + '.' [0-9] +
    ;

constant
    :   PI
    |   EULER
    ;

PI
    :   'pi'
    ;

EULER
    :   'e'
    ;

ADD
    :   '+'
    ;

SUB
    :   '-'
    ;

ASSIGN
    :   '='
    ;

WS
    :   [ \t\r\n]+ -> skip
    ;
