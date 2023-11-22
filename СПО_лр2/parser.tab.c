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
#line 1 "/home/deb/Downloads/spo/parser/parser.y"

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


#line 90 "/home/deb/Downloads/spo/parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STR = 4,                        /* STR  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_HEX = 6,                        /* HEX  */
  YYSYMBOL_BITS = 7,                       /* BITS  */
  YYSYMBOL_DEC = 8,                        /* DEC  */
  YYSYMBOL_KW_TRUE = 9,                    /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 10,                  /* KW_FALSE  */
  YYSYMBOL_KW_DEF = 11,                    /* KW_DEF  */
  YYSYMBOL_KW_END = 12,                    /* KW_END  */
  YYSYMBOL_KW_IF = 13,                     /* KW_IF  */
  YYSYMBOL_KW_THEN = 14,                   /* KW_THEN  */
  YYSYMBOL_KW_ELSE = 15,                   /* KW_ELSE  */
  YYSYMBOL_KW_WHILE = 16,                  /* KW_WHILE  */
  YYSYMBOL_KW_UNTIL = 17,                  /* KW_UNTIL  */
  YYSYMBOL_KW_BEGIN = 18,                  /* KW_BEGIN  */
  YYSYMBOL_KW_BREAK = 19,                  /* KW_BREAK  */
  YYSYMBOL_KW_OF = 20,                     /* KW_OF  */
  YYSYMBOL_KW_ARRAY = 21,                  /* KW_ARRAY  */
  YYSYMBOL_KW_BOOL = 22,                   /* KW_BOOL  */
  YYSYMBOL_KW_BYTE = 23,                   /* KW_BYTE  */
  YYSYMBOL_KW_INT = 24,                    /* KW_INT  */
  YYSYMBOL_KW_UINT = 25,                   /* KW_UINT  */
  YYSYMBOL_KW_LONG = 26,                   /* KW_LONG  */
  YYSYMBOL_KW_ULONG = 27,                  /* KW_ULONG  */
  YYSYMBOL_KW_CHAR = 28,                   /* KW_CHAR  */
  YYSYMBOL_KW_STRING = 29,                 /* KW_STRING  */
  YYSYMBOL_BOP_GT = 30,                    /* BOP_GT  */
  YYSYMBOL_BOP_GE = 31,                    /* BOP_GE  */
  YYSYMBOL_BOP_LT = 32,                    /* BOP_LT  */
  YYSYMBOL_BOP_LE = 33,                    /* BOP_LE  */
  YYSYMBOL_BOP_EQ = 34,                    /* BOP_EQ  */
  YYSYMBOL_BOP_NE = 35,                    /* BOP_NE  */
  YYSYMBOL_36_ = 36,                       /* '='  */
  YYSYMBOL_37_ = 37,                       /* '+'  */
  YYSYMBOL_38_ = 38,                       /* '-'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* ','  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_49_ = 49,                       /* '%'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_source = 51,                    /* source  */
  YYSYMBOL_sourceItems = 52,               /* sourceItems  */
  YYSYMBOL_typeRef = 53,                   /* typeRef  */
  YYSYMBOL_funcSignature = 54,             /* funcSignature  */
  YYSYMBOL_argList = 55,                   /* argList  */
  YYSYMBOL_argument = 56,                  /* argument  */
  YYSYMBOL_sourceItem = 57,                /* sourceItem  */
  YYSYMBOL_statements = 58,                /* statements  */
  YYSYMBOL_statementsOrSourceItems = 59,   /* statementsOrSourceItems  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_functionCall = 61,              /* functionCall  */
  YYSYMBOL_indexer = 62,                   /* indexer  */
  YYSYMBOL_literal = 63,                   /* literal  */
  YYSYMBOL_binaryOp = 64,                  /* binaryOp  */
  YYSYMBOL_unaryOp = 65,                   /* unaryOp  */
  YYSYMBOL_expr = 66,                      /* expr  */
  YYSYMBOL_exprList = 67                   /* exprList  */
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
typedef yytype_int8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  120

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
       2,     2,     2,     2,     2,     2,     2,    49,     2,     2,
      43,    44,    39,    37,    45,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,    36,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    94,    97,   102,   105,   108,   111,   114,
     117,   120,   123,   126,   130,   135,   139,   145,   148,   151,
     156,   160,   166,   171,   174,   179,   182,   185,   190,   193,
     196,   199,   202,   205,   208,   211,   214,   217,   222,   227,
     232,   235,   238,   242,   245,   248,   251,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   271,
     272,   276,   279,   282,   285,   288,   291,   295,   300,   303,
     306
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STR",
  "CHAR", "HEX", "BITS", "DEC", "KW_TRUE", "KW_FALSE", "KW_DEF", "KW_END",
  "KW_IF", "KW_THEN", "KW_ELSE", "KW_WHILE", "KW_UNTIL", "KW_BEGIN",
  "KW_BREAK", "KW_OF", "KW_ARRAY", "KW_BOOL", "KW_BYTE", "KW_INT",
  "KW_UINT", "KW_LONG", "KW_ULONG", "KW_CHAR", "KW_STRING", "BOP_GT",
  "BOP_GE", "BOP_LT", "BOP_LE", "BOP_EQ", "BOP_NE", "'='", "'+'", "'-'",
  "'*'", "'/'", "'['", "']'", "'('", "')'", "','", "';'", "'{'", "'}'",
  "'%'", "$accept", "source", "sourceItems", "typeRef", "funcSignature",
  "argList", "argument", "sourceItem", "statements",
  "statementsOrSourceItems", "statement", "functionCall", "indexer",
  "literal", "binaryOp", "unaryOp", "expr", "exprList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-59)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    10,    15,   -59,     0,   -27,   302,   -59,   -59,    17,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   364,   364,
     364,   240,   -28,   -59,   -59,   364,   240,    14,   319,   -59,
     -59,   -59,   364,   378,     8,   -17,   -13,    32,   193,   193,
     240,    22,   257,   -59,   398,   -11,   -59,   364,   364,   -59,
     478,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   364,   364,   -59,   -59,   364,    97,    18,    17,
     302,   -59,   -59,   364,    23,    27,   -59,   -59,   -59,   -59,
     -59,    99,   146,   418,    -2,    -1,   478,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,    20,    97,   -59,     7,
     345,   -59,   -59,   -59,   -59,   364,   -59,   -59,     1,    20,
     302,   364,   364,   -59,    41,    -8,   438,   458,     9,   -59
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,    23,     1,     4,    17,
      66,    42,    43,    44,    45,    46,    40,    41,     0,     0,
       0,    25,     0,    60,    59,     0,    25,     0,    23,    64,
      65,    67,     0,     0,    21,     0,    18,     0,    23,    23,
      25,     0,    25,    34,     0,     0,    22,     0,     0,    24,
      62,    49,    50,    51,    52,    47,    48,    54,    53,    55,
      56,    57,    68,    68,    35,    58,     0,     0,    16,    17,
       0,    53,    55,    68,     0,     0,    27,    36,    26,    63,
      37,    23,    23,    69,     0,     0,    61,    13,     5,     6,
       7,     8,     9,    10,    11,    12,    20,     0,    19,    29,
       0,    30,    31,    32,    33,    68,    39,    38,     0,    15,
       0,     0,     0,    70,     0,    28,     0,     0,     0,    14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,    46,   -45,   -59,   -16,   -59,     6,    -3,   -21,
      -9,   -59,   -59,   -59,   -59,   -59,   -18,   -58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,    96,     6,    35,    36,    40,    74,    41,
      28,    29,    30,    31,    66,    32,    33,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      37,    38,    39,    27,    84,    45,     4,    44,   111,   112,
       4,     1,    42,     5,    50,     7,     9,    42,    43,    76,
      34,    78,   110,   111,   112,    49,    46,    68,    67,    81,
      82,    42,    69,    42,    77,   101,    75,    80,    97,   102,
     106,   108,   114,   107,    83,    83,    70,   113,    86,   118,
       8,   119,   109,    98,     0,   100,     0,     0,     0,     0,
       0,    99,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,    63,     0,     0,     0,    75,
       0,    65,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,   116,   117,     0,     0,     0,     0,     0,
      87,   115,    10,    11,    12,    13,    14,    15,    16,    17,
       0,     0,    18,     0,     0,    19,    20,    21,    22,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,    51,
      52,    53,    54,    55,    56,    57,    71,    72,    60,    61,
      62,     0,    73,     0,     0,   103,    26,     0,    65,    10,
      11,    12,    13,    14,    15,    16,    17,     0,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,    71,    72,    60,    61,    62,     0,    73,
       0,     0,   104,    26,     0,    65,    10,    11,    12,    13,
      14,    15,    16,    17,     0,     0,    18,     0,     0,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,    56,    57,
      71,    72,    60,    61,    62,     0,    73,     0,     0,     0,
      26,     0,    65,    10,    11,    12,    13,    14,    15,    16,
      17,     1,     0,    18,     0,     0,    19,    20,    21,    22,
      10,    11,    12,    13,    14,    15,    16,    17,     1,     0,
      18,     0,     0,    47,    48,    21,    22,    23,    24,     0,
       0,     0,     0,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,    23,    24,     0,     0,     0,     0,
      25,     0,     0,     0,    26,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,    18,     0,     0,    19,    20,
      21,    22,    10,    11,    12,    13,    14,    15,    16,    17,
       0,     0,    18,     0,     0,    47,    48,    21,    22,    23,
      24,     0,     0,     0,     0,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,    23,    24,     0,     0,
       0,     0,    25,     0,     0,     0,    26,    10,    11,    12,
      13,    14,    15,    16,    17,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,    63,    79,
     105,     0,     0,     0,    65,     0,     0,     0,     0,     0,
       0,    23,    24,     0,     0,     0,     0,    25,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,    65,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,    79,     0,     0,     0,     0,    65,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,     0,   105,     0,     0,     0,    65,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,     0,     0,   103,     0,     0,    65,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,     0,     0,   104,     0,     0,    65,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,     0,     0,     0,     0,     0,    65
};

static const yytype_int8 yycheck[] =
{
      18,    19,    20,     6,    62,    26,     0,    25,    16,    17,
       4,    11,    21,     3,    32,     0,    43,    26,    46,    40,
       3,    42,    15,    16,    17,    28,    12,    44,    20,    47,
      48,    40,    45,    42,    12,    12,    39,    48,    20,    12,
      42,    21,    41,    44,    62,    63,    14,   105,    66,     8,
       4,    42,    97,    69,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    70,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    82,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
       3,   110,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,    18,    19,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    46,    47,    -1,    49,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    46,    47,    -1,    49,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      47,    -1,    49,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    18,    19,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    19,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,    18,    19,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    10,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,    -1,    -1,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    45,    -1,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    51,    52,    57,     3,    54,     0,    52,    43,
       3,     4,     5,     6,     7,     8,     9,    10,    13,    16,
      17,    18,    19,    37,    38,    43,    47,    58,    60,    61,
      62,    63,    65,    66,     3,    55,    56,    66,    66,    66,
      57,    59,    60,    46,    66,    59,    12,    16,    17,    58,
      66,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    43,    46,    49,    64,    20,    44,    45,
      14,    37,    38,    43,    58,    58,    59,    12,    59,    44,
      48,    66,    66,    66,    67,    67,    66,     3,    22,    23,
      24,    25,    26,    27,    28,    29,    53,    20,    55,    60,
      66,    12,    12,    46,    46,    45,    42,    44,    21,    53,
      15,    16,    17,    67,    41,    60,    66,    66,     8,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    55,
      56,    56,    57,    58,    58,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    61,    62,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     6,     4,     0,     1,     3,
       3,     1,     4,     0,     2,     0,     2,     2,     6,     4,
       4,     4,     4,     4,     2,     2,     3,     3,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     1,     1,     1,     1,     0,     1,
       3
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
  case 2: /* source: sourceItems  */
#line 89 "/home/deb/Downloads/spo/parser/parser.y"
            {
    ast = create_source((yyvsp[0].ast_source_items));
}
#line 1305 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 3: /* sourceItems: %empty  */
#line 94 "/home/deb/Downloads/spo/parser/parser.y"
            {
    (yyval.ast_source_items) = NULL;
}
#line 1313 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 4: /* sourceItems: sourceItem sourceItems  */
#line 97 "/home/deb/Downloads/spo/parser/parser.y"
                       {
    (yyval.ast_source_items) = create_source_items((yyvsp[-1].ast_source_item), (yyvsp[0].ast_source_items));
}
#line 1321 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 5: /* typeRef: KW_BOOL  */
#line 102 "/home/deb/Downloads/spo/parser/parser.y"
        {
    (yyval.ast_typeref) = create_typeref_bool();
}
#line 1329 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 6: /* typeRef: KW_BYTE  */
#line 105 "/home/deb/Downloads/spo/parser/parser.y"
        {
    (yyval.ast_typeref) = create_typeref_byte();
}
#line 1337 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 7: /* typeRef: KW_INT  */
#line 108 "/home/deb/Downloads/spo/parser/parser.y"
       {
    (yyval.ast_typeref) = create_typeref_int();
}
#line 1345 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 8: /* typeRef: KW_UINT  */
#line 111 "/home/deb/Downloads/spo/parser/parser.y"
        {
    (yyval.ast_typeref) = create_typeref_uint();
}
#line 1353 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 9: /* typeRef: KW_LONG  */
#line 114 "/home/deb/Downloads/spo/parser/parser.y"
        {
    (yyval.ast_typeref) = create_typeref_long();
}
#line 1361 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 10: /* typeRef: KW_ULONG  */
#line 117 "/home/deb/Downloads/spo/parser/parser.y"
         {
    (yyval.ast_typeref) = create_typeref_ulong();
}
#line 1369 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 11: /* typeRef: KW_CHAR  */
#line 120 "/home/deb/Downloads/spo/parser/parser.y"
        {
    (yyval.ast_typeref) = create_typeref_char();
}
#line 1377 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 12: /* typeRef: KW_STRING  */
#line 123 "/home/deb/Downloads/spo/parser/parser.y"
          {
    (yyval.ast_typeref) = create_typeref_string();
}
#line 1385 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 13: /* typeRef: IDENTIFIER  */
#line 126 "/home/deb/Downloads/spo/parser/parser.y"
           {
    (yyval.ast_typeref) = create_typeref_custom_type((yyvsp[0].string));
    //free($1);
}
#line 1394 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 14: /* typeRef: typeRef KW_ARRAY '[' DEC ']'  */
#line 130 "/home/deb/Downloads/spo/parser/parser.y"
                             {
    (yyval.ast_typeref) = create_typeref_array((yyvsp[-4].ast_typeref), (yyvsp[-1].number));
}
#line 1402 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 15: /* funcSignature: IDENTIFIER '(' argList ')' KW_OF typeRef  */
#line 135 "/home/deb/Downloads/spo/parser/parser.y"
                                         {
    (yyval.ast_function_signature) = create_function_signature((yyvsp[-5].string), (yyvsp[-3].ast_arg_list), (yyvsp[0].ast_typeref));
    //free($1);
}
#line 1411 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 16: /* funcSignature: IDENTIFIER '(' argList ')'  */
#line 139 "/home/deb/Downloads/spo/parser/parser.y"
                           { 
    (yyval.ast_function_signature) = create_function_signature((yyvsp[-3].string), (yyvsp[-1].ast_arg_list), NULL);
    //free($1);
}
#line 1420 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 17: /* argList: %empty  */
#line 145 "/home/deb/Downloads/spo/parser/parser.y"
            {
    (yyval.ast_arg_list) = NULL;
}
#line 1428 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 18: /* argList: argument  */
#line 148 "/home/deb/Downloads/spo/parser/parser.y"
         {
    (yyval.ast_arg_list) = create_argument_list((yyvsp[0].ast_arg), NULL);
}
#line 1436 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 19: /* argList: argument ',' argList  */
#line 151 "/home/deb/Downloads/spo/parser/parser.y"
                     {
    (yyval.ast_arg_list) = create_argument_list((yyvsp[-2].ast_arg), (yyvsp[0].ast_arg_list));
}
#line 1444 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 20: /* argument: IDENTIFIER KW_OF typeRef  */
#line 156 "/home/deb/Downloads/spo/parser/parser.y"
                         {
    (yyval.ast_arg) = create_argument((yyvsp[-2].string), (yyvsp[0].ast_typeref));
    //free($1);
}
#line 1453 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 21: /* argument: IDENTIFIER  */
#line 160 "/home/deb/Downloads/spo/parser/parser.y"
           {
    (yyval.ast_arg) = create_argument((yyvsp[0].string), NULL);
    //free($1);
}
#line 1462 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 22: /* sourceItem: KW_DEF funcSignature statements KW_END  */
#line 166 "/home/deb/Downloads/spo/parser/parser.y"
                                       {
    (yyval.ast_source_item) = create_source_item((yyvsp[-2].ast_function_signature), (yyvsp[-1].ast_statements));
}
#line 1470 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 23: /* statements: %empty  */
#line 171 "/home/deb/Downloads/spo/parser/parser.y"
            {
    (yyval.ast_statements) = NULL;
}
#line 1478 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 24: /* statements: statement statements  */
#line 174 "/home/deb/Downloads/spo/parser/parser.y"
                     {
    (yyval.ast_statements) = create_statements((yyvsp[-1].ast_statement), (yyvsp[0].ast_statements));
}
#line 1486 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 25: /* statementsOrSourceItems: %empty  */
#line 179 "/home/deb/Downloads/spo/parser/parser.y"
            {
    (yyval.ast_statements_or_source_items) = NULL;
}
#line 1494 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 26: /* statementsOrSourceItems: statement statementsOrSourceItems  */
#line 182 "/home/deb/Downloads/spo/parser/parser.y"
                                  {
    (yyval.ast_statements_or_source_items) = create_statements_or_source_items_statements((yyvsp[-1].ast_statement), (yyvsp[0].ast_statements_or_source_items));
}
#line 1502 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 27: /* statementsOrSourceItems: sourceItem statementsOrSourceItems  */
#line 185 "/home/deb/Downloads/spo/parser/parser.y"
                                   {
    (yyval.ast_statements_or_source_items) = create_statements_or_source_items_items((yyvsp[-1].ast_source_item), (yyvsp[0].ast_statements_or_source_items));
}
#line 1510 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 28: /* statement: KW_IF expr KW_THEN statement KW_ELSE statement  */
#line 190 "/home/deb/Downloads/spo/parser/parser.y"
                                                   {
        (yyval.ast_statement) = create_if_statement((yyvsp[-4].ast_expression), (yyvsp[-2].ast_statement), (yyvsp[0].ast_statement));
    }
#line 1518 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 29: /* statement: KW_IF expr KW_THEN statement  */
#line 193 "/home/deb/Downloads/spo/parser/parser.y"
                                 {
        (yyval.ast_statement) = create_if_statement((yyvsp[-2].ast_expression), (yyvsp[0].ast_statement), NULL);
    }
#line 1526 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 30: /* statement: KW_WHILE expr statements KW_END  */
#line 196 "/home/deb/Downloads/spo/parser/parser.y"
                                    {
        (yyval.ast_statement) = create_while_statement((yyvsp[-2].ast_expression), (yyvsp[-1].ast_statements));
    }
#line 1534 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 31: /* statement: KW_UNTIL expr statements KW_END  */
#line 199 "/home/deb/Downloads/spo/parser/parser.y"
                                    {
        (yyval.ast_statement) = create_until_statement((yyvsp[-2].ast_expression), (yyvsp[-1].ast_statements));
    }
#line 1542 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 32: /* statement: statement KW_WHILE expr ';'  */
#line 202 "/home/deb/Downloads/spo/parser/parser.y"
                                {
        (yyval.ast_statement) = create_do_while_statement((yyvsp[-3].ast_statement), (yyvsp[-1].ast_expression));
    }
#line 1550 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 33: /* statement: statement KW_UNTIL expr ';'  */
#line 205 "/home/deb/Downloads/spo/parser/parser.y"
                                {
        (yyval.ast_statement) = create_do_until_statement((yyvsp[-3].ast_statement), (yyvsp[-1].ast_expression));
    }
#line 1558 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 34: /* statement: KW_BREAK ';'  */
#line 208 "/home/deb/Downloads/spo/parser/parser.y"
                 {
        (yyval.ast_statement) = create_break_statement();
    }
#line 1566 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 35: /* statement: expr ';'  */
#line 211 "/home/deb/Downloads/spo/parser/parser.y"
             {
        (yyval.ast_statement) = create_expr_statement((yyvsp[-1].ast_expression));
    }
#line 1574 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 36: /* statement: KW_BEGIN statementsOrSourceItems KW_END  */
#line 214 "/home/deb/Downloads/spo/parser/parser.y"
                                            {
        (yyval.ast_statement) = create_stmt_statement((yyvsp[-1].ast_statements_or_source_items));
    }
#line 1582 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 37: /* statement: '{' statementsOrSourceItems '}'  */
#line 217 "/home/deb/Downloads/spo/parser/parser.y"
                                    {
        (yyval.ast_statement) = create_stmt_statement((yyvsp[-1].ast_statements_or_source_items));
    }
#line 1590 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 38: /* functionCall: expr '(' exprList ')'  */
#line 222 "/home/deb/Downloads/spo/parser/parser.y"
                          {
        (yyval.ast_function_call) = create_function_call((yyvsp[-3].ast_expression), (yyvsp[-1].ast_expression_list));
    }
#line 1598 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 39: /* indexer: expr '[' exprList ']'  */
#line 227 "/home/deb/Downloads/spo/parser/parser.y"
                          {
        (yyval.ast_indexer) = create_indexer((yyvsp[-3].ast_expression), (yyvsp[-1].ast_expression_list));
    }
#line 1606 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 40: /* literal: KW_TRUE  */
#line 232 "/home/deb/Downloads/spo/parser/parser.y"
            {
        (yyval.ast_literal) = create_literal_bool(true);
    }
#line 1614 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 41: /* literal: KW_FALSE  */
#line 235 "/home/deb/Downloads/spo/parser/parser.y"
             {
        (yyval.ast_literal) = create_literal_bool(false);
    }
#line 1622 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 42: /* literal: STR  */
#line 238 "/home/deb/Downloads/spo/parser/parser.y"
        {
        (yyval.ast_literal) = create_literal_string((yyvsp[0].string));
        //free($1);
    }
#line 1631 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 43: /* literal: CHAR  */
#line 242 "/home/deb/Downloads/spo/parser/parser.y"
         {
        (yyval.ast_literal) = create_literal_char((yyvsp[0].character));
    }
#line 1639 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 44: /* literal: HEX  */
#line 245 "/home/deb/Downloads/spo/parser/parser.y"
        {
        (yyval.ast_literal) = create_literal_number(LITERAL_HEX, (yyvsp[0].number));
    }
#line 1647 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 45: /* literal: BITS  */
#line 248 "/home/deb/Downloads/spo/parser/parser.y"
         {
        (yyval.ast_literal) = create_literal_number(LITERAL_BITS, (yyvsp[0].number));
    }
#line 1655 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 46: /* literal: DEC  */
#line 251 "/home/deb/Downloads/spo/parser/parser.y"
        {
        (yyval.ast_literal) = create_literal_number(LITERAL_DEC, (yyvsp[0].number));
    }
#line 1663 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 47: /* binaryOp: BOP_EQ  */
#line 256 "/home/deb/Downloads/spo/parser/parser.y"
           { (yyval.ast_binary_op) = BINARY_OP_EQ; }
#line 1669 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 48: /* binaryOp: BOP_NE  */
#line 257 "/home/deb/Downloads/spo/parser/parser.y"
             { (yyval.ast_binary_op) = BINARY_OP_NOT_EQ; }
#line 1675 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 49: /* binaryOp: BOP_GT  */
#line 258 "/home/deb/Downloads/spo/parser/parser.y"
             { (yyval.ast_binary_op) = BINARY_OP_GT; }
#line 1681 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 50: /* binaryOp: BOP_GE  */
#line 259 "/home/deb/Downloads/spo/parser/parser.y"
             { (yyval.ast_binary_op) = BINARY_OP_GE; }
#line 1687 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 51: /* binaryOp: BOP_LT  */
#line 260 "/home/deb/Downloads/spo/parser/parser.y"
             { (yyval.ast_binary_op) = BINARY_OP_LT; }
#line 1693 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 52: /* binaryOp: BOP_LE  */
#line 261 "/home/deb/Downloads/spo/parser/parser.y"
             { (yyval.ast_binary_op) = BINARY_OP_LE; }
#line 1699 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 53: /* binaryOp: '+'  */
#line 262 "/home/deb/Downloads/spo/parser/parser.y"
          { (yyval.ast_binary_op) = BINARY_OP_ADD; }
#line 1705 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 54: /* binaryOp: '='  */
#line 263 "/home/deb/Downloads/spo/parser/parser.y"
          { (yyval.ast_binary_op) = BINARY_OP_ASSIGNMENT; }
#line 1711 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 55: /* binaryOp: '-'  */
#line 264 "/home/deb/Downloads/spo/parser/parser.y"
          { (yyval.ast_binary_op) = BINARY_OP_SUB; }
#line 1717 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 56: /* binaryOp: '*'  */
#line 265 "/home/deb/Downloads/spo/parser/parser.y"
          { (yyval.ast_binary_op) = BINARY_OP_MUL; }
#line 1723 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 57: /* binaryOp: '/'  */
#line 266 "/home/deb/Downloads/spo/parser/parser.y"
          { (yyval.ast_binary_op) = BINARY_OP_DIV; }
#line 1729 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 58: /* binaryOp: '%'  */
#line 267 "/home/deb/Downloads/spo/parser/parser.y"
          { (yyval.ast_binary_op) = BINARY_OP_DIV_REMAINDER; }
#line 1735 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 59: /* unaryOp: '-'  */
#line 271 "/home/deb/Downloads/spo/parser/parser.y"
        { (yyval.ast_unary_op) = UNARY_OP_MINUS; }
#line 1741 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 60: /* unaryOp: '+'  */
#line 272 "/home/deb/Downloads/spo/parser/parser.y"
          { (yyval.ast_unary_op) = UNARY_OP_PLUS; }
#line 1747 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 61: /* expr: expr binaryOp expr  */
#line 276 "/home/deb/Downloads/spo/parser/parser.y"
                       {
        (yyval.ast_expression) = create_binary_operation_expression((yyvsp[-2].ast_expression), (yyvsp[0].ast_expression), (yyvsp[-1].ast_binary_op));
    }
#line 1755 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 62: /* expr: unaryOp expr  */
#line 279 "/home/deb/Downloads/spo/parser/parser.y"
                 {
        (yyval.ast_expression) = create_unary_operation_expression((yyvsp[0].ast_expression), (yyvsp[-1].ast_unary_op));
    }
#line 1763 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 63: /* expr: '(' expr ')'  */
#line 282 "/home/deb/Downloads/spo/parser/parser.y"
                 {
        (yyval.ast_expression) = create_expression_expression((yyvsp[-1].ast_expression));
    }
#line 1771 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 64: /* expr: functionCall  */
#line 285 "/home/deb/Downloads/spo/parser/parser.y"
                 {
        (yyval.ast_expression) = create_function_call_expression((yyvsp[0].ast_function_call));
    }
#line 1779 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 65: /* expr: indexer  */
#line 288 "/home/deb/Downloads/spo/parser/parser.y"
            {
        (yyval.ast_expression) = create_indexer_expression((yyvsp[0].ast_indexer));
    }
#line 1787 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 66: /* expr: IDENTIFIER  */
#line 291 "/home/deb/Downloads/spo/parser/parser.y"
               {
        (yyval.ast_expression) = create_identifier_expression((yyvsp[0].string));
        //free($1);
    }
#line 1796 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 67: /* expr: literal  */
#line 295 "/home/deb/Downloads/spo/parser/parser.y"
            {
        (yyval.ast_expression) = create_literal_expression((yyvsp[0].ast_literal));
    }
#line 1804 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 68: /* exprList: %empty  */
#line 300 "/home/deb/Downloads/spo/parser/parser.y"
                {
        (yyval.ast_expression_list) = NULL;
    }
#line 1812 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 69: /* exprList: expr  */
#line 303 "/home/deb/Downloads/spo/parser/parser.y"
         {
        (yyval.ast_expression_list) = create_expression_list((yyvsp[0].ast_expression), NULL);
    }
#line 1820 "/home/deb/Downloads/spo/parser.tab.c"
    break;

  case 70: /* exprList: expr ',' exprList  */
#line 306 "/home/deb/Downloads/spo/parser/parser.y"
                      {
        (yyval.ast_expression_list) = create_expression_list((yyvsp[-2].ast_expression), (yyvsp[0].ast_expression_list));
    }
#line 1828 "/home/deb/Downloads/spo/parser.tab.c"
    break;


#line 1832 "/home/deb/Downloads/spo/parser.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 310 "/home/deb/Downloads/spo/parser/parser.y"


void yyerror(const char *msg) {
    error_count++;
    errors = realloc(errors, sizeof(ParseError) * error_count);
    errors[error_count-1].line = yylineno;
    errors[error_count-1].column = yycolumn;
    errors[error_count-1].token_length = yytokenlen;
    errors[error_count-1].message = strdup(msg);
}
