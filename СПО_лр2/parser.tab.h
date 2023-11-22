/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_DEB_DOWNLOADS_SPO_PARSER_TAB_H_INCLUDED
# define YY_YY_HOME_DEB_DOWNLOADS_SPO_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 20 "/home/deb/Downloads/spo/parser/parser.y"

    #include <parser_utils.h>
    #include "ast.h"

#line 54 "/home/deb/Downloads/spo/parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    STR = 259,                     /* STR  */
    CHAR = 260,                    /* CHAR  */
    HEX = 261,                     /* HEX  */
    BITS = 262,                    /* BITS  */
    DEC = 263,                     /* DEC  */
    KW_TRUE = 264,                 /* KW_TRUE  */
    KW_FALSE = 265,                /* KW_FALSE  */
    KW_DEF = 266,                  /* KW_DEF  */
    KW_END = 267,                  /* KW_END  */
    KW_IF = 268,                   /* KW_IF  */
    KW_THEN = 269,                 /* KW_THEN  */
    KW_ELSE = 270,                 /* KW_ELSE  */
    KW_WHILE = 271,                /* KW_WHILE  */
    KW_UNTIL = 272,                /* KW_UNTIL  */
    KW_BEGIN = 273,                /* KW_BEGIN  */
    KW_BREAK = 274,                /* KW_BREAK  */
    KW_OF = 275,                   /* KW_OF  */
    KW_ARRAY = 276,                /* KW_ARRAY  */
    KW_BOOL = 277,                 /* KW_BOOL  */
    KW_BYTE = 278,                 /* KW_BYTE  */
    KW_INT = 279,                  /* KW_INT  */
    KW_UINT = 280,                 /* KW_UINT  */
    KW_LONG = 281,                 /* KW_LONG  */
    KW_ULONG = 282,                /* KW_ULONG  */
    KW_CHAR = 283,                 /* KW_CHAR  */
    KW_STRING = 284,               /* KW_STRING  */
    BOP_GT = 285,                  /* BOP_GT  */
    BOP_GE = 286,                  /* BOP_GE  */
    BOP_LT = 287,                  /* BOP_LT  */
    BOP_LE = 288,                  /* BOP_LE  */
    BOP_EQ = 289,                  /* BOP_EQ  */
    BOP_NE = 290                   /* BOP_NE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "/home/deb/Downloads/spo/parser/parser.y"

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

#line 130 "/home/deb/Downloads/spo/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_HOME_DEB_DOWNLOADS_SPO_PARSER_TAB_H_INCLUDED  */
