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
#line 2 "syntactic.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
void yyerror(char *s);
extern FILE *yyin;

#define MAX_SYMBOLS 256

typedef struct {
    char *name;
    float value;
    char *valueS;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void setSymbolValue(char *name, float value) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value;
    symbolCount++;
}

void setSymbolValue2(char *name, float value, float value2) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value + value2;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value + value2;
    symbolCount++;
}

void setSymbolValueC(char *name, char *valueS) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].valueS = valueS;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].valueS = valueS;
    symbolCount++;
}

void create(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = 0;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = 0;
    symbolCount++;
}

float getSymbolValue(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {          
            return symbolTable[i].value;
        }
    }
    printf("Variable no definida: %s\n", name);
    return 0.0;
}


#line 150 "syntactic.tab.c"

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

#include "syntactic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IVR = 3,                        /* IVR  */
  YYSYMBOL_STR = 4,                        /* STR  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLO = 6,                        /* FLO  */
  YYSYMBOL_PYC = 7,                        /* PYC  */
  YYSYMBOL_VAR = 8,                        /* VAR  */
  YYSYMBOL_IGU = 9,                        /* IGU  */
  YYSYMBOL_MAS = 10,                       /* MAS  */
  YYSYMBOL_MUL = 11,                       /* MUL  */
  YYSYMBOL_RES = 12,                       /* RES  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_MEN = 14,                       /* MEN  */
  YYSYMBOL_MEI = 15,                       /* MEI  */
  YYSYMBOL_MAY = 16,                       /* MAY  */
  YYSYMBOL_MAI = 17,                       /* MAI  */
  YYSYMBOL_EQU = 18,                       /* EQU  */
  YYSYMBOL_DIF = 19,                       /* DIF  */
  YYSYMBOL_SII = 20,                       /* SII  */
  YYSYMBOL_PIZ = 21,                       /* PIZ  */
  YYSYMBOL_PDE = 22,                       /* PDE  */
  YYSYMBOL_FIN = 23,                       /* FIN  */
  YYSYMBOL_NOO = 24,                       /* NOO  */
  YYSYMBOL_HAS = 25,                       /* HAS  */
  YYSYMBOL_FUN = 26,                       /* FUN  */
  YYSYMBOL_PAR = 27,                       /* PAR  */
  YYSYMBOL_RTN = 28,                       /* RTN  */
  YYSYMBOL_ITR = 29,                       /* ITR  */
  YYSYMBOL_FUE = 30,                       /* FUE  */
  YYSYMBOL_ATP = 31,                       /* ATP  */
  YYSYMBOL_ARG = 32,                       /* ARG  */
  YYSYMBOL_PRINT = 33,                     /* PRINT  */
  YYSYMBOL_POR = 34,                       /* POR  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_sentence = 37,                  /* sentence  */
  YYSYMBOL_decvar = 38,                    /* decvar  */
  YYSYMBOL_initvar = 39,                   /* initvar  */
  YYSYMBOL_asigvar = 40,                   /* asigvar  */
  YYSYMBOL_value = 41,                     /* value  */
  YYSYMBOL_operation = 42,                 /* operation  */
  YYSYMBOL_callfuncion = 43,               /* callfuncion  */
  YYSYMBOL_sii = 44,                       /* sii  */
  YYSYMBOL_hasta = 45,                     /* hasta  */
  YYSYMBOL_condition = 46,                 /* condition  */
  YYSYMBOL_decfun = 47,                    /* decfun  */
  YYSYMBOL_return = 48,                    /* return  */
  YYSYMBOL_err = 49,                       /* err  */
  YYSYMBOL_for = 50,                       /* for  */
  YYSYMBOL_printSentence = 51              /* printSentence  */
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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   100,   100,   101,   102,   103,   104,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   117,   119,   122,
     125,   126,   127,   129,   130,   131,   133,   134,   135,   137,
     138,   139,   140,   146,   147,   149,   152,   155,   158,   163,
     169,   176,   181,   186,   191,   196,   201,   207,   208,   209,
     210,   211,   212,   214,   215,   217,   218,   220,   226,   232,
     233
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
  "\"end of file\"", "error", "\"invalid token\"", "IVR", "STR", "INT",
  "FLO", "PYC", "VAR", "IGU", "MAS", "MUL", "RES", "DIV", "MEN", "MEI",
  "MAY", "MAI", "EQU", "DIF", "SII", "PIZ", "PDE", "FIN", "NOO", "HAS",
  "FUN", "PAR", "RTN", "ITR", "FUE", "ATP", "ARG", "PRINT", "POR",
  "$accept", "program", "sentence", "decvar", "initvar", "asigvar",
  "value", "operation", "callfuncion", "sii", "hasta", "condition",
  "decfun", "return", "err", "for", "printSentence", YY_NULLPTR
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
     152,    25,   -59,   -59,    16,    -7,    14,    34,    87,    22,
      23,    71,   -59,   -59,   -59,   -59,    75,    43,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,    42,     2,    11,    52,    52,
      24,    21,   120,   170,    61,   -59,   -59,   -59,    52,    52,
      52,    52,   -59,    51,   122,    68,   -59,    73,    74,   -59,
     190,   -59,   173,    58,    85,     3,    69,   152,    67,    81,
     107,    52,   -59,   -59,   -59,   -59,   -59,   -59,    93,   -59,
     110,   111,   112,    75,   117,    52,    52,    52,    52,    52,
      52,    56,    52,   118,   108,   103,   109,   109,   109,   109,
     133,   124,   136,   141,   143,   155,   130,   159,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   158,   161,
     149,   -59,   172,   175,   150,   153,   154,   176,   -59,   -59,
     -59,   -59,   -59,   194,   202,   -59,    52,   184,   205,   -59,
     -59,   -59,   -59,   -59,   -59,   203,   118,   -59,    29,     8,
     -59,   200,    52,   188,   209,   191,   210,    52,   193,   -59,
     207,   -59,   208,   211,   216,    52,    52,   -59,   212,   213,
     215,    52,   201,   204,   218,   -59,   -59,   -59
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    28,    26,    27,     0,     0,     0,     0,     2,     0,
       0,     0,     3,     7,     9,     8,     0,     0,    15,    11,
      12,     4,    14,    13,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     5,     6,     0,     0,
       0,     0,    10,    28,     0,     0,    25,     0,     0,    17,
       0,    28,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,    29,    31,    30,    32,    23,    24,     0,    33,
       0,    26,    27,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    18,
      19,    20,    41,    42,    43,    44,    45,    46,    28,     0,
       0,    47,    28,     0,     0,     0,     0,     0,    48,    56,
      55,    60,    59,     0,     0,    34,     0,     0,     0,    53,
      54,    49,    50,    51,    52,    26,     0,    58,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,    -3,   -10,   168,   -22,   -51,   -12,   -25,   206,   -59,
     -59,   -58,    -9,   115,   -59,   -59,   174
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    53,    21,    90,    22,    23,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      45,    36,    37,    96,    88,    32,    83,    47,     2,     3,
      84,     4,    61,    44,    28,   145,    52,    54,    49,    27,
      50,    59,    36,    37,    48,    74,    62,    63,    64,    65,
      89,    85,   146,    87,    25,    29,   143,    30,    73,    38,
      39,    40,    41,    33,    34,    43,    26,     2,     3,    52,
      42,    55,    56,   144,    92,    51,   109,     2,     3,   108,
     113,     2,     3,   102,   103,   104,   105,   106,   107,    60,
     110,    35,    26,   137,     1,    67,     2,     3,    68,     4,
      81,    69,    36,    37,   148,    38,    39,    40,    41,    93,
       1,     5,     2,     3,    31,     4,     6,     7,    74,    82,
       8,   139,     9,    94,     9,    10,   112,     5,     2,     3,
      95,    73,     6,     7,   138,    97,     8,    98,    99,   100,
       9,    10,   153,     1,   101,     2,     3,    25,     4,    66,
      52,   160,    38,    39,    40,    41,   164,    85,   111,     1,
       5,     2,     3,   159,     4,     6,     7,   119,   121,     8,
     122,    57,   124,     9,    10,     1,     5,     2,     3,   120,
       4,     6,     7,   118,   123,     8,   125,   126,   127,     9,
      10,   128,     5,    51,    58,     2,     3,     6,     7,   129,
     131,     8,   130,   132,   133,     9,    10,    75,    76,    77,
      78,    79,    80,    51,    70,    71,    72,    51,    70,   135,
      72,   114,   115,   116,   117,   136,   134,   140,   141,   147,
     142,   149,   150,   152,   151,   154,   155,   156,   157,   158,
     162,   161,   163,    86,   165,   167,     0,   166,     0,     0,
      91,    46
};

static const yytype_int16 yycheck[] =
{
      25,    11,    11,    61,    55,     8,     3,     5,     5,     6,
       7,     8,    34,    25,    21,     7,    28,    29,     7,     3,
       9,    33,    32,    32,    22,    50,    38,    39,    40,    41,
      55,    28,    24,    55,     9,    21,     7,     3,    50,    10,
      11,    12,    13,    21,    21,     3,    21,     5,     6,    61,
       7,    27,    31,    24,    57,     3,    81,     5,     6,     3,
      85,     5,     6,    75,    76,    77,    78,    79,    80,     8,
      82,     0,    21,   124,     3,     7,     5,     6,     5,     8,
      22,     7,    92,    92,   142,    10,    11,    12,    13,    22,
       3,    20,     5,     6,     7,     8,    25,    26,   123,    14,
      29,   126,    33,    22,    33,    34,     3,    20,     5,     6,
       3,   123,    25,    26,   126,    22,    29,     7,     7,     7,
      33,    34,   147,     3,     7,     5,     6,     9,     8,     7,
     142,   156,    10,    11,    12,    13,   161,    28,    30,     3,
      20,     5,     6,   155,     8,    25,    26,    23,     7,    29,
       7,    31,    22,    33,    34,     3,    20,     5,     6,    23,
       8,    25,    26,    30,     9,    29,     7,     9,     7,    33,
      34,    22,    20,     3,     4,     5,     6,    25,    26,     7,
      30,    29,     7,    30,    30,    33,    34,    14,    15,    16,
      17,    18,    19,     3,     4,     5,     6,     3,     4,     5,
       6,    86,    87,    88,    89,     3,    30,    23,     3,     9,
       7,    23,     3,     3,    23,    22,     9,     9,     7,     3,
       7,     9,     7,    55,    23,     7,    -1,    23,    -1,    -1,
      56,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,     8,    20,    25,    26,    29,    33,
      34,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    47,    49,    50,    51,     9,    21,     3,    21,    21,
       3,     7,    36,    21,    21,     0,    37,    47,    10,    11,
      12,    13,     7,     3,    41,    42,    43,     5,    22,     7,
       9,     3,    41,    46,    41,    27,    31,    31,     4,    41,
       8,    39,    41,    41,    41,    41,     7,     7,     5,     7,
       4,     5,     6,    41,    42,    14,    15,    16,    17,    18,
      19,    22,    14,     3,     7,    28,    38,    39,    40,    42,
      48,    51,    36,    22,    22,     3,    46,    22,     7,     7,
       7,     7,    41,    41,    41,    41,    41,    41,     3,    42,
      41,    30,     3,    42,    48,    48,    48,    48,    30,    23,
      23,     7,     7,     9,    22,     7,     9,     7,    22,     7,
       7,    30,    30,    30,    30,     5,     3,    40,    41,    42,
      23,     3,     7,     7,    24,     7,    24,     9,    46,    23,
       3,    23,     3,    42,    22,     9,     9,     7,     3,    41,
      42,     9,     7,     7,    42,    23,    23,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    36,    36,    36,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    38,    39,    39,
      39,    39,    39,    40,    40,    40,    41,    41,    41,    42,
      42,    42,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    46,    46,    46,    46,    46,    46,    47,    47,    47,
      47,    47,    47,    48,    48,    49,    49,    50,    50,    51,
      51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     5,
       5,     5,     4,     4,     4,     3,     1,     1,     1,     3,
       3,     3,     3,     4,     6,     7,     9,     9,    13,    13,
      10,     3,     3,     3,     3,     3,     3,     5,     5,     6,
       6,     6,     6,     3,     3,     5,     5,    13,     6,     5,
       5
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
  case 17: /* decvar: VAR IVR PYC  */
#line 117 "syntactic.y"
                          {  create((yyvsp[-1].sval)); }
#line 1296 "syntactic.tab.c"
    break;

  case 18: /* initvar: VAR IVR IGU INT PYC  */
#line 119 "syntactic.y"
                                  { setSymbolValue((yyvsp[-3].sval), (float)(yyvsp[-1].ival)); 
                                    (yyval.fval) = (yyvsp[-1].ival);
                                  }
#line 1304 "syntactic.tab.c"
    break;

  case 19: /* initvar: VAR IVR IGU FLO PYC  */
#line 122 "syntactic.y"
                                  { setSymbolValue((yyvsp[-3].sval), (yyvsp[-1].fval)); 
                                    (yyval.fval) = (yyvsp[-1].fval);  
                                  }
#line 1312 "syntactic.tab.c"
    break;

  case 20: /* initvar: VAR IVR IGU operation PYC  */
#line 125 "syntactic.y"
                                        { setSymbolValue((yyvsp[-3].sval), (float)(yyvsp[-1].fval)); }
#line 1318 "syntactic.tab.c"
    break;

  case 21: /* initvar: VAR IVR IGU STR PYC  */
#line 126 "syntactic.y"
                                  { setSymbolValueC((yyvsp[-3].sval), (yyvsp[-1].sval)); }
#line 1324 "syntactic.tab.c"
    break;

  case 22: /* initvar: VAR IVR IGU value  */
#line 127 "syntactic.y"
                                { setSymbolValue((yyvsp[-2].sval), (yyvsp[0].fval)); }
#line 1330 "syntactic.tab.c"
    break;

  case 23: /* asigvar: IVR IGU value PYC  */
#line 129 "syntactic.y"
                                { setSymbolValue((yyvsp[-3].sval), (yyvsp[-1].fval)); }
#line 1336 "syntactic.tab.c"
    break;

  case 24: /* asigvar: IVR IGU operation PYC  */
#line 130 "syntactic.y"
                                    { setSymbolValue((yyvsp[-3].sval), (float)(yyvsp[-1].fval)); }
#line 1342 "syntactic.tab.c"
    break;

  case 26: /* value: INT  */
#line 133 "syntactic.y"
                  { (yyval.fval) = (float)(yyvsp[0].ival); }
#line 1348 "syntactic.tab.c"
    break;

  case 27: /* value: FLO  */
#line 134 "syntactic.y"
                  { (yyval.fval) = (yyvsp[0].fval); }
#line 1354 "syntactic.tab.c"
    break;

  case 28: /* value: IVR  */
#line 135 "syntactic.y"
                  { (yyval.fval) = getSymbolValue((yyvsp[0].sval)); }
#line 1360 "syntactic.tab.c"
    break;

  case 29: /* operation: value MAS value  */
#line 137 "syntactic.y"
                              { (yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].fval); }
#line 1366 "syntactic.tab.c"
    break;

  case 30: /* operation: value RES value  */
#line 138 "syntactic.y"
                              { (yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].fval); }
#line 1372 "syntactic.tab.c"
    break;

  case 31: /* operation: value MUL value  */
#line 139 "syntactic.y"
                              { (yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].fval); }
#line 1378 "syntactic.tab.c"
    break;

  case 32: /* operation: value DIV value  */
#line 140 "syntactic.y"
                              {if((yyvsp[0].fval) == 0)
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = (yyvsp[-2].fval)/(yyvsp[0].fval);
                              }
#line 1388 "syntactic.tab.c"
    break;

  case 33: /* callfuncion: IVR PIZ PDE PYC  */
#line 146 "syntactic.y"
                              { create((yyvsp[-3].sval)); }
#line 1394 "syntactic.tab.c"
    break;

  case 34: /* callfuncion: IVR PIZ INT INT PDE PYC  */
#line 147 "syntactic.y"
                                      { setSymbolValue2((yyvsp[-5].sval), (float)(yyvsp[-3].ival), (float)(yyvsp[-2].ival)); }
#line 1400 "syntactic.tab.c"
    break;

  case 35: /* sii: SII PIZ condition PDE operation PYC FIN  */
#line 149 "syntactic.y"
                                                      {if((yyvsp[-4].fval) == 0)
                                                        printf("Entra al if: %f\n", (yyvsp[-2].fval));
                                                      }
#line 1408 "syntactic.tab.c"
    break;

  case 36: /* sii: SII PIZ condition PDE IVR IGU value PYC FIN  */
#line 152 "syntactic.y"
                                                          {if((yyvsp[-6].fval) == 0)
                                                            setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                          }
#line 1416 "syntactic.tab.c"
    break;

  case 37: /* sii: SII PIZ condition PDE IVR IGU operation PYC FIN  */
#line 155 "syntactic.y"
                                                              {if((yyvsp[-6].fval) == 0)
                                                                setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                              }
#line 1424 "syntactic.tab.c"
    break;

  case 38: /* sii: SII PIZ condition PDE IVR IGU value NOO IVR IGU value PYC FIN  */
#line 158 "syntactic.y"
                                                                            {if((yyvsp[-10].fval) == 0)
                                                                                setSymbolValue((yyvsp[-8].sval), (yyvsp[-6].fval));
                                                                            else
                                                                                setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                                            }
#line 1434 "syntactic.tab.c"
    break;

  case 39: /* sii: SII PIZ condition PDE IVR IGU operation NOO IVR IGU operation PYC FIN  */
#line 163 "syntactic.y"
                                                                                    {if((yyvsp[-10].fval) == 0)
                                                                                        setSymbolValue((yyvsp[-8].sval), (yyvsp[-6].fval));
                                                                                    else
                                                                                        setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                                                    }
#line 1444 "syntactic.tab.c"
    break;

  case 40: /* hasta: HAS PIZ value MEN value PDE IVR IGU operation PYC  */
#line 169 "syntactic.y"
                                                                {while((yyvsp[-7].fval) < (yyvsp[-5].fval)){
                                                                    (yyvsp[-7].fval) += 1;
                                                                    printf("%f\n", (yyvsp[-7].fval));
                                                                    setSymbolValue((yyvsp[-3].sval), (yyvsp[-7].fval));
                                                                 }  
                                                                }
#line 1455 "syntactic.tab.c"
    break;

  case 41: /* condition: value MEN value  */
#line 176 "syntactic.y"
                              {if((yyvsp[-2].fval) < (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1465 "syntactic.tab.c"
    break;

  case 42: /* condition: value MEI value  */
#line 181 "syntactic.y"
                              {if((yyvsp[-2].fval) <= (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1475 "syntactic.tab.c"
    break;

  case 43: /* condition: value MAY value  */
#line 186 "syntactic.y"
                              {if((yyvsp[-2].fval) > (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1485 "syntactic.tab.c"
    break;

  case 44: /* condition: value MAI value  */
#line 191 "syntactic.y"
                              {if((yyvsp[-2].fval) >= (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1495 "syntactic.tab.c"
    break;

  case 45: /* condition: value EQU value  */
#line 196 "syntactic.y"
                              {if((yyvsp[-2].fval) == (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1505 "syntactic.tab.c"
    break;

  case 46: /* condition: value DIF value  */
#line 201 "syntactic.y"
                              {if((yyvsp[-2].fval) != (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1515 "syntactic.tab.c"
    break;

  case 47: /* decfun: FUN IVR PAR PYC FUE  */
#line 207 "syntactic.y"
                                 {  create((yyvsp[-3].sval)); }
#line 1521 "syntactic.tab.c"
    break;

  case 48: /* decfun: FUN IVR PAR return FUE  */
#line 208 "syntactic.y"
                                     {  create((yyvsp[-3].sval)); }
#line 1527 "syntactic.tab.c"
    break;

  case 49: /* decfun: FUN IVR PAR decvar return FUE  */
#line 209 "syntactic.y"
                                            {  create((yyvsp[-4].sval)); }
#line 1533 "syntactic.tab.c"
    break;

  case 50: /* decfun: FUN IVR PAR initvar return FUE  */
#line 210 "syntactic.y"
                                             {  create((yyvsp[-4].sval)); }
#line 1539 "syntactic.tab.c"
    break;

  case 51: /* decfun: FUN IVR PAR asigvar return FUE  */
#line 211 "syntactic.y"
                                             {  create((yyvsp[-4].sval)); }
#line 1545 "syntactic.tab.c"
    break;

  case 52: /* decfun: FUN IVR PAR operation return FUE  */
#line 212 "syntactic.y"
                                               {  create((yyvsp[-4].sval)); }
#line 1551 "syntactic.tab.c"
    break;

  case 57: /* for: POR PIZ VAR IVR IGU INT PYC condition PDE IVR IGU operation PYC  */
#line 220 "syntactic.y"
                                                                              {int i;
                                                                                setSymbolValue((yyvsp[-9].sval), (float)(yyvsp[-7].ival)); 
                                                                                for(i = (yyvsp[-7].ival); i <= 5; i++){
                                                                                    setSymbolValue((yyvsp[-3].sval), i);
                                                                                }
                                                                              }
#line 1562 "syntactic.tab.c"
    break;

  case 58: /* for: POR PIZ initvar condition PDE asigvar  */
#line 226 "syntactic.y"
                                                    {int i;
                                                     for(i = (yyvsp[-3].fval); i <= 5; i++){
                                                         printf("pasa");
                                                     }
                                                    }
#line 1572 "syntactic.tab.c"
    break;

  case 59: /* printSentence: PRINT PIZ value PDE PYC  */
#line 232 "syntactic.y"
                                        { printf("%f\n", (yyvsp[-2].fval)); }
#line 1578 "syntactic.tab.c"
    break;

  case 60: /* printSentence: PRINT PIZ STR PDE PYC  */
#line 233 "syntactic.y"
                                      { printf("%s\n", (yyvsp[-2].sval)); }
#line 1584 "syntactic.tab.c"
    break;


#line 1588 "syntactic.tab.c"

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

#line 234 "syntactic.y"

/**Seccion de codigo de usuario**/
void yyerror(char *s){
    printf("Error Sintáctico: %s\n", s);
}

int main(int argc, char **argv){
    printf("Inicio del programa: \n");
    if(argc>1)
        yyin=fopen(argv[1],"rt");
    else
        yyin=stdin;
    yyparse();
    return 0;
}
