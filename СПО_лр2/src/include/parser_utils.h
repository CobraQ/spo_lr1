#pragma once

#include <stdint.h>
#include <stdio.h>

typedef struct {
    char* message;
    int line;
    int column;
    int token_length;
} ParseError;

extern ParseError* errors;
extern int error_count;

extern int yycolumn;
extern int yylineno;
extern int yytokenlen;
extern FILE* output_file;

void yyerror(const char *msg);
