/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "rules/parser.y"

#include "pars.tab.h"
#include "error.h"

#define YYDEBUG 1

#line 78 "pars.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "pars.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PLUS = 3,                       /* PLUS  */
  YYSYMBOL_MINUS = 4,                      /* MINUS  */
  YYSYMBOL_STAR = 5,                       /* STAR  */
  YYSYMBOL_SLASH = 6,                      /* SLASH  */
  YYSYMBOL_PERCENT = 7,                    /* PERCENT  */
  YYSYMBOL_EQUAL = 8,                      /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 9,                   /* NOTEQUAL  */
  YYSYMBOL_LESSTHAN = 10,                  /* LESSTHAN  */
  YYSYMBOL_GREATERTHAN = 11,               /* GREATERTHAN  */
  YYSYMBOL_LESSTHANEQ = 12,                /* LESSTHANEQ  */
  YYSYMBOL_GREATERTHANEQ = 13,             /* GREATERTHANEQ  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_NOT = 16,                       /* NOT  */
  YYSYMBOL_OF = 17,                        /* OF  */
  YYSYMBOL_ARRAY = 18,                     /* ARRAY  */
  YYSYMBOL_DEF = 19,                       /* DEF  */
  YYSYMBOL_END = 20,                       /* END  */
  YYSYMBOL_BEGIN_BLOCK = 21,               /* BEGIN_BLOCK  */
  YYSYMBOL_IDENTIFIER = 22,                /* IDENTIFIER  */
  YYSYMBOL_STR = 23,                       /* STR  */
  YYSYMBOL_COMMA = 24,                     /* COMMA  */
  YYSYMBOL_DOUBLE_DOT = 25,                /* DOUBLE_DOT  */
  YYSYMBOL_CHAR = 26,                      /* CHAR  */
  YYSYMBOL_BIN = 27,                       /* BIN  */
  YYSYMBOL_HEX = 28,                       /* HEX  */
  YYSYMBOL_DEC = 29,                       /* DEC  */
  YYSYMBOL_TRUE = 30,                      /* TRUE  */
  YYSYMBOL_FALSE = 31,                     /* FALSE  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_THAN = 34,                      /* THAN  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_UNTIL = 36,                     /* UNTIL  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 40,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 41,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 42,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 43,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 44,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 45,                  /* RBRACKET  */
  YYSYMBOL_TYPEDEF = 46,                   /* TYPEDEF  */
  YYSYMBOL_ARRAY_COMMAS = 47,              /* ARRAY_COMMAS  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_source = 49,                    /* source  */
  YYSYMBOL_sourceItem = 50,                /* sourceItem  */
  YYSYMBOL_listSourceItem = 51,            /* listSourceItem  */
  YYSYMBOL_funcSignature = 52,             /* funcSignature  */
  YYSYMBOL_listArgDef = 53,                /* listArgDef  */
  YYSYMBOL_argDef = 54,                    /* argDef  */
  YYSYMBOL_optionalTypeRef = 55,           /* optionalTypeRef  */
  YYSYMBOL_typeRef = 56,                   /* typeRef  */
  YYSYMBOL_builtin = 57,                   /* builtin  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_listStatement = 59,             /* listStatement  */
  YYSYMBOL_custom = 60,                    /* custom  */
  YYSYMBOL_array = 61,                     /* array  */
  YYSYMBOL_if = 62,                        /* if  */
  YYSYMBOL_optionalElseStatement = 63,     /* optionalElseStatement  */
  YYSYMBOL_block = 64,                     /* block  */
  YYSYMBOL_loop = 65,                      /* loop  */
  YYSYMBOL_repeat = 66,                    /* repeat  */
  YYSYMBOL_break = 67,                     /* break  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_assignment = 69,                /* assignment  */
  YYSYMBOL_expr = 70,                      /* expr  */
  YYSYMBOL_binary = 71,                    /* binary  */
  YYSYMBOL_unary = 72,                     /* unary  */
  YYSYMBOL_braces = 73,                    /* braces  */
  YYSYMBOL_call = 74,                      /* call  */
  YYSYMBOL_optionalListExpr = 75,          /* optionalListExpr  */
  YYSYMBOL_listExpr = 76,                  /* listExpr  */
  YYSYMBOL_slice = 77,                     /* slice  */
  YYSYMBOL_range = 78,                     /* range  */
  YYSYMBOL_listRange = 79,                 /* listRange  */
  YYSYMBOL_place = 80,                     /* place  */
  YYSYMBOL_literal = 81,                   /* literal  */
  YYSYMBOL_listVarDeclared = 82,           /* listVarDeclared  */
  YYSYMBOL_listVarDeclaredItem = 83,       /* listVarDeclaredItem  */
  YYSYMBOL_var = 84                        /* var  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    74,    74,    75,    77,    79,    80,    86,    88,    89,
      90,    92,    94,    95,   101,   102,   103,   105,   111,   112,
     113,   114,   115,   116,   117,   119,   120,   123,   125,   131,
     133,   134,   135,   139,   140,   141,   142,   143,   144,   146,
     147,   149,   150,   152,   154,   156,   158,   159,   160,   161,
     162,   163,   164,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   181,   182,   183,
     185,   187,   189,   190,   192,   193,   195,   197,   198,   200,
     201,   203,   205,   206,   207,   208,   209,   210,   211,   217,
     218,   220,   221,   223
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PLUS", "MINUS",
  "STAR", "SLASH", "PERCENT", "EQUAL", "NOTEQUAL", "LESSTHAN",
  "GREATERTHAN", "LESSTHANEQ", "GREATERTHANEQ", "AND", "OR", "NOT", "OF",
  "ARRAY", "DEF", "END", "BEGIN_BLOCK", "IDENTIFIER", "STR", "COMMA",
  "DOUBLE_DOT", "CHAR", "BIN", "HEX", "DEC", "TRUE", "FALSE", "IF", "ELSE",
  "THAN", "WHILE", "UNTIL", "DO", "BREAK", "SEMICOLON", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "TYPEDEF", "ARRAY_COMMAS",
  "$accept", "source", "sourceItem", "listSourceItem", "funcSignature",
  "listArgDef", "argDef", "optionalTypeRef", "typeRef", "builtin",
  "statement", "listStatement", "custom", "array", "if",
  "optionalElseStatement", "block", "loop", "repeat", "break",
  "expression", "assignment", "expr", "binary", "unary", "braces", "call",
  "optionalListExpr", "listExpr", "slice", "range", "listRange", "place",
  "literal", "listVarDeclared", "listVarDeclaredItem", "var", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -100,     6,  -100,    -7,  -100,   -22,     7,    -2,   630,   630,
     630,   279,   104,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
     630,   630,   630,   -18,   630,   319,  -100,   598,  -100,   360,
       4,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
     404,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -13,
      -9,    30,    17,   579,   579,   579,  -100,    36,    38,    43,
     630,   417,   235,   235,  -100,   459,  -100,    21,    23,    25,
      22,    20,   579,    26,    46,   630,   630,  -100,  -100,   630,
     630,   630,   630,   630,   614,   630,   630,   630,   630,   630,
     630,   630,  -100,   630,    67,  -100,   -13,    -2,  -100,  -100,
    -100,   472,    45,  -100,     7,   630,   630,    68,    69,  -100,
    -100,  -100,    58,  -100,   646,   147,   191,   579,   579,   579,
     579,   579,   630,   579,   579,   579,   579,   579,   579,   579,
     579,   514,    66,    47,   -15,  -100,  -100,   630,  -100,    15,
     579,   579,  -100,  -100,    48,  -100,  -100,  -100,   579,   630,
     630,  -100,  -100,    -1,  -100,     7,   630,   630,  -100,  -100,
     579,  -100,  -100,    15,   537,   556,  -100
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,    26,     8,     0,     0,
       0,     0,    81,    84,    85,    87,    86,    88,    82,    83,
       0,     0,     0,     0,     0,     0,    17,     0,    14,    26,
       0,    15,    16,    19,    22,    20,    21,    23,    24,    53,
       0,    47,    46,    48,    49,    50,    51,    52,    18,    12,
       0,     9,    81,    67,    68,    69,    38,     6,     0,     0,
      73,     0,    26,    26,    43,     0,    37,     0,     0,     0,
      81,    53,     0,     0,    90,     0,     0,    25,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    11,    12,     8,     5,    36,
      34,    75,     0,    72,     0,     0,     0,     0,     0,    70,
      35,    33,     0,    93,     0,    26,    26,    54,    55,    56,
      57,    58,     0,    45,    60,    61,    62,    63,    64,    65,
      66,    78,    80,     0,     0,     7,    10,     0,    71,    32,
      54,    55,    39,    40,     0,    89,    41,    42,    59,     0,
       0,    76,    27,     0,    74,     0,     0,     0,    29,    28,
      77,    79,    13,    31,     0,     0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,    93,   -16,  -100,     2,  -100,     0,   -39,  -100,
     -99,    -3,  -100,  -100,  -100,   -63,  -100,  -100,  -100,  -100,
    -100,   -23,    -8,  -100,  -100,  -100,  -100,  -100,   -36,  -100,
    -100,   -48,  -100,  -100,   -11,  -100,  -100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    57,    58,     6,    50,    51,    95,    27,    28,
      29,   107,    31,    32,    33,   158,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   102,   103,    45,
     132,   133,    46,    47,    73,    74,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    54,    55,    30,    71,   139,     2,   152,    59,    67,
       8,     9,    61,    62,    63,     5,    65,    69,     7,    72,
      49,    64,    68,    10,    78,     3,    77,    94,    11,    12,
      13,    26,    96,    14,    15,    16,    17,    18,    19,    20,
     162,    98,    21,    22,   -92,    23,   -91,    24,   155,    25,
     156,   157,   101,    26,    97,     3,   163,    60,    99,   -92,
     108,   -91,    60,   100,   110,   113,   111,   115,   116,   112,
     114,   117,   118,   119,   120,   121,   123,   124,   125,   126,
     127,   128,   129,   130,   134,   131,   138,   144,   142,   143,
     150,    71,   151,   159,     4,   153,   135,   140,   141,   136,
     166,   154,   161,   145,     0,     0,    72,   -27,   -27,     0,
       0,     0,     0,   108,   148,     0,     0,     0,     0,     0,
     -27,     0,   -27,     0,     0,     0,   -27,   -27,     0,   101,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
       0,   160,   131,     0,    60,     0,     0,     0,   164,   165,
     105,   106,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    10,     0,     0,     0,     0,    11,    12,
      13,     0,     0,    14,    15,    16,    17,    18,    19,    20,
       0,     0,    21,    22,     0,    23,   146,    24,     0,    25,
       0,    93,     0,    26,   105,   106,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    10,     0,     0,
       0,     0,    11,    12,    13,     0,     0,    14,    15,    16,
      17,    18,    19,    20,     0,     0,    21,    22,     0,    23,
     147,    24,     0,    25,     0,    93,     0,    26,   105,   106,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    10,     0,     0,     0,     0,    11,    12,    13,     0,
       0,    14,    15,    16,    17,    18,    19,    20,     0,     0,
      21,    22,     0,    23,     0,    24,     0,    25,     0,    93,
       0,    26,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     3,    56,
      11,    12,    13,     0,     0,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    21,    22,     0,    23,     0,    24,
       0,    25,     8,     9,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     3,     0,
      11,    12,    13,     0,     0,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    21,    22,     0,    23,     0,    24,
       0,    25,    66,     8,     9,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,    11,    12,    13,     0,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    75,    76,     0,    23,     0,
      24,     0,    25,     0,     0,     0,    26,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,    93,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     109,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,    93,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,   146,     0,     0,     0,
       0,    93,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,   147,     0,     0,     0,     0,
      93,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    69,     8,     9,     0,
      70,    13,   122,    93,    14,    15,    16,    17,    18,    19,
      10,     0,     0,     8,     9,     0,    52,    13,    24,     0,
      14,    15,    16,    17,    18,    19,    10,     0,     0,     8,
       9,     0,    52,    13,    24,     0,    14,    15,    16,    17,
      18,    19,    10,     0,     0,     0,     0,     0,    70,    13,
      24,     0,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
       8,     9,    10,     6,    27,   104,     0,    22,    11,    25,
       3,     4,    20,    21,    22,    22,    24,    18,    40,    27,
      22,    39,    25,    16,    20,    19,    29,    40,    21,    22,
      23,    46,    41,    26,    27,    28,    29,    30,    31,    32,
      41,    57,    35,    36,    24,    38,    24,    40,    33,    42,
      35,    36,    60,    46,    24,    19,   155,    40,    20,    39,
      63,    39,    40,    20,    43,    39,    43,    75,    76,    44,
      24,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    17,    93,    41,    29,    20,    20,
      24,   114,    45,    45,     1,   134,    96,   105,   106,    97,
     163,   137,   150,   114,    -1,    -1,   114,     3,     4,    -1,
      -1,    -1,    -1,   116,   122,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,   137,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    40,    -1,    -1,    -1,   156,   157,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    -1,    42,
      -1,    44,    -1,    46,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    -1,    42,    -1,    44,    -1,    46,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,    40,
      -1,    42,     3,     4,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,    40,
      -1,    42,    43,     3,     4,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    44,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    44,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    39,    -1,    -1,    -1,    -1,
      44,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    18,     3,     4,    -1,
      22,    23,     8,    44,    26,    27,    28,    29,    30,    31,
      16,    -1,    -1,     3,     4,    -1,    22,    23,    40,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,     3,
       4,    -1,    22,    23,    40,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,
      40,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,     0,    19,    50,    22,    52,    40,     3,     4,
      16,    21,    22,    23,    26,    27,    28,    29,    30,    31,
      32,    35,    36,    38,    40,    42,    46,    56,    57,    58,
      59,    60,    61,    62,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    77,    80,    81,    84,    22,
      53,    54,    22,    70,    70,    70,    20,    50,    51,    59,
      40,    70,    70,    70,    39,    70,    43,    51,    59,    18,
      22,    69,    70,    82,    83,    35,    36,    59,    20,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    39,    44,    40,    55,    41,    24,    51,    20,
      20,    70,    75,    76,    34,     3,     4,    59,    59,    41,
      43,    43,    44,    39,    24,    70,    70,    70,    70,    70,
      70,    70,     8,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    78,    79,    17,    55,    53,    24,    41,    58,
      70,    70,    20,    20,    29,    82,    39,    39,    70,    25,
      24,    45,    22,    56,    76,    33,    35,    36,    63,    45,
      70,    79,    41,    58,    70,    70,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    50,    51,    51,    52,    53,    53,
      53,    54,    55,    55,    56,    56,    56,    57,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    61,    62,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    68,    69,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      73,    74,    75,    75,    76,    76,    77,    78,    78,    79,
      79,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     4,     2,     0,     5,     0,     1,
       3,     2,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     5,     5,
       3,     2,     0,     3,     3,     3,     3,     2,     2,     4,
       4,     4,     4,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     4,     1,     0,     3,     1,     4,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* source: %empty  */
#line 74 "rules/parser.y"
        {{(yyval.node) = NULL;}}
#line 1639 "pars.tab.c"
    break;

  case 3: /* source: source sourceItem  */
#line 75 "rules/parser.y"
                        {{(yyval.node) = createNode("source", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1645 "pars.tab.c"
    break;

  case 4: /* sourceItem: DEF funcSignature listStatement END  */
#line 77 "rules/parser.y"
                                                {{(yyval.node) = createNode("sourceItem", (yyvsp[-2].node), (yyvsp[-1].node), "");}}
#line 1651 "pars.tab.c"
    break;

  case 5: /* listSourceItem: sourceItem listSourceItem  */
#line 79 "rules/parser.y"
                                          {{(yyval.node) = createNode("listSourceItem", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1657 "pars.tab.c"
    break;

  case 6: /* listSourceItem: %empty  */
#line 80 "rules/parser.y"
      {{(yyval.node) = NULL;}}
#line 1663 "pars.tab.c"
    break;

  case 7: /* funcSignature: IDENTIFIER LPAREN listArgDef RPAREN optionalTypeRef  */
#line 86 "rules/parser.y"
                                                                   {{(yyval.node) = createNode("funcSignature", (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-4].node)->value);}}
#line 1669 "pars.tab.c"
    break;

  case 8: /* listArgDef: %empty  */
#line 88 "rules/parser.y"
             {{(yyval.node) = NULL;}}
#line 1675 "pars.tab.c"
    break;

  case 9: /* listArgDef: argDef  */
#line 89 "rules/parser.y"
             {{(yyval.node) = (yyvsp[0].node);}}
#line 1681 "pars.tab.c"
    break;

  case 10: /* listArgDef: argDef COMMA listArgDef  */
#line 90 "rules/parser.y"
                              {{(yyval.node) = createNode("listArgDef", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1687 "pars.tab.c"
    break;

  case 11: /* argDef: IDENTIFIER optionalTypeRef  */
#line 92 "rules/parser.y"
                                   {{(yyval.node) = createNode("argDef", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1693 "pars.tab.c"
    break;

  case 12: /* optionalTypeRef: %empty  */
#line 94 "rules/parser.y"
                 {{ (yyval.node) = NULL; }}
#line 1699 "pars.tab.c"
    break;

  case 13: /* optionalTypeRef: LPAREN OF typeRef RPAREN  */
#line 95 "rules/parser.y"
                               {{(yyval.node) = (yyvsp[-1].node);}}
#line 1705 "pars.tab.c"
    break;

  case 14: /* typeRef: builtin  */
#line 101 "rules/parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1711 "pars.tab.c"
    break;

  case 15: /* typeRef: custom  */
#line 102 "rules/parser.y"
             {{(yyval.node) = (yyvsp[0].node);}}
#line 1717 "pars.tab.c"
    break;

  case 16: /* typeRef: array  */
#line 103 "rules/parser.y"
            {{(yyval.node) = (yyvsp[0].node);}}
#line 1723 "pars.tab.c"
    break;

  case 17: /* builtin: TYPEDEF  */
#line 105 "rules/parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 1729 "pars.tab.c"
    break;

  case 18: /* statement: var  */
#line 111 "rules/parser.y"
               {{(yyval.node) =  (yyvsp[0].node);}}
#line 1735 "pars.tab.c"
    break;

  case 19: /* statement: if  */
#line 112 "rules/parser.y"
         {{(yyval.node) =  (yyvsp[0].node);}}
#line 1741 "pars.tab.c"
    break;

  case 20: /* statement: loop  */
#line 113 "rules/parser.y"
           {{(yyval.node) =  (yyvsp[0].node);}}
#line 1747 "pars.tab.c"
    break;

  case 21: /* statement: repeat  */
#line 114 "rules/parser.y"
             {{(yyval.node) =  (yyvsp[0].node);}}
#line 1753 "pars.tab.c"
    break;

  case 22: /* statement: block  */
#line 115 "rules/parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1759 "pars.tab.c"
    break;

  case 23: /* statement: break  */
#line 116 "rules/parser.y"
            {{(yyval.node) =  (yyvsp[0].node);}}
#line 1765 "pars.tab.c"
    break;

  case 24: /* statement: expression  */
#line 117 "rules/parser.y"
                 {{(yyval.node) =  (yyvsp[0].node);}}
#line 1771 "pars.tab.c"
    break;

  case 25: /* listStatement: statement listStatement  */
#line 119 "rules/parser.y"
                                       {{(yyval.node) = createNode("listStatement", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1777 "pars.tab.c"
    break;

  case 26: /* listStatement: %empty  */
#line 120 "rules/parser.y"
      {{(yyval.node) = NULL;}}
#line 1783 "pars.tab.c"
    break;

  case 27: /* custom: IDENTIFIER  */
#line 123 "rules/parser.y"
                   {{(yyval.node) = (yyvsp[0].node);}}
#line 1789 "pars.tab.c"
    break;

  case 28: /* array: typeRef ARRAY LBRACKET DEC RBRACKET  */
#line 125 "rules/parser.y"
                                           {{(yyval.node) = createNode("array", (yyvsp[-4].node), NULL, (yyvsp[-1].node)->value);}}
#line 1795 "pars.tab.c"
    break;

  case 29: /* if: IF expr THAN statement optionalElseStatement  */
#line 131 "rules/parser.y"
                                                 {{(yyval.node) = createNode("if", (yyvsp[-2].node), createNode("ifStatements", (yyvsp[-1].node), (yyvsp[0].node), ""), "");}}
#line 1801 "pars.tab.c"
    break;

  case 30: /* optionalElseStatement: ELSE statement optionalElseStatement  */
#line 133 "rules/parser.y"
                                                            {{(yyval.node) = createNode("else", (yyvsp[-1].node), (yyvsp[0].node), "");}}
#line 1807 "pars.tab.c"
    break;

  case 31: /* optionalElseStatement: ELSE statement  */
#line 134 "rules/parser.y"
                     {{(yyval.node) = createNode("else", (yyvsp[0].node), NULL, "");}}
#line 1813 "pars.tab.c"
    break;

  case 32: /* optionalElseStatement: %empty  */
#line 135 "rules/parser.y"
      {{(yyval.node) = NULL;}}
#line 1819 "pars.tab.c"
    break;

  case 33: /* block: LBRACE listStatement RBRACE  */
#line 139 "rules/parser.y"
                                   {{(yyval.node) = createNode("block", (yyvsp[-1].node), NULL, "");}}
#line 1825 "pars.tab.c"
    break;

  case 34: /* block: BEGIN_BLOCK listStatement END  */
#line 140 "rules/parser.y"
                                    {{(yyval.node) = createNode("block", (yyvsp[-1].node), NULL, "");}}
#line 1831 "pars.tab.c"
    break;

  case 35: /* block: LBRACE listSourceItem RBRACE  */
#line 141 "rules/parser.y"
                                   {{(yyval.node) = createNode("block", (yyvsp[-1].node), NULL, "");}}
#line 1837 "pars.tab.c"
    break;

  case 36: /* block: BEGIN_BLOCK listSourceItem END  */
#line 142 "rules/parser.y"
                                     {{(yyval.node) = createNode("block", (yyvsp[-1].node), NULL, "");}}
#line 1843 "pars.tab.c"
    break;

  case 37: /* block: LBRACE RBRACE  */
#line 143 "rules/parser.y"
                    {{(yyval.node) = createNode("block", NULL, NULL, "");}}
#line 1849 "pars.tab.c"
    break;

  case 38: /* block: BEGIN_BLOCK END  */
#line 144 "rules/parser.y"
                      {{(yyval.node) = createNode("block", NULL, NULL, "");}}
#line 1855 "pars.tab.c"
    break;

  case 39: /* loop: WHILE expr listStatement END  */
#line 146 "rules/parser.y"
                                   {{(yyval.node) = createNode("loop", (yyvsp[-2].node), (yyvsp[-1].node), "");}}
#line 1861 "pars.tab.c"
    break;

  case 40: /* loop: UNTIL expr listStatement END  */
#line 147 "rules/parser.y"
                                   {{(yyval.node) = createNode("loop", (yyvsp[-2].node), (yyvsp[-1].node), "");}}
#line 1867 "pars.tab.c"
    break;

  case 41: /* repeat: statement WHILE expr SEMICOLON  */
#line 149 "rules/parser.y"
                                       {{(yyval.node) = createNode("loop", (yyvsp[-1].node), (yyvsp[-2].node), "");}}
#line 1873 "pars.tab.c"
    break;

  case 42: /* repeat: statement UNTIL expr SEMICOLON  */
#line 150 "rules/parser.y"
                                     {{(yyval.node) = createNode("loop", (yyvsp[-1].node), (yyvsp[-2].node), "");}}
#line 1879 "pars.tab.c"
    break;

  case 43: /* break: BREAK SEMICOLON  */
#line 152 "rules/parser.y"
                       {{(yyval.node) = createNode("break", NULL, NULL, "");}}
#line 1885 "pars.tab.c"
    break;

  case 44: /* expression: expr SEMICOLON  */
#line 154 "rules/parser.y"
                           {{(yyval.node) = (yyvsp[-1].node);}}
#line 1891 "pars.tab.c"
    break;

  case 45: /* assignment: expr EQUAL expr  */
#line 156 "rules/parser.y"
                            {{(yyval.node) = createNode("assigment", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1897 "pars.tab.c"
    break;

  case 46: /* expr: unary  */
#line 158 "rules/parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1903 "pars.tab.c"
    break;

  case 47: /* expr: binary  */
#line 159 "rules/parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1909 "pars.tab.c"
    break;

  case 48: /* expr: braces  */
#line 160 "rules/parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1915 "pars.tab.c"
    break;

  case 49: /* expr: call  */
#line 161 "rules/parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1921 "pars.tab.c"
    break;

  case 50: /* expr: slice  */
#line 162 "rules/parser.y"
             {{(yyval.node) = (yyvsp[0].node);}}
#line 1927 "pars.tab.c"
    break;

  case 51: /* expr: place  */
#line 163 "rules/parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1933 "pars.tab.c"
    break;

  case 52: /* expr: literal  */
#line 164 "rules/parser.y"
               {{(yyval.node) = (yyvsp[0].node);}}
#line 1939 "pars.tab.c"
    break;

  case 53: /* binary: assignment  */
#line 166 "rules/parser.y"
                   {{(yyval.node) = (yyvsp[0].node);}}
#line 1945 "pars.tab.c"
    break;

  case 54: /* binary: expr PLUS expr  */
#line 167 "rules/parser.y"
                     {{(yyval.node) = createNode("PLUS", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1951 "pars.tab.c"
    break;

  case 55: /* binary: expr MINUS expr  */
#line 168 "rules/parser.y"
                      {{(yyval.node) = createNode("MINUS", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1957 "pars.tab.c"
    break;

  case 56: /* binary: expr STAR expr  */
#line 169 "rules/parser.y"
                     {{(yyval.node) = createNode("STAR", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1963 "pars.tab.c"
    break;

  case 57: /* binary: expr SLASH expr  */
#line 170 "rules/parser.y"
                      {{(yyval.node) = createNode("SLASH", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1969 "pars.tab.c"
    break;

  case 58: /* binary: expr PERCENT expr  */
#line 171 "rules/parser.y"
                        {{(yyval.node) = createNode("PERCENT", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1975 "pars.tab.c"
    break;

  case 59: /* binary: expr EQUAL EQUAL expr  */
#line 172 "rules/parser.y"
                            {{(yyval.node) = createNode("EQUALITY", (yyvsp[-3].node), (yyvsp[0].node), "");}}
#line 1981 "pars.tab.c"
    break;

  case 60: /* binary: expr NOTEQUAL expr  */
#line 173 "rules/parser.y"
                         {{(yyval.node) = createNode("NOTEQUAL", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1987 "pars.tab.c"
    break;

  case 61: /* binary: expr LESSTHAN expr  */
#line 174 "rules/parser.y"
                         {{(yyval.node) = createNode("LESSTHAN", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1993 "pars.tab.c"
    break;

  case 62: /* binary: expr GREATERTHAN expr  */
#line 175 "rules/parser.y"
                            {{(yyval.node) = createNode("GREATERTHAN", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 1999 "pars.tab.c"
    break;

  case 63: /* binary: expr LESSTHANEQ expr  */
#line 176 "rules/parser.y"
                           {{(yyval.node) = createNode("LESSTHANEQ", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2005 "pars.tab.c"
    break;

  case 64: /* binary: expr GREATERTHANEQ expr  */
#line 177 "rules/parser.y"
                              {{(yyval.node) = createNode("GREATERTHANEQ", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2011 "pars.tab.c"
    break;

  case 65: /* binary: expr AND expr  */
#line 178 "rules/parser.y"
                    {{(yyval.node) = createNode("AND", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2017 "pars.tab.c"
    break;

  case 66: /* binary: expr OR expr  */
#line 179 "rules/parser.y"
                   {{(yyval.node) = createNode("OR", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2023 "pars.tab.c"
    break;

  case 67: /* unary: PLUS expr  */
#line 181 "rules/parser.y"
                 {{(yyval.node) = createNode("PLUS", (yyvsp[0].node), NULL, "");}}
#line 2029 "pars.tab.c"
    break;

  case 68: /* unary: MINUS expr  */
#line 182 "rules/parser.y"
                 {{(yyval.node) = createNode("MINUS", (yyvsp[0].node), NULL, "");}}
#line 2035 "pars.tab.c"
    break;

  case 69: /* unary: NOT expr  */
#line 183 "rules/parser.y"
               {{(yyval.node) = createNode("NOT", (yyvsp[0].node), NULL, "");}}
#line 2041 "pars.tab.c"
    break;

  case 70: /* braces: LPAREN expr RPAREN  */
#line 185 "rules/parser.y"
                            {{(yyval.node) = createNode("braces", (yyvsp[-1].node), NULL, "");}}
#line 2047 "pars.tab.c"
    break;

  case 71: /* call: IDENTIFIER LPAREN optionalListExpr RPAREN  */
#line 187 "rules/parser.y"
                                                 {{(yyval.node) = createNode("CALL", (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 2053 "pars.tab.c"
    break;

  case 72: /* optionalListExpr: listExpr  */
#line 189 "rules/parser.y"
                            {{(yyval.node) = createNode("optionalListExpr", (yyvsp[0].node), NULL, "");}}
#line 2059 "pars.tab.c"
    break;

  case 73: /* optionalListExpr: %empty  */
#line 190 "rules/parser.y"
      {{(yyval.node) = createNode("optionalListExpr", NULL, NULL, "");}}
#line 2065 "pars.tab.c"
    break;

  case 74: /* listExpr: expr COMMA listExpr  */
#line 192 "rules/parser.y"
                              {{(yyval.node) = createNode("listExpr", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2071 "pars.tab.c"
    break;

  case 75: /* listExpr: expr  */
#line 193 "rules/parser.y"
           {{(yyval.node) = createNode("listExpr", (yyvsp[0].node), NULL, "");}}
#line 2077 "pars.tab.c"
    break;

  case 76: /* slice: expr LBRACKET listRange RBRACKET  */
#line 195 "rules/parser.y"
                                        {{(yyval.node) = createNode("slice", (yyvsp[-3].node), (yyvsp[-1].node), "");}}
#line 2083 "pars.tab.c"
    break;

  case 77: /* range: expr DOUBLE_DOT expr  */
#line 197 "rules/parser.y"
                            {{(yyval.node) = createNode("range", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2089 "pars.tab.c"
    break;

  case 78: /* range: expr  */
#line 198 "rules/parser.y"
           {{(yyval.node) = createNode("range", (yyvsp[0].node), NULL, "");}}
#line 2095 "pars.tab.c"
    break;

  case 79: /* listRange: range COMMA listRange  */
#line 200 "rules/parser.y"
                                 {{(yyval.node) = createNode("listRange", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2101 "pars.tab.c"
    break;

  case 80: /* listRange: range  */
#line 201 "rules/parser.y"
            {{(yyval.node) = createNode("listExpr", (yyvsp[0].node), NULL, "");}}
#line 2107 "pars.tab.c"
    break;

  case 81: /* place: IDENTIFIER  */
#line 203 "rules/parser.y"
                  {{(yyval.node) = (yyvsp[0].node);}}
#line 2113 "pars.tab.c"
    break;

  case 82: /* literal: TRUE  */
#line 205 "rules/parser.y"
              {{(yyval.node) = (yyvsp[0].node);}}
#line 2119 "pars.tab.c"
    break;

  case 83: /* literal: FALSE  */
#line 206 "rules/parser.y"
            {{(yyval.node) = (yyvsp[0].node);}}
#line 2125 "pars.tab.c"
    break;

  case 84: /* literal: STR  */
#line 207 "rules/parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2131 "pars.tab.c"
    break;

  case 85: /* literal: CHAR  */
#line 208 "rules/parser.y"
           {{(yyval.node) = (yyvsp[0].node);}}
#line 2137 "pars.tab.c"
    break;

  case 86: /* literal: HEX  */
#line 209 "rules/parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2143 "pars.tab.c"
    break;

  case 87: /* literal: BIN  */
#line 210 "rules/parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2149 "pars.tab.c"
    break;

  case 88: /* literal: DEC  */
#line 211 "rules/parser.y"
          {{(yyval.node) = (yyvsp[0].node);}}
#line 2155 "pars.tab.c"
    break;

  case 89: /* listVarDeclared: listVarDeclaredItem COMMA listVarDeclared  */
#line 217 "rules/parser.y"
                                                           {{(yyval.node) = createNode("listVarDeclared", (yyvsp[-2].node), (yyvsp[0].node), "");}}
#line 2161 "pars.tab.c"
    break;

  case 90: /* listVarDeclared: listVarDeclaredItem  */
#line 218 "rules/parser.y"
                          {{(yyval.node) = createNode("listVarDeclared", (yyvsp[0].node), NULL, "");}}
#line 2167 "pars.tab.c"
    break;

  case 91: /* listVarDeclaredItem: IDENTIFIER  */
#line 220 "rules/parser.y"
                                {{(yyval.node) = (yyvsp[0].node);}}
#line 2173 "pars.tab.c"
    break;

  case 92: /* listVarDeclaredItem: assignment  */
#line 221 "rules/parser.y"
                 {{(yyval.node) = (yyvsp[0].node);}}
#line 2179 "pars.tab.c"
    break;

  case 93: /* var: typeRef listVarDeclared SEMICOLON  */
#line 223 "rules/parser.y"
                                       {{(yyval.node) = createNode("var", (yyvsp[-2].node), (yyvsp[-1].node), "");}}
#line 2185 "pars.tab.c"
    break;


#line 2189 "pars.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 224 "rules/parser.y"
