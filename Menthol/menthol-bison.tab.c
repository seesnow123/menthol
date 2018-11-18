/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "menthol-bison.y"

#include "StatementList.h"
extern int yylex();
extern int lineno;
extern int yyerrorcount;
extern char* currentyyfile;
int lineaddress=0;
#define YYDEBUG 1
#define YYPARSE_PARAM parm
int linenum=0;
int yyerror(char* str)
{
	/*
	yyerrorcount++;
	printf("\r\n");
	printf("compile error: %s, in %s,at line %d",str,currentyyfile,lineno);
	printf("\r\n");*/
	MError::CreateInstance()->PrintError(str);
	return(1);
}
enum Scope;
struct StackState;


/* Line 371 of yacc.c  */
#line 93 "menthol-bison.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "menthol-bison.tab.h".  */
#ifndef YY_YY_MENTHOL_BISON_TAB_H_INCLUDED
# define YY_YY_MENTHOL_BISON_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VARIDENTIFIER = 258,
     IDENTIFIER = 259,
     GLOBALVARIDENTIFIER = 260,
     NUMBER = 261,
     STRING = 262,
     DOUBLE = 263,
     TRUE_KEYWORD = 264,
     FALSE_KEYWORD = 265,
     IF = 266,
     ELSE = 267,
     FOR = 268,
     BREAK = 269,
     TRY = 270,
     EXCEPT = 271,
     THROW = 272,
     IMPORT = 273,
     CONTINUE = 274,
     RETURN = 275,
     WHILE = 276,
     NULL_KEYWORD = 277,
     POWER_OP = 278,
     NEQ_OP = 279,
     OR_OP = 280,
     AND_OP = 281,
     GE_OP = 282,
     LE_OP = 283,
     EQ_OP = 284,
     ADD_ASSIGN = 285,
     SUB_ASSIGN = 286,
     DIV_ASSIGN = 287,
     MUL_ASSIGN = 288,
     ASSIGN_ASSIGN = 289,
     MOD_ASSIGN = 290,
     AND_ASSIGN = 291,
     OR_ASSIGN = 292,
     XOR_ASSIGN = 293,
     SHIFT_LEFT_OP = 294,
     SHIFT_RIGHT_OP = 295,
     WMAIN = 296,
     DEF = 297,
     VAR = 298,
     IN = 299,
     ARRAYSECTION = 300,
     DICT_OP = 301,
     TYPEOF = 302
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_MENTHOL_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 205 "menthol-bison.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   639

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  239

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,    64,    67,     2,
      58,    59,    51,    50,    55,    49,    62,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    54,
      65,    48,    66,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,    69,    57,     2,     2,     2,     2,
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    21,
      27,    32,    35,    38,    40,    44,    46,    50,    54,    57,
      59,    63,    65,    67,    69,    71,    75,    80,    82,    87,
      93,    99,   106,   110,   117,   123,   128,   132,   136,   140,
     142,   145,   147,   150,   153,   156,   158,   162,   164,   168,
     172,   176,   178,   182,   184,   188,   190,   194,   196,   200,
     202,   206,   210,   214,   218,   220,   224,   228,   230,   234,
     236,   240,   242,   246,   248,   252,   254,   258,   260,   266,
     268,   270,   272,   276,   278,   282,   286,   289,   293,   295,
     299,   303,   306,   308,   312,   314,   318,   321,   323,   325,
     327,   329,   331,   334,   336,   339,   341,   343,   345,   347,
     349,   351,   353,   355,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   385,   393,   399,   407,
     410,   413,   416,   420,   424,   426,   430,   437
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    73,    -1,    72,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,   121,    -1,    41,    53,    78,    79,
      -1,    42,     4,    53,    78,    79,    -1,    42,     4,    53,
      79,    -1,   108,    54,    -1,   101,    54,    -1,     3,    -1,
       3,    34,   100,    -1,    77,    -1,    78,    55,    77,    -1,
      56,    83,    57,    -1,    56,    57,    -1,   100,    -1,    80,
      55,   100,    -1,   105,    -1,   102,    -1,   113,    -1,    99,
      -1,    58,   100,    59,    -1,    47,    58,   100,    59,    -1,
      81,    -1,    82,    60,   100,    61,    -1,    82,    60,   100,
      45,    61,    -1,    82,    60,    45,   100,    61,    -1,    82,
      60,   100,    45,   100,    61,    -1,    82,    46,     4,    -1,
      82,    62,     4,    58,    80,    59,    -1,    82,    62,     4,
      58,    59,    -1,    82,    58,    80,    59,    -1,    82,    58,
      59,    -1,    82,    62,     5,    -1,    82,    62,     4,    -1,
     109,    -1,    83,   109,    -1,    82,    -1,    49,    84,    -1,
      50,    84,    -1,    63,    84,    -1,    84,    -1,    85,    23,
      84,    -1,    85,    -1,    86,    51,    85,    -1,    86,    52,
      85,    -1,    86,    64,    85,    -1,    86,    -1,    87,    49,
      86,    -1,    87,    -1,    88,    50,    87,    -1,    88,    -1,
      89,    39,    88,    -1,    89,    -1,    90,    40,    89,    -1,
      90,    -1,    91,    65,    90,    -1,    91,    66,    90,    -1,
      91,    28,    90,    -1,    91,    27,    90,    -1,    91,    -1,
      92,    29,    91,    -1,    92,    24,    91,    -1,    92,    -1,
      93,    67,    92,    -1,    93,    -1,    94,    68,    93,    -1,
      94,    -1,    95,    69,    94,    -1,    95,    -1,    96,    26,
      95,    -1,    96,    -1,    97,    25,    96,    -1,    97,    -1,
      97,    70,   101,    53,    98,    -1,     3,    -1,     5,    -1,
      98,    -1,    84,   114,   100,    -1,   100,    -1,   101,    55,
     100,    -1,    60,   101,    61,    -1,    60,    61,    -1,     4,
      46,   100,    -1,   103,    -1,   104,    55,   103,    -1,    58,
     104,    59,    -1,    58,    59,    -1,    99,    -1,    99,    34,
     100,    -1,   106,    -1,   107,    55,   106,    -1,    43,   107,
      -1,    79,    -1,   118,    -1,   111,    -1,   112,    -1,   110,
      -1,   108,    54,    -1,    54,    -1,   101,    54,    -1,   115,
      -1,   120,    -1,   117,    -1,   116,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    22,    -1,     4,
      -1,    34,    -1,    33,    -1,    32,    -1,    35,    -1,    30,
      -1,    31,    -1,    36,    -1,    38,    -1,    37,    -1,    11,
      58,   101,    59,    79,    -1,    11,    58,   101,    59,    79,
      12,    79,    -1,    21,    58,   101,    59,    79,    -1,    13,
      58,   108,    44,   100,    59,    79,    -1,    19,    54,    -1,
      14,    54,    -1,    20,    54,    -1,    20,   101,    54,    -1,
      17,    80,    54,    -1,     3,    -1,   119,    55,     3,    -1,
      15,    79,    16,    53,   119,    79,    -1,    18,     7,    54,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   106,   107,   108,   109,   112,   124,
     134,   148,   155,   161,   162,   169,   174,   180,   184,   191,
     198,   209,   212,   215,   216,   219,   220,   227,   228,   234,
     240,   246,   253,   260,   267,   275,   281,   286,   293,   304,
     311,   320,   321,   325,   328,   333,   334,   341,   342,   346,
     350,   356,   357,   363,   364,   371,   372,   379,   380,   386,
     387,   391,   395,   399,   405,   406,   410,   416,   417,   423,
     424,   430,   431,   437,   438,   444,   445,   451,   454,   462,
     465,   474,   475,   509,   513,   521,   525,   531,   537,   542,
     551,   552,   558,   563,   569,   573,   578,   583,   584,   585,
     586,   587,   590,   596,   599,   605,   606,   609,   610,   614,
     621,   628,   635,   640,   646,   651,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   671,   677,   688,   696,   702,
     705,   708,   711,   712,   715,   720,   726,   733
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VARIDENTIFIER", "IDENTIFIER",
  "GLOBALVARIDENTIFIER", "NUMBER", "STRING", "DOUBLE", "TRUE_KEYWORD",
  "FALSE_KEYWORD", "IF", "ELSE", "FOR", "BREAK", "TRY", "EXCEPT", "THROW",
  "IMPORT", "CONTINUE", "RETURN", "WHILE", "NULL_KEYWORD", "POWER_OP",
  "NEQ_OP", "OR_OP", "AND_OP", "GE_OP", "LE_OP", "EQ_OP", "ADD_ASSIGN",
  "SUB_ASSIGN", "DIV_ASSIGN", "MUL_ASSIGN", "ASSIGN_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "SHIFT_LEFT_OP",
  "SHIFT_RIGHT_OP", "WMAIN", "DEF", "VAR", "IN", "ARRAYSECTION", "DICT_OP",
  "TYPEOF", "'='", "'-'", "'+'", "'*'", "'/'", "':'", "';'", "','", "'{'",
  "'}'", "'('", "')'", "'['", "']'", "'.'", "'!'", "'%'", "'<'", "'>'",
  "'&'", "'^'", "'|'", "'?'", "$accept", "start", "run_statement",
  "wmain_definition", "functiondefinition", "global_initialization",
  "function_parameter_list", "function_parameter",
  "funciton_codeblock_statement", "function_arguments",
  "primary_expression", "list_element", "statement_list",
  "prefix_expression", "power_expression", "multiplicative_expression",
  "subtraction_expression", "additive_expression", "shift_left_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "indentifier_expression",
  "assignment_expression_definition", "expression_definition",
  "array_declare", "dict_expression", "dict_statement", "dict_declare",
  "Initialization_Definition", "initialization_list",
  "initialization_expression", "statement", "expression_statement",
  "selection_statement", "iteration_statement", "built-intype_declare",
  "assignment_operator", "if_statement", "while_statement",
  "for_statement", "jump_statement", "try_parameter", "try_statement",
  "import_expresson", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    61,    45,
      43,    42,    47,    58,    59,    44,   123,   125,    40,    41,
      91,    93,    46,    33,    37,    60,    62,    38,    94,   124,
      63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    73,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    84,    84,    85,    85,    86,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   116,   117,   118,
     118,   118,   118,   118,   119,   119,   120,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     4,     5,
       4,     2,     2,     1,     3,     1,     3,     3,     2,     1,
       3,     1,     1,     1,     1,     3,     4,     1,     4,     5,
       5,     6,     3,     6,     5,     4,     3,     3,     3,     1,
       2,     1,     2,     2,     2,     1,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       1,     1,     3,     1,     3,     3,     2,     3,     1,     3,
       3,     2,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     5,     7,     2,
       2,     2,     3,     3,     1,     3,     6,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    79,   115,    80,   109,   110,   111,   112,   113,     0,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     4,     5,     6,    27,    41,    45,    47,    51,
      53,    55,    57,    59,    64,    67,    69,    71,    73,    75,
      77,    81,    24,    83,     0,    22,    21,     0,    23,     7,
       0,     0,     0,    92,    94,    96,     0,    42,    43,   115,
      91,     0,    88,     0,    86,     0,    44,     1,     3,     0,
       0,     0,     0,   120,   121,   118,   117,   116,   119,   122,
     124,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,    11,   137,    13,    15,     0,
       0,     0,     0,     0,     0,    25,     0,    90,    85,    32,
      36,     0,    19,     0,     0,    38,    37,    82,    46,    45,
      48,    49,    50,    52,    54,    56,    58,    63,    62,    60,
      61,    66,    65,    68,    70,    72,    74,    76,     0,    84,
       0,     0,     0,     8,     0,    10,    93,    95,    26,    87,
       0,    89,     0,    35,     0,     0,    28,     0,     0,    14,
      16,     0,     0,     0,     0,     0,     0,     0,     0,   103,
      18,    97,     0,     0,     0,    39,   101,    99,   100,   105,
     108,   107,    98,   106,     9,    20,    30,    29,     0,    34,
       0,    78,     0,     0,   130,     0,     0,   129,   131,     0,
       0,    17,    40,   104,   102,    31,    33,     0,     0,     0,
     133,   132,     0,     0,     0,     0,     0,   125,     0,   134,
       0,   127,     0,     0,     0,   136,   126,   128,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,    23,    24,   108,   109,   181,   121,
      25,    26,   182,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    62,    63,    46,    54,    55,    47,   185,   186,
     187,   188,    48,    82,   189,   190,   191,   192,   230,   193,
      49
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
     252,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,    59,
    -158,   -41,    28,    40,    15,   576,   576,   313,   333,   576,
      20,  -158,  -158,  -158,  -158,  -158,   -27,   165,    54,   -15,
       2,    57,    88,    92,   -19,   -13,    67,    71,    72,   114,
     -20,  -158,  -158,  -158,     3,  -158,  -158,    89,  -158,  -158,
      90,   139,    93,   113,  -158,    94,   576,  -158,  -158,   105,
    -158,    95,  -158,   -38,  -158,   -48,  -158,  -158,  -158,   148,
     394,   414,    77,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,  -158,   576,  -158,  -158,   119,  -158,    29,
       0,   576,    40,    96,   576,  -158,   152,  -158,  -158,  -158,
    -158,    -7,  -158,   576,   -39,    99,  -158,  -158,  -158,  -158,
      54,    54,    54,   -15,     2,    57,    88,    92,    92,    92,
      92,   -19,   -19,   -13,    67,    71,    72,   114,    21,  -158,
     576,   139,   168,  -158,    29,  -158,  -158,  -158,  -158,  -158,
     105,  -158,   576,  -158,    98,   475,  -158,   495,   576,  -158,
    -158,   102,   104,   109,   108,   576,   111,   556,   110,  -158,
    -158,  -158,   229,    38,   115,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   106,  -158,
       5,  -158,   576,   127,  -158,   164,    41,  -158,  -158,    44,
     576,  -158,  -158,  -158,  -158,  -158,  -158,    13,   140,   138,
    -158,  -158,    16,   108,   576,   189,   108,   192,   146,  -158,
      49,  -158,   108,   108,   203,  -158,  -158,  -158,  -158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,   188,  -158,  -158,  -158,    58,   100,   -95,  -157,
    -158,  -158,  -158,    25,    17,   125,   126,   124,   129,    -3,
      34,   123,   118,   122,   130,   128,  -158,    55,   -12,   -17,
     -16,  -158,   131,  -158,  -158,   133,  -158,  -148,    45,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    53,    65,   107,   184,   101,   165,   104,    91,    92,
     200,    95,    51,   118,   153,   155,    96,   116,   206,    69,
      67,   117,   166,     1,     2,     3,     4,     5,     6,     7,
       8,    70,    52,    71,   184,    72,    84,    85,     9,   113,
      57,    58,    10,     1,    66,     3,    93,    94,   162,    86,
     102,    87,   163,   122,   124,   218,   152,   103,   104,   194,
     162,    11,    12,    13,   216,   127,    50,    14,   104,    15,
      16,   104,   223,    56,   168,   226,   104,    83,    17,   205,
      18,   125,   126,    19,   151,   152,   148,   149,   137,   138,
     139,   140,   213,   104,   156,   220,   162,   159,   221,   104,
      53,   130,   131,   132,   234,   152,   164,    88,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,    89,   227,   141,
     142,   231,    90,   169,    97,   235,   183,   236,   237,    98,
     100,    99,   107,   105,   106,   195,   110,   111,   198,   112,
     122,   114,   119,   150,   115,   158,   160,   167,   122,   196,
     202,   209,   203,   204,   152,   207,   183,   215,   210,   214,
      13,     1,     2,     3,     4,     5,     6,     7,     8,   171,
     219,   172,   173,   174,   224,   175,   217,   176,   177,   178,
      10,   225,   229,   129,   222,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   232,   233,   238,   228,    68,   170,
     154,    13,   133,   135,   134,    14,   144,    15,    16,   136,
     143,   145,   179,   201,   152,   180,    17,   212,    18,   147,
     146,    19,     1,     2,     3,     4,     5,     6,     7,     8,
     171,     0,   172,   173,   174,   157,   175,   161,   176,   177,
     178,    10,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       9,     0,    13,     0,    10,     0,    14,     0,    15,    16,
       0,     0,     0,   179,     0,   152,   211,    17,     0,    18,
       0,     0,    19,    11,    12,    13,     0,     0,     0,    14,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
      17,     0,    18,     0,     0,    19,     1,    59,     3,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     1,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,    17,    60,    18,     0,     0,    19,     0,     0,     0,
      14,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    18,    64,     0,    19,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,    14,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,    17,   120,    18,     0,     0,    19,     0,   123,
       0,    14,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,    17,     0,    18,     0,     0,    19,     1,     2,
       3,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     1,     2,
       3,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
       0,     0,     0,    17,     0,    18,   197,     0,    19,     0,
       0,     0,    14,     0,    15,    16,     0,     0,     0,     0,
       0,     0,     0,    17,   199,    18,     0,     0,    19,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,    14,     0,    15,    16,     0,     0,     0,
     208,     0,     0,     0,    17,     0,    18,     0,     0,    19,
       0,     0,     0,    14,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,    17,     0,    18,     0,     0,    19
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-158)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    13,    18,     3,   152,    25,    45,    55,    27,    28,
     167,    24,    53,    61,   109,   110,    29,    55,   175,    46,
       0,    59,    61,     3,     4,     5,     6,     7,     8,     9,
      10,    58,     4,    60,   182,    62,    51,    52,    18,    56,
      15,    16,    22,     3,    19,     5,    65,    66,    55,    64,
      70,    49,    59,    70,    71,   203,    56,    54,    55,   154,
      55,    41,    42,    43,    59,    82,     7,    47,    55,    49,
      50,    55,    59,    58,    53,    59,    55,    23,    58,   174,
      60,     4,     5,    63,    55,    56,   102,   104,    91,    92,
      93,    94,    54,    55,   111,    54,    55,   114,    54,    55,
     112,    84,    85,    86,    55,    56,   123,    50,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    39,   223,    95,
      96,   226,    40,   150,    67,   230,   152,   232,   233,    68,
      26,    69,     3,    54,    54,   162,    53,    34,   165,    55,
     167,    46,     4,    34,    59,    59,     4,    58,   175,    61,
      58,   177,    58,    54,    56,    54,   182,    61,    58,    54,
      43,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      16,    13,    14,    15,    44,    17,   202,    19,    20,    21,
      22,    53,     3,   168,   210,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    12,    59,     3,   224,    20,   151,
     110,    43,    87,    89,    88,    47,    98,    49,    50,    90,
      97,    99,    54,   168,    56,    57,    58,   182,    60,   101,
     100,    63,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,   112,    17,   116,    19,    20,
      21,    22,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    43,    -1,    22,    -1,    47,    -1,    49,    50,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    -1,    60,
      -1,    -1,    63,    41,    42,    43,    -1,    -1,    -1,    47,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    60,    -1,    -1,    63,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    63,    -1,    -1,    -1,
      47,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    60,    61,    -1,    63,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    63,    -1,    45,
      -1,    47,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    -1,    -1,    63,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    61,    -1,    63,    -1,
      -1,    -1,    47,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    63,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    47,    -1,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    18,
      22,    41,    42,    43,    47,    49,    50,    58,    60,    63,
      72,    73,    74,    75,    76,    81,    82,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   105,   108,   113,   121,
       7,    53,     4,    99,   106,   107,    58,    84,    84,     4,
      59,   100,   103,   104,    61,   101,    84,     0,    73,    46,
      58,    60,    62,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   114,    23,    51,    52,    64,    49,    50,    39,
      40,    27,    28,    65,    66,    24,    29,    67,    68,    69,
      26,    25,    70,    54,    55,    54,    54,     3,    77,    78,
      53,    34,    55,   100,    46,    59,    55,    59,    61,     4,
      59,    80,   100,    45,   100,     4,     5,   100,    84,    84,
      85,    85,    85,    86,    87,    88,    89,    90,    90,    90,
      90,    91,    91,    92,    93,    94,    95,    96,   101,   100,
      34,    55,    56,    79,    78,    79,   100,   106,    59,   100,
       4,   103,    55,    59,   100,    45,    61,    58,    53,   100,
      77,    11,    13,    14,    15,    17,    19,    20,    21,    54,
      57,    79,    83,   101,   108,   109,   110,   111,   112,   115,
     116,   117,   118,   120,    79,   100,    61,    61,   100,    59,
      80,    98,    58,    58,    54,    79,    80,    54,    54,   101,
      58,    57,   109,    54,    54,    61,    59,   101,   108,    16,
      54,    54,   101,    59,    44,    53,    59,    79,   100,     3,
     119,    79,    12,    59,    55,    79,    79,    79,     3
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
/* Line 1792 of yacc.c  */
#line 113 "menthol-bison.y"
    {
					StatementList *ls = (StatementList*)parm;
         			(yyval.vStatement)= new FunctionDefinition("_mmain",MNT_FunctionDefinition);
					(yyval.vStatement)->AddChilder((yyvsp[(3) - (4)].vStatement));
					(yyval.vStatement)->AddChilder((yyvsp[(4) - (4)].vStatement));
					ls->AddFunction("_mmain");
					ls->SetCompileStructTable((yyval.vStatement));
				}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 125 "menthol-bison.y"
    {
						StatementList *ls = (StatementList*)parm;		
						ls->AddStringConstant(string((yyvsp[(2) - (5)].vSTRING)));		
						(yyval.vStatement)= new FunctionDefinition((yyvsp[(2) - (5)].vSTRING),MNT_FunctionDefinition);
						(yyval.vStatement)->AddChilder((yyvsp[(4) - (5)].vStatement));
						(yyval.vStatement)->AddChilder((yyvsp[(5) - (5)].vStatement));
						ls->AddFunction((yyvsp[(2) - (5)].vSTRING));
						ls->SetCompileStructTable((yyval.vStatement));
				  }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 135 "menthol-bison.y"
    {
						StatementList *ls = (StatementList*)parm;		
						ls->AddStringConstant(string((yyvsp[(2) - (4)].vSTRING)));		
						(yyval.vStatement)= new FunctionDefinition((yyvsp[(2) - (4)].vSTRING),MNT_FunctionDefinition);
						(yyval.vStatement)->AddChilder(0);
						(yyval.vStatement)->AddChilder((yyvsp[(4) - (4)].vStatement));
						ls->AddFunction((yyvsp[(2) - (4)].vSTRING));
						ls->SetCompileStructTable((yyval.vStatement));
				  }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 149 "menthol-bison.y"
    { 
						StatementList *ls = (StatementList*)parm;
						InitializationList* list = static_cast<InitializationList*>((yyvsp[(1) - (2)].vStatement));
						list->ModfiyMemberScope(GLOBAL);
						ls->SetCompileStructTable((yyvsp[(1) - (2)].vStatement));					
				     }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 155 "menthol-bison.y"
    {
							StatementList *ls = (StatementList*)parm;
							ls->SetCompileStructTable((yyvsp[(1) - (2)].vStatement));	
				     }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 161 "menthol-bison.y"
    { (yyval.vStatement) = new FunctionParameter((yyvsp[(1) - (1)].vSTRING));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 163 "menthol-bison.y"
    {
							(yyval.vStatement) = new FunctionParameter((yyvsp[(1) - (3)].vSTRING),(yyvsp[(3) - (3)].vStatement));
					   }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 170 "menthol-bison.y"
    {
				   		(yyval.vStatement) = new FunctionParameterStatement();
				   		(yyval.vStatement)->AddChilder((yyvsp[(1) - (1)].vStatement));
				   }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 175 "menthol-bison.y"
    {
						(yyvsp[(1) - (3)].vStatement)->AddChilder((yyvsp[(3) - (3)].vStatement));
				   }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 180 "menthol-bison.y"
    {								
									(yyval.vStatement) = new CodeBlockStatement();
									(yyval.vStatement)->AddChilder((yyvsp[(2) - (3)].vStatement));
								}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 184 "menthol-bison.y"
    {
								(yyval.vStatement) = new NopExpression();
							}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 192 "menthol-bison.y"
    {
						(yyval.vStatement) =new FunctionArguments();
						if((yyvsp[(1) - (1)].vStatement)!=0){
							(yyval.vStatement)->AddChilder((yyvsp[(1) - (1)].vStatement));
						}
				  }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 199 "menthol-bison.y"
    {
						if((yyvsp[(3) - (3)].vStatement)!=0){
							(yyvsp[(1) - (3)].vStatement)->AddChilder((yyvsp[(3) - (3)].vStatement));
						}
				  }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 209 "menthol-bison.y"
    {
					(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);
				   }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 212 "menthol-bison.y"
    {
					(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);
				   }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 215 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 216 "menthol-bison.y"
    {
					(yyval.vStatement)=(yyvsp[(1) - (1)].vStatement);
				   }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 219 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(2) - (3)].vStatement);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 220 "menthol-bison.y"
    {
						(yyval.vStatement) = new TypeOfExpression((yyvsp[(3) - (4)].vStatement));
				   }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 227 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 229 "menthol-bison.y"
    {
						ArrayElement* ad = new ArrayElement((yyvsp[(1) - (4)].vStatement),(yyvsp[(3) - (4)].vStatement),0);
						ad->SetOpt(1);
						(yyval.vStatement) = ad;
				}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 235 "menthol-bison.y"
    {
						ArrayElement* ad = new ArrayElement((yyvsp[(1) - (5)].vStatement),(yyvsp[(3) - (5)].vStatement),1);
						ad->SetOpt(1);
						(yyval.vStatement) = ad;
				}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 241 "menthol-bison.y"
    {
						ArrayElement* ad = new ArrayElement((yyvsp[(1) - (5)].vStatement),(yyvsp[(4) - (5)].vStatement),2);
						ad->SetOpt(1);
						(yyval.vStatement) = ad;
				}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 247 "menthol-bison.y"
    {
					ArrayElement* ad = new ArrayElement((yyvsp[(1) - (6)].vStatement),(yyvsp[(3) - (6)].vStatement),(yyvsp[(5) - (6)].vStatement));
					ad->SetOpt(1);
					(yyval.vStatement) = ad;

				}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 254 "menthol-bison.y"
    {
					DictElemenet* ad = new DictElemenet((yyvsp[(1) - (3)].vStatement),(yyvsp[(3) - (3)].vSTRING));
					ad->SetOpt(1);
					(yyval.vStatement) = ad;
				}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 261 "menthol-bison.y"
    {
				PackAgeExpresson* pae =new PackAgeExpresson((yyvsp[(1) - (6)].vStatement),(yyvsp[(3) - (6)].vSTRING),(yyvsp[(5) - (6)].vStatement),1);
				StatementList *ls = (StatementList*)parm;		
				ls->AddStringConstant(string((yyvsp[(3) - (6)].vSTRING)));	
				(yyval.vStatement) = pae;
				}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 268 "menthol-bison.y"
    {
				PackAgeExpresson* pae =new PackAgeExpresson((yyvsp[(1) - (5)].vStatement),(yyvsp[(3) - (5)].vSTRING),0,1);
				StatementList *ls = (StatementList*)parm;		
				ls->AddStringConstant(string((yyvsp[(3) - (5)].vSTRING)));	
				pae->SetNType(MNT_PackAgeFunCall);
				(yyval.vStatement) = pae;
				}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 276 "menthol-bison.y"
    {
					StatementList *ls = (StatementList*)parm;
					(yyval.vStatement) = new FunctionCall((yyvsp[(1) - (4)].vStatement),(yyvsp[(3) - (4)].vStatement));
					(yyval.vStatement)->AddChilder((yyvsp[(3) - (4)].vStatement));
				}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 282 "menthol-bison.y"
    {
					StatementList *ls = (StatementList*)parm;
					(yyval.vStatement) = new FunctionCall((yyvsp[(1) - (3)].vStatement),new FunctionArguments());
				}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 287 "menthol-bison.y"
    {
					PackAgeExpresson* pae =new PackAgeExpresson((yyvsp[(1) - (3)].vStatement),(yyvsp[(3) - (3)].vSTRING),0,2);
					StatementList *ls = (StatementList*)parm;		
					ls->AddStringConstant(string((yyvsp[(3) - (3)].vSTRING)));	
					(yyval.vStatement) = pae;
				}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 294 "menthol-bison.y"
    {
					PackAgeExpresson* pae =new PackAgeExpresson((yyvsp[(1) - (3)].vStatement),(yyvsp[(3) - (3)].vSTRING),0,3);
					StatementList *ls = (StatementList*)parm;		
					ls->AddStringConstant(string((yyvsp[(3) - (3)].vSTRING)));	
					(yyval.vStatement) = pae;
				}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 305 "menthol-bison.y"
    {
					 (yyval.vStatement) =new ExpressionStatement();
					 if((yyvsp[(1) - (1)].vStatement)!=0){
						(yyval.vStatement)->AddChilder((yyvsp[(1) - (1)].vStatement));
					  }
			   }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 312 "menthol-bison.y"
    {
				    if((yyvsp[(2) - (2)].vStatement)!=0){
						(yyval.vStatement)->AddChilder((yyvsp[(2) - (2)].vStatement));
					}
			   }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 320 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 322 "menthol-bison.y"
    {
						(yyval.vStatement) = new MinusExpression((yyvsp[(2) - (2)].vStatement));
				  }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 325 "menthol-bison.y"
    {
						(yyval.vStatement) = new PlusExpression((yyvsp[(2) - (2)].vStatement));
			      }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 328 "menthol-bison.y"
    {
						(yyval.vStatement) = new InverterExpression((yyvsp[(2) - (2)].vStatement));
			      }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 333 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 335 "menthol-bison.y"
    {
					(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"**",(yyvsp[(3) - (3)].vStatement));
				}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 341 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 343 "menthol-bison.y"
    {
							(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"*",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 347 "menthol-bison.y"
    {
							(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"/",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 351 "menthol-bison.y"
    {
							(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"%",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 356 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 358 "menthol-bison.y"
    {
						(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"-",(yyvsp[(3) - (3)].vStatement));
					  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 363 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 365 "menthol-bison.y"
    {
						(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"+",(yyvsp[(3) - (3)].vStatement));
					}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 371 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 373 "menthol-bison.y"
    {
						(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"<<",(yyvsp[(3) - (3)].vStatement));
					 }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 379 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 381 "menthol-bison.y"
    {
					(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),">>",(yyvsp[(3) - (3)].vStatement));
				}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 386 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 388 "menthol-bison.y"
    {
							(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"<",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 392 "menthol-bison.y"
    {
							(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),">",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 396 "menthol-bison.y"
    {
							(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"<=",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 400 "menthol-bison.y"
    {
							(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),">=",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 405 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 407 "menthol-bison.y"
    {
						(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"==",(yyvsp[(3) - (3)].vStatement));
					}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 411 "menthol-bison.y"
    {
						(yyval.vStatement) = new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"<>",(yyvsp[(3) - (3)].vStatement));
					}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 416 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 418 "menthol-bison.y"
    {
					(yyval.vStatement) =new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"&",(yyvsp[(3) - (3)].vStatement));
				}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 423 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 425 "menthol-bison.y"
    {
							(yyval.vStatement) =new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"^",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 430 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 432 "menthol-bison.y"
    {
							(yyval.vStatement) =new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"|",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 437 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 439 "menthol-bison.y"
    {
							(yyval.vStatement) =new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"&&",(yyvsp[(3) - (3)].vStatement));
						}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 444 "menthol-bison.y"
    {(yyval.vStatement) =(yyvsp[(1) - (1)].vStatement);}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 446 "menthol-bison.y"
    {
						(yyval.vStatement) =new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"||",(yyvsp[(3) - (3)].vStatement));
					 }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 451 "menthol-bison.y"
    {
						(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);
					   }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 455 "menthol-bison.y"
    {
								(yyval.vStatement) = new TernaryExpression((yyvsp[(1) - (5)].vStatement),(yyvsp[(3) - (5)].vStatement),(yyvsp[(5) - (5)].vStatement));
					   }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 462 "menthol-bison.y"
    {
							(yyval.vStatement) =new VarIdentIfier((yyvsp[(1) - (1)].vSTRING));
					  }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 465 "menthol-bison.y"
    {
 						StatementList *ls = (StatementList*)parm;
						ls->AddStringConstant(string((yyvsp[(1) - (1)].vSTRING)));
 						(yyval.vStatement) = new VarIdentIfier((char*)(yyvsp[(1) - (1)].vSTRING).c_str());}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 474 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 476 "menthol-bison.y"
    {
									if((yyvsp[(2) - (3)].vSTRING)=="+="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"+",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="-="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"-",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="/="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"/",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="*="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"*",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="%="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new ArithmeticExpressionDefinition((yyvsp[(1) - (3)].vStatement),"%",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="&="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"&",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="|="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"|",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="^="){
										(yyval.vStatement) = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),"=",new LogiceEpressionDefintion((yyvsp[(1) - (3)].vStatement),"^",(yyvsp[(3) - (3)].vStatement)));
									}
									if((yyvsp[(2) - (3)].vSTRING)=="="){
										AssignmentDefinition* ad = new AssignmentDefinition((yyvsp[(1) - (3)].vStatement),(yyvsp[(2) - (3)].vSTRING),(yyvsp[(3) - (3)].vStatement),true);
										(yyval.vStatement) = ad;
									}								
								}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 509 "menthol-bison.y"
    {
							(yyval.vStatement) =new ExpressionList();
							(yyval.vStatement)->AddChilder((yyvsp[(1) - (1)].vStatement));
					   }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 514 "menthol-bison.y"
    {
							   (yyvsp[(1) - (3)].vStatement)->AddChilder((yyvsp[(3) - (3)].vStatement));
					   }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 522 "menthol-bison.y"
    {
					(yyval.vStatement) = new ArrayDeclare((yyvsp[(2) - (3)].vStatement));
			   }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 526 "menthol-bison.y"
    {
					(yyval.vStatement) = new ArrayDeclare(new ExpressionList());
			   }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 532 "menthol-bison.y"
    {
					(yyval.vStatement) = new DictExpression((yyvsp[(1) - (3)].vSTRING),(yyvsp[(3) - (3)].vStatement));
				}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 538 "menthol-bison.y"
    {
					(yyval.vStatement) = new DictStatement();
					(yyval.vStatement)->AddChilder((yyvsp[(1) - (1)].vStatement));
			   }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 543 "menthol-bison.y"
    {
					(yyvsp[(1) - (3)].vStatement)->AddChilder((yyvsp[(3) - (3)].vStatement));
			   }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 551 "menthol-bison.y"
    { (yyval.vStatement) = (yyvsp[(2) - (3)].vStatement);}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 552 "menthol-bison.y"
    {
					(yyval.vStatement) = new DictStatement();
			}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 558 "menthol-bison.y"
    {
					     InitializationDefinition* ad = new InitializationDefinition((yyvsp[(1) - (1)].vStatement),0);
						 ad->ModfiyScope(LOCAL);
						 (yyval.vStatement) = ad;
				}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 563 "menthol-bison.y"
    {
						InitializationDefinition* ad = new InitializationDefinition((yyvsp[(1) - (3)].vStatement),(yyvsp[(3) - (3)].vStatement));
						ad->ModfiyScope(LOCAL);
						(yyval.vStatement) = ad;
				}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 569 "menthol-bison.y"
    {
						(yyval.vStatement) = new InitializationList();
						(yyval.vStatement)->AddChilder((yyvsp[(1) - (1)].vStatement));
					}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 573 "menthol-bison.y"
    {
						(yyvsp[(1) - (3)].vStatement)->AddChilder((yyvsp[(3) - (3)].vStatement));
					}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 578 "menthol-bison.y"
    {						  
						  (yyval.vStatement) = (yyvsp[(2) - (2)].vStatement);						  
						  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 583 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 584 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 585 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 586 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 587 "menthol-bison.y"
    {
			(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);
		 }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 590 "menthol-bison.y"
    {
			(yyval.vStatement) = (yyvsp[(1) - (2)].vStatement);
		 }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 596 "menthol-bison.y"
    {
						(yyval.vStatement) = 0;
					}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 599 "menthol-bison.y"
    {
						(yyval.vStatement) = (yyvsp[(1) - (2)].vStatement);
					}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 605 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 606 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 609 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 610 "menthol-bison.y"
    {(yyval.vStatement) = (yyvsp[(1) - (1)].vStatement);}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 615 "menthol-bison.y"
    {   					 
						BuiltinTypeDeclare* btd =new BuiltinTypeDeclare();
						btd->SetNumber((yyvsp[(1) - (1)].vINTEGER));
						(yyval.vStatement)= btd;
					 }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 622 "menthol-bison.y"
    {
						
						BuiltinTypeDeclare* btd =new BuiltinTypeDeclare();
						btd->SetString((yyvsp[(1) - (1)].vSTRING));	
						(yyval.vStatement)= btd;
					 }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 628 "menthol-bison.y"
    {
						 StatementList *ls = (StatementList*)parm;
						BuiltinTypeDeclare* btd =new BuiltinTypeDeclare();
						ls->AddDoubleConstant((yyvsp[(1) - (1)].vDOUBLE));
						btd->SetDouble((yyvsp[(1) - (1)].vDOUBLE));
						(yyval.vStatement)= btd;
					 }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 635 "menthol-bison.y"
    {
						BuiltinTypeDeclare* btd =new BuiltinTypeDeclare();
						btd->SetBool(true);
						(yyval.vStatement)= btd;
					 }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 641 "menthol-bison.y"
    {
						BuiltinTypeDeclare* btd =new BuiltinTypeDeclare();
						btd->SetBool(false);
						(yyval.vStatement)= btd;
					 }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 646 "menthol-bison.y"
    {
						BuiltinTypeDeclare* btd =new BuiltinTypeDeclare();
						btd->SetNull();
						(yyval.vStatement)= btd;				 
					 }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 651 "menthol-bison.y"
    {
						StatementList *ls = (StatementList*)parm;
						ls->AddStringConstant(string((yyvsp[(1) - (1)].vSTRING)));
						BuiltinTypeDeclare* btd =new BuiltinTypeDeclare();
						btd->SetFunctionPointerOrPack((yyvsp[(1) - (1)].vSTRING),1);
						(yyval.vStatement)= btd;
					 }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 672 "menthol-bison.y"
    {
				 (yyval.vStatement) = new IfStatement(0);
				 (yyval.vStatement)->AddChilder((yyvsp[(3) - (5)].vStatement));
				 (yyval.vStatement)->AddChilder((yyvsp[(5) - (5)].vStatement));			 
			  }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 678 "menthol-bison.y"
    {
					 (yyval.vStatement) = new IfStatement(1);
					 (yyval.vStatement)->AddChilder((yyvsp[(3) - (7)].vStatement));
					 (yyval.vStatement)->AddChilder((yyvsp[(5) - (7)].vStatement));
					 (yyval.vStatement)->AddChilder((yyvsp[(7) - (7)].vStatement));	 
			  }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 689 "menthol-bison.y"
    {
					(yyval.vStatement) = new WhileStatement();
					(yyval.vStatement)->AddChilder((yyvsp[(3) - (5)].vStatement));
					(yyval.vStatement)->AddChilder((yyvsp[(5) - (5)].vStatement));
				}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 697 "menthol-bison.y"
    {
				  	(yyval.vStatement) = new ForStatement((yyvsp[(3) - (7)].vStatement),(yyvsp[(5) - (7)].vStatement),(yyvsp[(7) - (7)].vStatement));
			  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 702 "menthol-bison.y"
    {
					(yyval.vStatement) = new ContinueExpression();
			  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 705 "menthol-bison.y"
    {
					(yyval.vStatement) = new BreakExpression();
			  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 708 "menthol-bison.y"
    {
					(yyval.vStatement) =new ReturnExpression();
			  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 711 "menthol-bison.y"
    {(yyval.vStatement) =new ReturnExpression((yyvsp[(2) - (3)].vStatement));}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 712 "menthol-bison.y"
    {(yyval.vStatement) =new ThrowExpression((yyvsp[(2) - (3)].vStatement));}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 716 "menthol-bison.y"
    {
			   		(yyval.vStatement) = new TryParameterStatement();
			   		(yyval.vStatement)->AddChilder(new TryParameter((yyvsp[(1) - (1)].vSTRING)));
			   }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 721 "menthol-bison.y"
    {
					(yyvsp[(1) - (3)].vStatement)->AddChilder(new TryParameter((yyvsp[(3) - (3)].vSTRING)));
			   }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 727 "menthol-bison.y"
    {
				 	(yyval.vStatement) =new TryStatement((yyvsp[(2) - (6)].vStatement),(yyvsp[(5) - (6)].vStatement),(yyvsp[(6) - (6)].vStatement));
			  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 733 "menthol-bison.y"
    {
						StatementList *ls = (StatementList*)parm;			
				
						ls->SetCompileStructTable(new ImportFileExpression((yyvsp[(2) - (3)].vSTRING)));			
				 }
    break;


/* Line 1792 of yacc.c  */
#line 2752 "menthol-bison.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 740 "menthol-bison.y"

 