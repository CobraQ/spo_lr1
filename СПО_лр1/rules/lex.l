%{
#include "error.h"
#include "pars.tab.h"
#include <string.h>
%}

%%

[0-9]+ {
    yylval.node = createNode("DEC", NULL, NULL, yytext);
    return DEC;
}
\"[^\"\\]*(?:\\.[^\"\\]*)*\" {
    char buffer[1024];
    strncpy(buffer, yytext+1, strlen(yytext)-2);
    buffer[strlen(buffer)-1] = 0;
    yylval.node = createNode("STR", NULL, NULL, buffer);
    return STR;
}
'[^']' {
    char buffer[1];
    strncpy(buffer, yytext+1, 1);
    yylval.node = createNode("CHAR", NULL, NULL, buffer);
    return CHAR;
}
\[,*\] {
    yylval.node = createNode("ARRAY_COMMAS", NULL, NULL, yytext);
    return ARRAY_COMMAS;
}

0[xX][0-9A-Fa-f]+ {
    char* buffer = malloc(256);
    sprintf(buffer, "%ld", strtol(yytext + 2, NULL, 16));
    yylval.node = createNode("HEX", NULL, NULL, buffer);
    return HEX;
}
0[bB][01]+ {
    char* buffer = malloc(256);
    sprintf(buffer, "%ld", strtol(yytext + 2, NULL, 2));
    yylval.node = createNode("BIN", NULL, NULL, buffer);
    return BIN;
}
"byte" {
           yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
           return TYPEDEF;
       }
"int" {
          yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
          return TYPEDEF;
      }
"uint" {
           yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
           return TYPEDEF;
       }
"long" {
           yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
           return TYPEDEF;
       }
"bool" {
           yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
           return TYPEDEF;
       }
"ulong" {
            yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
            return TYPEDEF;
        }
"char" {
           yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
           return TYPEDEF;
       }
"string"  {
              yylval.node = createNode("TYPEDEF", NULL, NULL, yytext);
              return TYPEDEF;
          }
"if"                                {
 yylval.node = createNode("IF", NULL, NULL, "");
 return IF;
 }
"of"                                {
 yylval.node = createNode("OF", NULL, NULL, "");
 return OF;
 }
"array"                                {
 yylval.node = createNode("ARRAY", NULL, NULL, "");
 return ARRAY;
 }
"def"                                {
 yylval.node = createNode("DEF", NULL, NULL, "");
 return DEF;
 }
"end"                                {
 yylval.node = createNode("END", NULL, NULL, "");
 return END;
 }
"begin"                                {
 yylval.node = createNode("BEGIN_BLOCK", NULL, NULL, "");
 return BEGIN_BLOCK;
 }
"else"                              {
 yylval.node = createNode("ELSE", NULL, NULL, "");
 return ELSE;
 }
"than"                              {
 yylval.node = createNode("THAN", NULL, NULL, "");
 return THAN;
 }
"do"                                {
 yylval.node = createNode("DO", NULL, NULL, "");
 return DO;
 }
"while"                             {
 yylval.node = createNode("WHILE", NULL, NULL, "");
 return WHILE;
 }
"until"                             {
 yylval.node = createNode("UNTIL", NULL, NULL, "");
 return UNTIL;
 }
"break"                             {
 yylval.node = createNode("BREAK", NULL, NULL, "");
 return BREAK;
 }
"{"                                 {
 return LBRACE;
 }
"}"                                 {
 return RBRACE;
 }
"["                                 {
 return LBRACKET;
 }
"]"                                 {
 return RBRACKET;
 }
"true"                              {
 yylval.node = createNode("TRUE", NULL, NULL, "");
 return TRUE;
 }
"false"                             {
 yylval.node = createNode("FALSE", NULL, NULL, "");
 return FALSE;
 }
"%"                                 {
 return PERCENT;
 }
".."                                 {
 return DOUBLE_DOT;
 }
";"                                 {
 return SEMICOLON;
 }
","                                 {
 return COMMA;
 }
"!="                                {
 return NOTEQUAL;
 }
"!"                                 {
 return NOT;
 }
"\|\|"                              {
 return OR;
 }
"&&"                                {
 return AND;
 }
"+"                                 {
 return PLUS;
 }
"-"                                 {
 return MINUS;
 }
"<="                                {
 return LESSTHANEQ;
 }
">="                                {
 return GREATERTHANEQ;
 }
"<"                                 {
 return LESSTHAN;
 }
">"                                 {
 return GREATERTHAN;
 }
"*"                                 {
 return STAR;
 }
"("                                 {
 return LPAREN;
 }
")"                                 {
 return RPAREN;
 }
"="                                 {
 return EQUAL;
 }
[a-zA-Z_][a-zA-Z_0-9]* {
    yylval.node = createNode("IDENTIFIER", NULL, NULL, yytext);
    return IDENTIFIER;
}
\/\/.*                               { /* Пропустить комментарии */ }
\n                                  { /* Пропустить переводы строк */ }
[ \t]                               { /* Пропустить пробелы и табуляцию */ }
.                                   {
                                        // Обработка нераспознанных символов или ошибок
                                        fprintf(stderr, "Нераспознанный символ: %s\n", yytext);
                                    }
%%


int yywrap() {
    // Your implementation here, typically returning 1 to signal EOF.
    return 1;
}