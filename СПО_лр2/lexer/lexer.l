%option yylineno
%option noyywrap

%{
#include "parser.tab.h"
#include <string.h>

#include <parser_utils.h>

int yycolumn = 1;
int yytokenlen = 0;

#define UPDATE_GENERIC { yytokenlen = strlen(yytext); yycolumn += yytokenlen; }
%}

%%
[\n\r]+                         { yytokenlen = 0; yycolumn = 1; }
[ \t]+                          { UPDATE_GENERIC; }
"def"                           { UPDATE_GENERIC; return KW_DEF;    }
"end"                           { UPDATE_GENERIC; return KW_END;    }
"if"                            { UPDATE_GENERIC; return KW_IF;     }
"then"                          { UPDATE_GENERIC; return KW_THEN;   }
"else"                          { UPDATE_GENERIC; return KW_ELSE;   }
"while"                         { UPDATE_GENERIC; return KW_WHILE;  }
"until"                         { UPDATE_GENERIC; return KW_UNTIL;  }
"begin"                         { UPDATE_GENERIC; return KW_BEGIN;  }
"break"                         { UPDATE_GENERIC; return KW_BREAK;  }
"of"                            { UPDATE_GENERIC; return KW_OF;     }
"array"                         { UPDATE_GENERIC; return KW_ARRAY;  }
"bool"                          { UPDATE_GENERIC; return KW_BOOL;   }
"byte"                          { UPDATE_GENERIC; return KW_BYTE;   }
"int"                           { UPDATE_GENERIC; return KW_INT;    }
"uint"                          { UPDATE_GENERIC; return KW_UINT;   }
"long"                          { UPDATE_GENERIC; return KW_LONG;   }
"ulong"                         { UPDATE_GENERIC; return KW_ULONG;  }
"char"                          { UPDATE_GENERIC; return KW_CHAR;   }
"string"                        { UPDATE_GENERIC; return KW_STRING; }

"true"                          { UPDATE_GENERIC; return KW_TRUE;   }
"false"                         { UPDATE_GENERIC; return KW_FALSE;  }

[0-9]+                          { UPDATE_GENERIC; yylval.number         = atoi(yytext);                 return DEC;         }
0[xX][0-9A-Fa-f]+               { UPDATE_GENERIC; yylval.number         = strtol(yytext, NULL, 16);     return HEX;         }
0[bB][01]+                      { UPDATE_GENERIC; yylval.number         = strtol(yytext+2, NULL, 2);    return BITS;        }
[a-zA-Z_][a-zA-Z_0-9]*          { UPDATE_GENERIC; yylval.string         = strdup(yytext);               return IDENTIFIER;  }
\"([^"\\]|\\.)*\"               { UPDATE_GENERIC; yylval.string         = strdup(yytext);               return STR;         }
"'[^']'"                        { UPDATE_GENERIC; yylval.character      = yytext[1];                    return CHAR;        }
"=="                            { UPDATE_GENERIC; return BOP_EQ; }
"!="                            { UPDATE_GENERIC; return BOP_NE; }
">="                            { UPDATE_GENERIC; return BOP_GE; }
"<="                            { UPDATE_GENERIC; return BOP_LE; }
"="                             { UPDATE_GENERIC; return '=';    }
">"                             { UPDATE_GENERIC; return BOP_GT; }
"<"                             { UPDATE_GENERIC; return BOP_LT; }
"+"                             { UPDATE_GENERIC; return '+';    }
"-"                             { UPDATE_GENERIC; return '-';    }
"*"                             { UPDATE_GENERIC; return '*';    }
"/"                             { UPDATE_GENERIC; return '/';    }
"%"                             { UPDATE_GENERIC; return '%';    }
","                             { UPDATE_GENERIC; return ',';    }
"("                             { UPDATE_GENERIC; return '(';    }
")"                             { UPDATE_GENERIC; return ')';    }
"["                             { UPDATE_GENERIC; return '[';    }
"]"                             { UPDATE_GENERIC; return ']';    }
"{"                             { UPDATE_GENERIC; return '{';    }
"}"                             { UPDATE_GENERIC; return '}';    }
";"                             { UPDATE_GENERIC; return ';';    }

.                               { UPDATE_GENERIC; yyerror("Unknown symbol"); }

%%