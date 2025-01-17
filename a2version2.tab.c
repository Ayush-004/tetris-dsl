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
#line 3 "a2version2.y"

    #include <math.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <string.h>
    #include <error.h>
    #include <errno.h>
     
    #include "extetrickstype.h"
     
    void yyerror(const char *s)
    {
    fprintf(stderr,"%s\n",s);
    return;
    }
     
    int yywrap()
    {
        return 1;
    }
     
    char* indent(char* body) {
    	char* ans = malloc(1024);
    	memset(ans, 0, 1024);
    	char* line = strtok(body, "\n");
    	while(line != NULL) {
    		sprintf(ans, "%s    %s\n", ans, line);
    		line = strtok(NULL, "\n");
    	}
    	free(body);
    	return ans;
    }
	const char *verbatim="import sys\nsys.path.append('../')\nfrom game_engine.engine import *\n";
	const char *verbatim1="import sys\nsys.path.append('../')\nfrom game_engine.engine import *\nfrom game_engine.board import *\nfrom game_engine.allextetrominoes import *\nfrom game_engine.shape import *\n";
	const char* main_func="if __name__ == '__main__':\n\ttetris_engine = TetrisEngine()\n";
	const char*object_name="tetris_engine";
     
    

#line 112 "a2version2.tab.c"

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

#include "a2version2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SECTION1 = 3,                   /* SECTION1  */
  YYSYMBOL_SECTION2 = 4,                   /* SECTION2  */
  YYSYMBOL_SECTION3 = 5,                   /* SECTION3  */
  YYSYMBOL_NEWLINE = 6,                    /* NEWLINE  */
  YYSYMBOL_NUM = 7,                        /* NUM  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_THEN = 10,                      /* THEN  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_CALL = 14,                      /* CALL  */
  YYSYMBOL_WITH = 15,                      /* WITH  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_NOT = 18,                       /* NOT  */
  YYSYMBOL_NEG = 19,                       /* NEG  */
  YYSYMBOL_PLAY = 20,                      /* PLAY  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_22_ = 22,                       /* '='  */
  YYSYMBOL_23_ = 23,                       /* '['  */
  YYSYMBOL_24_ = 24,                       /* ']'  */
  YYSYMBOL_25_ = 25,                       /* '{'  */
  YYSYMBOL_26_ = 26,                       /* '}'  */
  YYSYMBOL_27_ = 27,                       /* '('  */
  YYSYMBOL_28_ = 28,                       /* ')'  */
  YYSYMBOL_29_ = 29,                       /* '+'  */
  YYSYMBOL_30_ = 30,                       /* '-'  */
  YYSYMBOL_31_ = 31,                       /* '*'  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_START = 33,                     /* START  */
  YYSYMBOL_PRIMITIVE = 34,                 /* PRIMITIVE  */
  YYSYMBOL_ENGINE = 35,                    /* ENGINE  */
  YYSYMBOL_FUNCTIONS = 36,                 /* FUNCTIONS  */
  YYSYMBOL_FUNCTION = 37,                  /* FUNCTION  */
  YYSYMBOL_BODY = 38,                      /* BODY  */
  YYSYMBOL_STATEMENT = 39,                 /* STATEMENT  */
  YYSYMBOL_IFSTATEMENT = 40,               /* IFSTATEMENT  */
  YYSYMBOL_WHILELOOP = 41,                 /* WHILELOOP  */
  YYSYMBOL_EXPR = 42,                      /* EXPR  */
  YYSYMBOL_ARITHLOGIC = 43,                /* ARITHLOGIC  */
  YYSYMBOL_TERM = 44,                      /* TERM  */
  YYSYMBOL_ARITH1 = 45,                    /* ARITH1  */
  YYSYMBOL_FACTOR = 46,                    /* FACTOR  */
  YYSYMBOL_TERM1 = 47,                     /* TERM1  */
  YYSYMBOL_PARAM = 48,                     /* PARAM  */
  YYSYMBOL_PARAMLIST = 49                  /* PARAMLIST  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   99

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  101

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


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
      27,    28,    31,    29,     2,    30,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,    26,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    60,    66,    74,    80,    87,    93,    99,
     107,   113,   120,   126,   132,   138,   146,   153,   163,   172,
     178,   184,   196,   204,   211,   217,   223,   229,   236,   239,
     242,   245,   251,   255,   258,   261,   265,   273,   279
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
  "\"end of file\"", "error", "\"invalid token\"", "SECTION1", "SECTION2",
  "SECTION3", "NEWLINE", "NUM", "ID", "IF", "THEN", "ELSE", "END", "WHILE",
  "CALL", "WITH", "OR", "AND", "NOT", "NEG", "PLAY", "RETURN", "'='",
  "'['", "']'", "'{'", "'}'", "'('", "')'", "'+'", "'-'", "'*'", "$accept",
  "START", "PRIMITIVE", "ENGINE", "FUNCTIONS", "FUNCTION", "BODY",
  "STATEMENT", "IFSTATEMENT", "WHILELOOP", "EXPR", "ARITHLOGIC", "TERM",
  "ARITH1", "FACTOR", "TERM1", "PARAM", "PARAMLIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      19,    22,    18,    34,   -74,    32,    58,    -2,    59,   -74,
     -74,    50,    -4,    60,   -74,     1,     3,    42,    61,    -2,
      -2,    43,    34,     2,     2,     2,   -74,     2,     2,   -74,
      62,    63,    66,    12,    45,    46,   -74,   -74,     1,     1,
       1,     3,     3,    40,    69,    42,    68,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,    55,    51,    52,    -2,    54,
      40,   -74,   -74,    64,   -74,    67,    68,    -2,    -2,    -2,
     -74,   -74,   -74,    65,   -74,    -2,    68,    57,   -74,    56,
      70,    26,   -74,   -74,   -74,    72,    40,    68,   -74,    40,
      71,    68,    74,    24,   -74,    73,   -74,    40,   -74,    76,
     -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,     0,     0,    29,
      28,     0,     0,     0,    19,    27,    35,     8,     0,     0,
       0,     0,     4,     0,     0,     0,    22,     0,     0,    23,
       0,     0,     0,     0,     0,     0,    30,     3,    27,    27,
      27,    35,    35,     0,     0,     8,     0,    20,    32,    31,
      26,    24,    25,    34,    33,     0,     0,     0,     0,     0,
      11,    12,    13,     0,     7,     0,    38,     0,     0,     0,
      15,     9,    10,     0,     2,     0,    38,     0,    14,     0,
       0,     0,    36,    37,    21,     0,     0,     0,     5,     0,
       0,    38,     0,    11,    18,     0,    16,     0,     6,     0,
      17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,    77,   -74,    47,   -74,   -42,   -73,   -74,   -74,
     -12,   -74,    15,    20,   -15,    10,   -44,   -65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,    74,    31,    32,    72,    60,    61,    62,
      13,    14,    15,    26,    16,    29,    76,    77
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      21,    59,    66,     9,    10,     9,    10,    34,    35,     9,
      10,    83,    41,    42,    19,    20,    93,    23,     4,    11,
      27,    11,     1,    12,    99,    12,    95,    46,     3,    12,
      24,    25,    55,    56,    28,    97,    47,    57,    38,    39,
      40,    87,     5,    91,    90,    58,    70,    92,    55,    56,
      88,    53,    54,    57,     7,    78,    79,    80,    50,    51,
      52,    58,     8,    82,    18,    17,    22,    30,    44,    33,
      43,    36,    45,    48,    49,    63,    65,    67,    68,    69,
      71,    84,    89,    94,    85,    81,    96,    73,   100,    75,
       0,     0,    64,     0,     0,     0,     0,    98,    86,    37
};

static const yytype_int8 yycheck[] =
{
      12,    43,    46,     7,     8,     7,     8,    19,    20,     7,
       8,    76,    27,    28,    18,    19,    89,    16,     0,    23,
      17,    23,     3,    27,    97,    27,    91,    15,     6,    27,
      29,    30,     8,     9,    31,    11,    24,    13,    23,    24,
      25,    15,     8,    87,    86,    21,    58,    89,     8,     9,
      24,    41,    42,    13,    22,    67,    68,    69,    38,    39,
      40,    21,     4,    75,    14,     6,     6,    25,     5,     8,
       8,    28,     6,    28,    28,     6,     8,    22,    27,    27,
      26,    24,    10,    12,    28,    20,    12,    23,    12,    22,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    24,    28,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    33,     6,     0,     8,    34,    22,     4,     7,
       8,    23,    27,    42,    43,    44,    46,     6,    14,    18,
      19,    42,     6,    16,    29,    30,    45,    17,    31,    47,
      25,    36,    37,     8,    42,    42,    28,    34,    44,    44,
      44,    46,    46,     8,     5,     6,    15,    24,    28,    28,
      45,    45,    45,    47,    47,     8,     9,    13,    21,    38,
      39,    40,    41,     6,    36,     8,    48,    22,    27,    27,
      42,    26,    38,    23,    35,    22,    48,    49,    42,    42,
      42,    20,    42,    49,    24,    28,    28,    15,    24,    10,
      38,    48,    38,    39,    12,    49,    12,    11,    24,    39,
      12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      38,    38,    39,    39,    39,    39,    40,    40,    41,    42,
      42,    42,    43,    44,    45,    45,    45,    45,    46,    46,
      46,    46,    46,    47,    47,    47,    48,    49,    49
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     9,     5,     0,     3,     6,     3,     0,     4,
       2,     1,     1,     1,     3,     2,     7,     9,     6,     1,
       4,     7,     2,     2,     3,     3,     3,     0,     1,     1,
       3,     4,     4,     3,     3,     0,     3,     2,     0
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
  case 2: /* START: SECTION1 NEWLINE PRIMITIVE SECTION2 NEWLINE FUNCTIONS SECTION3 NEWLINE ENGINE  */
#line 46 "a2version2.y"
                                                                                            { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    			sprintf(yyval->value.StringValue, "%s\n#PRIMITIVE:\n%s\n#FUNCTIONS:\n%s\n#ENGINE:\n%s\n", verbatim,yyvsp[-6]->value.StringValue, yyvsp[-3]->value.StringValue, yyvsp[0]->value.StringValue);

    			printf("%s\n", yyval->value.StringValue); 
    		}
#line 1476 "a2version2.tab.c"
    break;

  case 3: /* PRIMITIVE: ID '=' EXPR NEWLINE PRIMITIVE  */
#line 60 "a2version2.y"
                                              { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				sprintf(yyval->value.StringValue, "%s = %s\n%s", yyvsp[-4]->value.StringValue, yyvsp[-2]->value.StringValue, yyvsp[0]->value.StringValue);
    				// printf("PRIMITIVE -> ID '=' EXPR NEWLINE PRIMITIVE\n"); 
    			}
#line 1487 "a2version2.tab.c"
    break;

  case 4: /* PRIMITIVE: %empty  */
#line 66 "a2version2.y"
                          { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				strcpy(yyval->value.StringValue, "");
    				// printf("PRIMITIVE -> #\n"); 
    			}
#line 1498 "a2version2.tab.c"
    break;

  case 5: /* ENGINE: '[' PLAY ']'  */
#line 74 "a2version2.y"
                          { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    			sprintf(yyval->value.StringValue, "if __name__ == '__main__':\n\ttetris_engine = TetrisEngine()\n");
    			// printf("ENGINE -> '[' PLAY ']'\n"); 
    		}
#line 1509 "a2version2.tab.c"
    break;

  case 6: /* ENGINE: '[' PLAY WITH PARAM PARAMLIST ']'  */
#line 80 "a2version2.y"
                                                    { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    			sprintf(yyval->value.StringValue, "if __name__ == '__main__':\n\ttetris_engine = TetrisEngine(%s%s)\n", yyvsp[-2]->value.StringValue, yyvsp[-1]->value.StringValue);
    			// printf("ENGINE -> '[' PLAY WITH PARAM PARAMLIST ']'\n"); 
    		}
#line 1520 "a2version2.tab.c"
    break;

  case 7: /* FUNCTIONS: FUNCTION NEWLINE FUNCTIONS  */
#line 87 "a2version2.y"
                                           { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				sprintf(yyval->value.StringValue, "%s\n%s", yyvsp[-2]->value.StringValue, yyvsp[0]->value.StringValue);
    				// printf("FUNCTIONS -> FUNCTION NEWLINE FUNCTIONS\n"); 
    			}
#line 1531 "a2version2.tab.c"
    break;

  case 8: /* FUNCTIONS: %empty  */
#line 93 "a2version2.y"
                          {
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				strcpy(yyval->value.StringValue, "");
    				// printf("FUNCTIONS -> #\n"); 
    			}
#line 1542 "a2version2.tab.c"
    break;

  case 9: /* FUNCTION: '{' ID BODY '}'  */
#line 99 "a2version2.y"
                              { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				char* body = indent(yyvsp[-1]->value.StringValue);
    				sprintf(yyval->value.StringValue, "def %s():\n%s", yyvsp[-2]->value.StringValue, body);
    				// printf("FUNCTION -> '{' ID BODY '}'\n"); 
    			}
#line 1554 "a2version2.tab.c"
    break;

  case 10: /* BODY: STATEMENT BODY  */
#line 107 "a2version2.y"
                          { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    			sprintf(yyval->value.StringValue, "%s\n%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue);
    			// printf("BODY -> STATEMENT BODY\n"); 
    		}
#line 1565 "a2version2.tab.c"
    break;

  case 11: /* BODY: STATEMENT  */
#line 113 "a2version2.y"
                            { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    			sprintf(yyval->value.StringValue, "%s", yyvsp[0]->value.StringValue);
    			// printf("BODY -> STATEMENT\n"); 
    		}
#line 1576 "a2version2.tab.c"
    break;

  case 12: /* STATEMENT: IFSTATEMENT  */
#line 120 "a2version2.y"
                            { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				sprintf(yyval->value.StringValue, "%s", yyvsp[0]->value.StringValue);
    				// printf("%s", $1->value.StringValue); 
    			}
#line 1587 "a2version2.tab.c"
    break;

  case 13: /* STATEMENT: WHILELOOP  */
#line 126 "a2version2.y"
                                    { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				sprintf(yyval->value.StringValue, "%s", yyvsp[0]->value.StringValue);
    				// printf("%s", $1->value.StringValue); 
    			}
#line 1598 "a2version2.tab.c"
    break;

  case 14: /* STATEMENT: ID '=' EXPR  */
#line 132 "a2version2.y"
                                      {
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    				sprintf(yyval->value.StringValue, "%s = %s", yyvsp[-2]->value.StringValue, yyvsp[0]->value.StringValue); 
    				// printf("STATEMENT -> ID '=' EXPR: %s\n", $$->value.StringValue); 
    			}
#line 1609 "a2version2.tab.c"
    break;

  case 15: /* STATEMENT: RETURN EXPR  */
#line 138 "a2version2.y"
                                      { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				sprintf(yyval->value.StringValue, "return %s", yyvsp[0]->value.StringValue);
    				// printf("STATEMENT -> RETURN EXPR\n"); 
    			}
#line 1620 "a2version2.tab.c"
    break;

  case 16: /* IFSTATEMENT: IF '(' EXPR ')' THEN BODY END  */
#line 146 "a2version2.y"
                                                {
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    				char* stm = indent(yyvsp[-1]->value.StringValue);
    				sprintf(yyval->value.StringValue, "if %s :\n%s", yyvsp[-4]->value.StringValue, stm); 
    				// printf("IFSTATEMENT -> IF '(' EXPR ')' THEN STATEMENT END\n"); 
    			}
#line 1632 "a2version2.tab.c"
    break;

  case 17: /* IFSTATEMENT: IF '(' EXPR ')' THEN STATEMENT ELSE STATEMENT END  */
#line 153 "a2version2.y"
                                                                            {
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    				char* stm1 = indent(yyvsp[-3]->value.StringValue);
    				char* stm2 = indent(yyvsp[-1]->value.StringValue);
    				sprintf(yyval->value.StringValue, "if %s :\n%selse:\n%s", yyvsp[-6]->value.StringValue, stm1, stm2); 
    				// printf("IFSTATEMENT -> IF '(' EXPR ')' THEN STATEMENT ELSE STATEMENT END\n"); 
    			}
#line 1645 "a2version2.tab.c"
    break;

  case 18: /* WHILELOOP: WHILE '(' EXPR ')' BODY END  */
#line 163 "a2version2.y"
                                            { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				char* stm = indent(yyvsp[-1]->value.StringValue);
    				sprintf(yyval->value.StringValue, "while %s :\n%s", yyvsp[-3]->value.StringValue, stm);
    				// printf("WHILELOOP -> WHILE '(' EXPR ')' STATEMENT END\n"); 
    			}
#line 1657 "a2version2.tab.c"
    break;

  case 19: /* EXPR: ARITHLOGIC  */
#line 172 "a2version2.y"
                      {
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    			sprintf(yyval->value.StringValue, "%s", yyvsp[0]->value.StringValue); 
    			// printf("EXPR -> ARITHLOGIC: %s\n", $$->value.StringValue); 
    		}
#line 1668 "a2version2.tab.c"
    break;

  case 20: /* EXPR: '[' CALL ID ']'  */
#line 178 "a2version2.y"
                                   { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    			sprintf(yyval->value.StringValue, "%s()", yyvsp[-1]->value.StringValue);
    			// printf("EXPR -> '[' CALL ID ']'\n"); 
    		}
#line 1679 "a2version2.tab.c"
    break;

  case 21: /* EXPR: '[' CALL ID WITH PARAM PARAMLIST ']'  */
#line 184 "a2version2.y"
                                                       { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
				char object_cat[1024]={0};
				strcpy(object_cat, object_name);
				strcat(object_cat, ".");
				strcat(object_cat, yyvsp[-4]->value.StringValue);
    			sprintf(yyval->value.StringValue, "%s(%s%s)", object_cat, yyvsp[-2]->value.StringValue, yyvsp[-1]->value.StringValue);
    			// printf("EXPR -> '[' CALL ID WITH PARAM PARAMLIST ']'\n"); 
    		}
#line 1694 "a2version2.tab.c"
    break;

  case 22: /* ARITHLOGIC: TERM ARITH1  */
#line 196 "a2version2.y"
                             {
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    				sprintf(yyval->value.StringValue, "%s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue); 
    				// printf("ARITHLOGIC -> TERM ARITH1: %s\n", $$->value.StringValue); 
    			}
#line 1705 "a2version2.tab.c"
    break;

  case 23: /* TERM: FACTOR TERM1  */
#line 204 "a2version2.y"
                        {
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    			sprintf(yyval->value.StringValue, "%s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue); 
    			// printf("TERM -> FACTOR TERM1: %s\n", $$->value.StringValue); 
    		}
#line 1716 "a2version2.tab.c"
    break;

  case 24: /* ARITH1: '+' TERM ARITH1  */
#line 211 "a2version2.y"
                             {
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    			sprintf(yyval->value.StringValue, " + %s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue); 
    			// printf("ARITH1 -> '+' TERM ARITH1: %s\n", $$->value.StringValue); 
    		}
#line 1727 "a2version2.tab.c"
    break;

  case 25: /* ARITH1: '-' TERM ARITH1  */
#line 217 "a2version2.y"
                                  {
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    			sprintf(yyval->value.StringValue, " - %s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue); 
    			// printf("ARITH1 -> '-' TERM ARITH1\n"); 
    			}
#line 1738 "a2version2.tab.c"
    break;

  case 26: /* ARITH1: OR TERM ARITH1  */
#line 223 "a2version2.y"
                                 {
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    			sprintf(yyval->value.StringValue, " || %s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue); 
    			// printf("ARITH1 -> OR TERM ARITH1\n"); 
    			}
#line 1749 "a2version2.tab.c"
    break;

  case 27: /* ARITH1: %empty  */
#line 229 "a2version2.y"
                  {
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); 
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); 
    			strcpy(yyval->value.StringValue, "");
    			// strcpy($$->value.StringValue, ""); printf("ARITH1 -> #\n"); 
    			}
#line 1760 "a2version2.tab.c"
    break;

  case 28: /* FACTOR: ID  */
#line 236 "a2version2.y"
                {yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); strcpy(yyval->value.StringValue, yyvsp[0]->value.StringValue); 
    				// printf("FACTOR -> ID\n"); 
    				}
#line 1768 "a2version2.tab.c"
    break;

  case 29: /* FACTOR: NUM  */
#line 239 "a2version2.y"
                              {yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); strcpy(yyval->value.StringValue, yyvsp[0]->value.StringValue); 
    					// printf("FACTOR -> NUM: %s\n", $$->value.StringValue); 
    					}
#line 1776 "a2version2.tab.c"
    break;

  case 30: /* FACTOR: '(' EXPR ')'  */
#line 242 "a2version2.y"
                                       {yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); sprintf(yyval->value.StringValue, "(%s)", yyvsp[-1]->value.StringValue); 
    								// printf("FACTOR -> '(' EXPR ')'\n"); 
    								}
#line 1784 "a2version2.tab.c"
    break;

  case 31: /* FACTOR: '(' NEG EXPR ')'  */
#line 245 "a2version2.y"
                                           { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				sprintf(yyval->value.StringValue, "(-%s)", yyvsp[-1]->value.StringValue);
    				// printf("FACTOR -> '(' NEG EXPR ')'\n"); 
    				}
#line 1795 "a2version2.tab.c"
    break;

  case 32: /* FACTOR: '(' NOT EXPR ')'  */
#line 251 "a2version2.y"
                                           {yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); sprintf(yyval->value.StringValue, "(!%s)", yyvsp[-2]->value.StringValue); 
    				// printf("FACTOR -> '(' NOT EXPR ')'\n"); 
    			}
#line 1803 "a2version2.tab.c"
    break;

  case 33: /* TERM1: '*' FACTOR TERM1  */
#line 255 "a2version2.y"
                             {yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); sprintf(yyval->value.StringValue, " * %s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue); 
    			// printf("TERM1 -> '*' FACTOR TERM1\n"); 
    			}
#line 1811 "a2version2.tab.c"
    break;

  case 34: /* TERM1: AND FACTOR TERM1  */
#line 258 "a2version2.y"
                                           {yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); sprintf(yyval->value.StringValue, " && %s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue); 
    				// printf("TERM1 -> AND FACTOR TERM1\n"); 
    			}
#line 1819 "a2version2.tab.c"
    break;

  case 35: /* TERM1: %empty  */
#line 261 "a2version2.y"
                          {yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType)); yyval->value.StringValue = (char*)malloc(1024*sizeof(char)); strcpy(yyval->value.StringValue, ""); 
    				// printf("TERM1 -> #\n"); 
    			}
#line 1827 "a2version2.tab.c"
    break;

  case 36: /* PARAM: ID '=' EXPR  */
#line 265 "a2version2.y"
                        { 
    			yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    			yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    			sprintf(yyval->value.StringValue, "%s = %s", yyvsp[-2]->value.StringValue, yyvsp[0]->value.StringValue);
    			// printf("PARAM -> ID '=' EXPR\n"); 
    		}
#line 1838 "a2version2.tab.c"
    break;

  case 37: /* PARAMLIST: PARAM PARAMLIST  */
#line 273 "a2version2.y"
                                { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				sprintf(yyval->value.StringValue, ", %s%s", yyvsp[-1]->value.StringValue, yyvsp[0]->value.StringValue);
    				// printf("PARAMLIST -> PARAM PARAMLIST\n"); 
    			}
#line 1849 "a2version2.tab.c"
    break;

  case 38: /* PARAMLIST: %empty  */
#line 279 "a2version2.y"
                          { 
    				yyval = (ExtetricksSType)malloc(sizeof(xtetricksSType));
    				yyval->value.StringValue = (char*)malloc(1024*sizeof(char));
    				strcpy(yyval->value.StringValue, "");
    				// printf("PARAMLIST -> #\n"); 
    			}
#line 1860 "a2version2.tab.c"
    break;


#line 1864 "a2version2.tab.c"

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

#line 285 "a2version2.y"

     
    int main(int argc, char *argv[])
    {
    yyparse();
    return 0;
    }
