%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <parser_utils.h>


extern int yylex();
struct source* ast;

// int id_counter = 0;
ParseError* errors;
int error_count;
// extern FILE* output_file;
//SourceRoot_entity* root = NULL;

%}

%code requires {
    #include <parser_utils.h>
    #include "ast.h"
}

%debug

%union {
 //   int id;
    char* string;
    int64_t number;
    char character;
    enum binary_operation_enum ast_binary_op;
    enum unary_operation_enum ast_unary_op;
    struct argument* ast_arg;
    struct argument_list* ast_arg_list;
    struct expression* ast_expression;
    struct expression_list* ast_expression_list;
    struct function_call* ast_function_call;
    struct function_signature* ast_function_signature;
    struct indexer* ast_indexer;
    struct literal* ast_literal;
    struct source* ast_source;
    struct source_item* ast_source_item;
    struct source_items* ast_source_items;
    struct statement* ast_statement;
    struct statements_or_source_items* ast_statements_or_source_items;
    struct statements* ast_statements;
    struct typeref* ast_typeref;
}

%token <string> IDENTIFIER
%token <string> STR
%token <character> CHAR
%token <number> HEX
%token <number> BITS
%token <number> DEC
%token KW_TRUE KW_FALSE
%token KW_DEF KW_END KW_IF KW_THEN KW_ELSE KW_WHILE KW_UNTIL KW_BEGIN KW_BREAK KW_OF KW_ARRAY
%token KW_BOOL KW_BYTE KW_INT KW_UINT KW_LONG KW_ULONG KW_CHAR KW_STRING
%token BOP_GT BOP_GE BOP_LT BOP_LE BOP_EQ BOP_NE

%right '='
%left '+' '-'
%left '*' '/'
%nonassoc BOP_GT BOP_GE BOP_LT BOP_LE BOP_EQ BOP_NE

%type <ast_arg> argument
%type <ast_arg_list> argList
%type <ast_binary_op> binaryOp
%type <ast_unary_op> unaryOp
%type <ast_expression> expr
%type <ast_expression_list> exprList
%type <ast_function_call> functionCall
%type <ast_function_signature> funcSignature
%type <ast_indexer> indexer
%type <ast_literal> literal
%type <ast_source> source
%type <ast_source_item> sourceItem
%type <ast_source_items> sourceItems
%type <ast_statement> statement
%type <ast_statements_or_source_items> statementsOrSourceItems
%type <ast_statements> statements
%type <ast_typeref> typeRef


%%

source:
sourceItems {
    ast = create_source($1);
};

sourceItems:
/* empty */ {
    $$ = NULL;
}|
sourceItem sourceItems {
    $$ = create_source_items($1, $2);
};

typeRef:
KW_BOOL {
    $$ = create_typeref_bool();
}|
KW_BYTE {
    $$ = create_typeref_byte();
}|
KW_INT {
    $$ = create_typeref_int();
}|
KW_UINT {
    $$ = create_typeref_uint();
}|
KW_LONG {
    $$ = create_typeref_long();
}|
KW_ULONG {
    $$ = create_typeref_ulong();
}|
KW_CHAR {
    $$ = create_typeref_char();
}|
KW_STRING {
    $$ = create_typeref_string();
}|
IDENTIFIER {
    $$ = create_typeref_custom_type($1);
    //free($1);
}|
typeRef KW_ARRAY '[' DEC ']' {
    $$ = create_typeref_array($1, $4);
};

funcSignature:
IDENTIFIER '(' argList ')' KW_OF typeRef {
    $$ = create_function_signature($1, $3, $6);
    //free($1);
}|
IDENTIFIER '(' argList ')' { 
    $$ = create_function_signature($1, $3, NULL);
    //free($1);
};

argList:
/* empty */ {
    $$ = NULL;
}|
argument {
    $$ = create_argument_list($1, NULL);
}|
argument ',' argList {
    $$ = create_argument_list($1, $3);
};

argument:
IDENTIFIER KW_OF typeRef {
    $$ = create_argument($1, $3);
    //free($1);
}|
IDENTIFIER {
    $$ = create_argument($1, NULL);
    //free($1);
};

sourceItem:
KW_DEF funcSignature statements KW_END {
    $$ = create_source_item($2, $3);
};

statements:
/* empty */ {
    $$ = NULL;
}|
statement statements {
    $$ = create_statements($1, $2);
};

statementsOrSourceItems:
/* empty */ {
    $$ = NULL;
}|
statement statementsOrSourceItems {
    $$ = create_statements_or_source_items_statements($1, $2);
}|
sourceItem statementsOrSourceItems {
    $$ = create_statements_or_source_items_items($1, $2);
};

statement:
    KW_IF expr KW_THEN statement KW_ELSE statement {
        $$ = create_if_statement($2, $4, $6);
    }|
    KW_IF expr KW_THEN statement {
        $$ = create_if_statement($2, $4, NULL);
    }|
    KW_WHILE expr statements KW_END {
        $$ = create_while_statement($2, $3);
    }|
    KW_UNTIL expr statements KW_END {
        $$ = create_until_statement($2, $3);
    }|
    statement KW_WHILE expr ';' {
        $$ = create_do_while_statement($1, $3);
    }|
    statement KW_UNTIL expr ';' {
        $$ = create_do_until_statement($1, $3);
    }|
    KW_BREAK ';' {
        $$ = create_break_statement();
    }|
    expr ';' {
        $$ = create_expr_statement($1);
    }|
    KW_BEGIN statementsOrSourceItems KW_END {
        $$ = create_stmt_statement($2);
    }|
    '{' statementsOrSourceItems '}' {
        $$ = create_stmt_statement($2);
    };

functionCall:
    expr '(' exprList ')' {
        $$ = create_function_call($1, $3);
    };

indexer:
    expr '[' exprList ']' {
        $$ = create_indexer($1, $3);
    };

literal:
    KW_TRUE {
        $$ = create_literal_bool(true);
    }|
    KW_FALSE {
        $$ = create_literal_bool(false);
    }|
    STR {
        $$ = create_literal_string($1);
        //free($1);
    }|
    CHAR {
        $$ = create_literal_char($1);
    }|
    HEX {
        $$ = create_literal_number(LITERAL_HEX, $1);
    }|
    BITS {
        $$ = create_literal_number(LITERAL_BITS, $1);
    }|
    DEC {
        $$ = create_literal_number(LITERAL_DEC, $1);
    };

binaryOp:
    BOP_EQ { $$ = BINARY_OP_EQ; }
    | BOP_NE { $$ = BINARY_OP_NOT_EQ; }
    | BOP_GT { $$ = BINARY_OP_GT; }
    | BOP_GE { $$ = BINARY_OP_GE; }
    | BOP_LT { $$ = BINARY_OP_LT; }
    | BOP_LE { $$ = BINARY_OP_LE; }
    | '+' { $$ = BINARY_OP_ADD; }
    | '=' { $$ = BINARY_OP_ASSIGNMENT; }
    | '-' { $$ = BINARY_OP_SUB; }
    | '*' { $$ = BINARY_OP_MUL; }
    | '/' { $$ = BINARY_OP_DIV; }
    | '%' { $$ = BINARY_OP_DIV_REMAINDER; }
    ;

unaryOp:
    '-' { $$ = UNARY_OP_MINUS; }
    | '+' { $$ = UNARY_OP_PLUS; }
    ;

expr:
    expr binaryOp expr {
        $$ = create_binary_operation_expression($1, $3, $2);
    }|
    unaryOp expr {
        $$ = create_unary_operation_expression($2, $1);
    }|
    '(' expr ')' {
        $$ = create_expression_expression($2);
    }|
    functionCall {
        $$ = create_function_call_expression($1);
    }|
    indexer {
        $$ = create_indexer_expression($1);
    }|
    IDENTIFIER {
        $$ = create_identifier_expression($1);
        //free($1);
    }|
    literal {
        $$ = create_literal_expression($1);
    };

exprList:
    /* empty */ {
        $$ = NULL;
    }|
    expr {
        $$ = create_expression_list($1, NULL);
    }|
    expr ',' exprList {
        $$ = create_expression_list($1, $3);
    };

%%

void yyerror(const char *msg) {
    error_count++;
    errors = realloc(errors, sizeof(ParseError) * error_count);
    errors[error_count-1].line = yylineno;
    errors[error_count-1].column = yycolumn;
    errors[error_count-1].token_length = yytokenlen;
    errors[error_count-1].message = strdup(msg);
}