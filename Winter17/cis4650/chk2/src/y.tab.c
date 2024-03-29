
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 6 "src/cminus.y"

#define YYPARSER

#include "cminus.h"


static astTreeNode * returnTree; //tree to be built and returned by the parser
bool parseSuccess = true; //will block the return of the ast if there were syntax errors
char * activeFunction = NULL; //reference to the function whose scope we're in
int currScope = 0; //current scope (symbol table)
extern int yychar;
extern unordered_map<string, astTreeNode*> symbolTable;
extern int yyparse(void);

static int yylex(void) {
    return getToken();
}

astTreeNode * parse() {
    yyparse();
    return returnTree;
}

void yyerror(string message) {
    parseSuccess = false;
    fprintf(outputFile, "ERROR: at line %d: %s ", lineno, message.c_str() );
    fprintf(outputFile, "on token: ");
    printToken(yychar, tokenString);
    return;
}



/* Line 189 of yacc.c  */
#line 107 "src/y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENDFILE = 258,
     ERROR = 259,
     ELSE = 260,
     IF = 261,
     INT = 262,
     RETURN = 263,
     VOID = 264,
     WHILE = 265,
     ID = 266,
     NUM = 267,
     PLUS = 268,
     MINUS = 269,
     MULTI = 270,
     DIVIDE = 271,
     LT = 272,
     GT = 273,
     LE = 274,
     GE = 275,
     EQ = 276,
     NE = 277,
     ASSIGN = 278,
     SEMICLN = 279,
     COMMA = 280,
     LPAREN = 281,
     RPAREN = 282,
     LBRACKET = 283,
     RBRACKET = 284,
     LBRACE = 285,
     RBRACE = 286,
     OPENCOMMENT = 287,
     CLOSECOMMENT = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 39 "src/cminus.y"

    astTreeNode * node;
    char * str;
    int op;
    int varType;



/* Line 214 of yacc.c  */
#line 185 "src/y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "src/y.tab.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  108

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      29,    31,    33,    35,    42,    44,    46,    50,    52,    55,
      60,    62,    67,    70,    71,    74,    75,    77,    79,    81,
      83,    85,    88,    90,    96,   104,   106,   112,   115,   119,
     123,   125,   127,   129,   134,   138,   140,   142,   144,   146,
     148,   150,   152,   156,   158,   160,   162,   166,   168,   170,
     172,   176,   178,   180,   182,   187,   189,   190,   194
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    36,    -1,    36,    37,    -1,    37,    -1,
      38,    -1,    40,    -1,    39,    11,    24,    -1,    39,    11,
      28,    12,    29,    24,    -1,    39,     1,    24,    -1,     7,
      -1,     9,    -1,     1,    -1,    39,    11,    26,    41,    27,
      44,    -1,    42,    -1,     9,    -1,    42,    25,    43,    -1,
      43,    -1,    39,    11,    -1,    39,    11,    28,    29,    -1,
       1,    -1,    30,    45,    46,    31,    -1,    45,    38,    -1,
      -1,    46,    47,    -1,    -1,    48,    -1,    44,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    24,    -1,    24,    -1,
       6,    26,    52,    27,    47,    -1,     6,    26,    52,    27,
      47,     5,    47,    -1,     1,    -1,    10,    26,    52,    27,
      47,    -1,     8,    24,    -1,     8,    52,    24,    -1,    53,
      23,    52,    -1,    54,    -1,     1,    -1,    11,    -1,    11,
      28,    52,    29,    -1,    56,    55,    56,    -1,    56,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    56,    57,    58,    -1,    58,    -1,    13,    -1,
      14,    -1,    58,    59,    60,    -1,    60,    -1,    15,    -1,
      16,    -1,    26,    52,    27,    -1,    53,    -1,    61,    -1,
      12,    -1,    11,    26,    62,    27,    -1,    63,    -1,    -1,
      63,    25,    52,    -1,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    81,    96,    99,   100,   103,   128,   150,
     157,   158,   159,   162,   188,   189,   192,   205,   208,   213,
     218,   221,   229,   242,   245,   258,   261,   262,   263,   264,
     265,   268,   269,   272,   278,   285,   288,   296,   304,   314,
     321,   322,   325,   330,   338,   345,   348,   349,   350,   351,
     352,   353,   356,   363,   366,   367,   370,   377,   380,   381,
     384,   385,   386,   387,   395,   403,   404,   407,   413
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDFILE", "ERROR", "ELSE", "IF", "INT",
  "RETURN", "VOID", "WHILE", "ID", "NUM", "PLUS", "MINUS", "MULTI",
  "DIVIDE", "LT", "GT", "LE", "GE", "EQ", "NE", "ASSIGN", "SEMICLN",
  "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE",
  "OPENCOMMENT", "CLOSECOMMENT", "$accept", "program", "declaration_list",
  "declaration", "var_declaration", "type_specifier", "func_declaration",
  "params", "param_list", "param", "compound_stmt", "local_declarations",
  "statement_list", "statement", "expression_stmt", "selection_stmt",
  "iteration_stmt", "return_stmt", "expression", "var",
  "simple_expression", "relop", "additive_expression", "addop", "term",
  "mulop", "factor", "call", "args", "args_list", 0
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
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    38,    38,
      39,    39,    39,    40,    41,    41,    42,    42,    43,    43,
      43,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      47,    48,    48,    49,    49,    49,    50,    51,    51,    52,
      52,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    60,    60,    61,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     3,
       1,     1,     1,     6,     1,     1,     3,     1,     2,     4,
       1,     4,     2,     0,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     5,     7,     1,     5,     2,     3,     3,
       1,     1,     1,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    10,    11,     0,     0,     4,     5,     0,     6,
       1,     3,     0,     0,     9,     7,     0,     0,    20,    11,
       0,     0,    14,    17,     0,    18,     0,     0,     0,     0,
      23,    13,    16,     8,    19,     0,    22,     0,     0,     0,
      35,     0,     0,     0,    42,    63,    32,     0,    21,    27,
      24,    26,    28,    29,    30,     0,    61,    40,    45,    53,
      57,    62,     0,    41,    37,     0,     0,     0,     0,     0,
      31,     0,    54,    55,    46,    47,    48,    49,    50,    51,
       0,     0,    58,    59,     0,     0,    38,     0,    68,     0,
      65,     0,    60,    39,    61,    44,    52,    56,     0,     0,
      64,     0,    43,    33,    36,    67,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    21,    22,    23,
      49,    35,    38,    50,    51,    52,    53,    54,    55,    56,
      57,    80,    58,    81,    59,    84,    60,    61,    89,    90
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int8 yypact[] =
{
      38,   -97,   -97,   -97,     9,    97,   -97,   -97,     0,   -97,
     -97,   -97,     4,    84,   -97,   -97,    72,    48,    42,    53,
      58,    62,    52,   -97,    71,    57,    73,    98,    77,    80,
     -97,   -97,   -97,   -97,   -97,     6,   -97,    20,    32,    50,
     -97,    76,    60,    85,   -22,   -97,   -97,    64,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,    91,    93,   -97,    74,     7,
     -97,   -97,    64,   -97,   -97,    94,    64,    56,    64,    92,
     -97,    64,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
      23,    23,   -97,   -97,    23,    95,   -97,    96,   -97,    99,
     100,   101,   -97,   -97,   -97,    41,     7,   -97,    40,    40,
     -97,    64,   -97,   115,   -97,   -97,    40,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,   116,    89,    -8,   -97,   -97,   -97,   102,
     105,   -97,   -97,   -96,   -97,   -97,   -97,   -97,   -42,    33,
     -97,   -97,    47,   -97,    51,   -97,    44,   -97,   -97,   -97
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -67
static const yytype_int8 yytable[] =
{
      65,    12,   103,   104,    67,    69,    68,     1,    20,    10,
     107,    13,   -25,     2,   -25,     3,   -25,   -25,   -25,    20,
      85,    12,    82,    83,    87,    88,    91,    37,    14,    93,
     -25,    39,   -25,    40,    44,    45,   -25,   -25,    41,     1,
      42,    40,    43,    44,    45,     2,    41,     3,    42,    47,
      43,    44,    45,   -12,    72,    73,    46,    63,    47,   105,
      24,    63,    30,    48,    46,    63,    47,    44,    45,    25,
      30,    44,    45,    18,    15,    44,    45,    27,    17,     2,
     -15,    19,    47,   -66,    64,    29,    47,    72,    73,    26,
      47,    74,    75,    76,    77,    78,    79,    -2,     1,    18,
      28,    33,    62,    30,     2,     2,     3,     3,    15,    34,
      16,    66,    17,    94,    94,    70,    71,    94,    86,    92,
     106,    11,    98,    99,    36,   101,   100,    95,    97,    32,
     102,    31,    96
};

static const yytype_uint8 yycheck[] =
{
      42,     1,    98,    99,    26,    47,    28,     1,    16,     0,
     106,    11,     6,     7,     8,     9,    10,    11,    12,    27,
      62,     1,    15,    16,    66,    67,    68,    35,    24,    71,
      24,    11,    26,     1,    11,    12,    30,    31,     6,     1,
       8,     1,    10,    11,    12,     7,     6,     9,     8,    26,
      10,    11,    12,    11,    13,    14,    24,     1,    26,   101,
      12,     1,    30,    31,    24,     1,    26,    11,    12,    11,
      30,    11,    12,     1,    24,    11,    12,    25,    28,     7,
      27,     9,    26,    27,    24,    28,    26,    13,    14,    27,
      26,    17,    18,    19,    20,    21,    22,     0,     1,     1,
      29,    24,    26,    30,     7,     7,     9,     9,    24,    29,
      26,    26,    28,    80,    81,    24,    23,    84,    24,    27,
       5,     5,    27,    27,    35,    25,    27,    80,    84,    27,
      29,    26,    81
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,     9,    35,    36,    37,    38,    39,    40,
       0,    37,     1,    11,    24,    24,    26,    28,     1,     9,
      39,    41,    42,    43,    12,    11,    27,    25,    29,    28,
      30,    44,    43,    24,    29,    45,    38,    39,    46,    11,
       1,     6,     8,    10,    11,    12,    24,    26,    31,    44,
      47,    48,    49,    50,    51,    52,    53,    54,    56,    58,
      60,    61,    26,     1,    24,    52,    26,    26,    28,    52,
      24,    23,    13,    14,    17,    18,    19,    20,    21,    22,
      55,    57,    15,    16,    59,    52,    24,    52,    52,    62,
      63,    52,    27,    52,    53,    56,    58,    60,    27,    27,
      27,    25,    29,    47,    47,    52,     5,    47
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
        case 2:

/* Line 1455 of yacc.c  */
#line 73 "src/cminus.y"
    {
                            if (parseSuccess)
                                returnTree = (yyvsp[(1) - (1)].node);
                            else
                                returnTree = NULL;
                        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 82 "src/cminus.y"
    { //placing siblings in their linked list
                          //from tiny_c
                          //this is used several times below as well
                            astTreeNode * t = (yyvsp[(1) - (2)].node);
                            if ( t != NULL ) {
                                while( t->sibling != NULL ) {
                                    t = t->sibling;
                                }
                                t->sibling = (yyvsp[(2) - (2)].node);
                                (yyval.node) = (yyvsp[(1) - (2)].node);
                            } else {
                                (yyval.node) = (yyvsp[(2) - (2)].node);
                            }
                        ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 96 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 99 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 100 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 104 "src/cminus.y"
    {
                            /*astTreeNode * newNode = newDec(VAR_K);
                            strcpy(newNode->val, $2);
                            newNode->array = false;
                            $$ = newNode;*/
                            (yyval.node) = newDec(VAR_K);
                            strcpy((yyval.node)->val, (yyvsp[(2) - (3)].str));
                            (yyval.node)->func = false;
                            (yyval.node)->array = false;
                            switch((yyvsp[(1) - (3)].varType)) {
                                case INT:
                                    (yyval.node)->type = INT_T;
                                    symbolTable.insert({ (yyval.node)->val, (yyval.node) });
                                    break;
                                case VOID:
                                    (yyval.node)->type = VOID_T;
                                    symbolTable.insert({ (yyval.node)->val, (yyval.node) });
                                    break;
                                default:
                                    fprintf(outputFile, "ERROR: at line %d: Variable declaration of an invalid type\n", lineno);
                                    (yyval.node) = NULL;
                                    break;
                            }
                        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 129 "src/cminus.y"
    {
                            (yyval.node) = newDec(VAR_K);
                            strcpy((yyval.node)->val, (yyvsp[(2) - (6)].str));
                            (yyval.node)->func = false;
                            (yyval.node)->array = true;
                            (yyval.node)->size = atoi((yyvsp[(4) - (6)].str));
                            switch((yyvsp[(1) - (6)].varType)) {
                                case INT:
                                    (yyval.node)->type = INT_T;
                                    symbolTable.insert({ (yyval.node)->val, (yyval.node) });
                                    break;
                                case VOID:
                                    (yyval.node)->type = VOID_T;
                                    symbolTable.insert({ (yyval.node)->val, (yyval.node) });
                                    break;
                                default:
                                    fprintf(outputFile, "ERROR: at line %d: Variable declaration of an invalid type\n", lineno);
                                    (yyval.node) = NULL;
                                    break;
                            }
                        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 151 "src/cminus.y"
    {
                            fprintf(outputFile, "ERROR: at line %d: Unexpected tokens during variable declaration\n", lineno);
                            (yyval.node) = NULL;
                        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 157 "src/cminus.y"
    { (yyval.varType) = INT; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 158 "src/cminus.y"
    { (yyval.varType) = VOID; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 159 "src/cminus.y"
    { (yyval.varType) = 999; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 163 "src/cminus.y"
    {
                            (yyval.node) = newDec(FUN_K);
                            strcpy( (yyval.node)->val, (yyvsp[(2) - (6)].str) );
                            (yyval.node)->child[0] = (yyvsp[(4) - (6)].node);
                            (yyval.node)->child[1] = (yyvsp[(6) - (6)].node);
                            (yyval.node)->func = true;
                            switch((yyvsp[(1) - (6)].varType)) {
                                case INT:
                                    (yyval.node)->type = INT_T;
                                    symbolTable.insert({ (yyval.node)->val, (yyval.node) });
                                    break;
                                case VOID:
                                    (yyval.node)->type = VOID_T;
                                    symbolTable.insert({ (yyval.node)->val, (yyval.node) });
                                    break;
                                default:
                                    fprintf(outputFile, "ERROR: at line %d: Function has invalid return type\n", lineno);
                                    (yyval.node) = NULL;
                                    break;
                            }
                            strcpy(activeFunction, (yyval.node)->val);
                            activeFunction = NULL;
                        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 188 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 189 "src/cminus.y"
    { (yyval.node) = NULL; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 193 "src/cminus.y"
    {
                            astTreeNode * t = (yyvsp[(1) - (3)].node);
                            if ( t != NULL ) {
                                while( t->sibling != NULL ) {
                                    t = t->sibling;
                                }
                                t->sibling = (yyvsp[(3) - (3)].node);
                                (yyval.node) = (yyvsp[(1) - (3)].node);
                            } else {
                                (yyval.node) = (yyvsp[(3) - (3)].node);
                            }
                        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 205 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 209 "src/cminus.y"
    {
                            (yyval.node) = newDec(PARAM_K);
                            strcpy((yyval.node)->val, (yyvsp[(2) - (2)].str));
                        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 214 "src/cminus.y"
    {
                            (yyval.node) = newDec(PARAM_K);
                            strcpy((yyval.node)->val, (yyvsp[(2) - (4)].str));
                        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 218 "src/cminus.y"
    { (yyval.node) = NULL; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 222 "src/cminus.y"
    {
                            (yyval.node) = newStmt(CMPD_K);
                            (yyval.node)->child[0] = (yyvsp[(2) - (4)].node);
                            (yyval.node)->child[1] = (yyvsp[(3) - (4)].node);
                        ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 230 "src/cminus.y"
    {
                            astTreeNode * t = (yyvsp[(1) - (2)].node);
                            if ( t != NULL ) {
                                while( t->sibling != NULL ) {
                                    t = t->sibling;
                                }
                                t->sibling = (yyvsp[(2) - (2)].node);
                                (yyval.node) = (yyvsp[(1) - (2)].node);
                            } else {
                                (yyval.node) = (yyvsp[(2) - (2)].node);
                            }
                        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 242 "src/cminus.y"
    { (yyval.node) = NULL; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 246 "src/cminus.y"
    {
                            astTreeNode * t = (yyvsp[(1) - (2)].node);
                            if ( t != NULL ) {
                                while( t->sibling != NULL ) {
                                    t = t->sibling;
                                }
                                t->sibling = (yyvsp[(2) - (2)].node);
                                (yyval.node) = (yyvsp[(1) - (2)].node);
                            } else {
                                (yyval.node) = (yyvsp[(2) - (2)].node);
                            }
                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 258 "src/cminus.y"
    { (yyval.node) = NULL; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 261 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 262 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 263 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 264 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 265 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 268 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 269 "src/cminus.y"
    { (yyval.node) = NULL;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 273 "src/cminus.y"
    {
                            (yyval.node) = newStmt(IF_K);
                            (yyval.node)->child[0] = (yyvsp[(3) - (5)].node);
                            (yyval.node)->child[1] = (yyvsp[(5) - (5)].node);
                        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 279 "src/cminus.y"
    {
                            (yyval.node) = newStmt(IF_K);
                            (yyval.node)->child[0] = (yyvsp[(3) - (7)].node);
                            (yyval.node)->child[1] = (yyvsp[(5) - (7)].node);
                            (yyval.node)->child[2] = (yyvsp[(7) - (7)].node);
                        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 285 "src/cminus.y"
    { (yyval.node) = NULL; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 289 "src/cminus.y"
    {
                            (yyval.node) =  newStmt(WHILE_K);
                            (yyval.node)->child[0] = (yyvsp[(3) - (5)].node);
                            (yyval.node)->child[1] = (yyvsp[(5) - (5)].node);
                        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 297 "src/cminus.y"
    {
                            (yyval.node) = newStmt(RETURN_K);
                            if (activeFunction == NULL)
                                activeFunction = (char*)malloc(sizeof(char)*50);
                            (yyval.node)->function = activeFunction;

                        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 305 "src/cminus.y"
    {
                            (yyval.node) = newStmt(RETURN_K);
                            if (activeFunction == NULL)
                                activeFunction = (char*)malloc(sizeof(char)*50);
                            (yyval.node)->child[0] = (yyvsp[(2) - (3)].node);
                            (yyval.node)->function = activeFunction;
                        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 315 "src/cminus.y"
    {
                            (yyval.node) = newExp(OP_K);
                            (yyval.node)->op = ASSIGN;
                            (yyval.node)->child[0] = (yyvsp[(1) - (3)].node);
                            (yyval.node)->child[1] = (yyvsp[(3) - (3)].node);
                        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 321 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 322 "src/cminus.y"
    { (yyval.node) = NULL; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 326 "src/cminus.y"
    {
                            (yyval.node) = newExp(ID_K);
                            strcpy((yyval.node)->val, (yyvsp[(1) - (1)].str));
                        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 331 "src/cminus.y"
    {
                            (yyval.node) = newExp(ID_K);
                            strcpy((yyval.node)->val, (yyvsp[(1) - (4)].str));
                            (yyval.node)->child[0] = (yyvsp[(3) - (4)].node);
                        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 339 "src/cminus.y"
    {
                            (yyval.node) = newExp(OP_K);
                            (yyval.node)->op = (yyvsp[(2) - (3)].op);
                            (yyval.node)->child[0] = (yyvsp[(1) - (3)].node);
                            (yyval.node)->child[1] = (yyvsp[(3) - (3)].node);
                        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 345 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 348 "src/cminus.y"
    { (yyval.op) = LT; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 349 "src/cminus.y"
    { (yyval.op) = GT; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 350 "src/cminus.y"
    { (yyval.op) = LE; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 351 "src/cminus.y"
    { (yyval.op) = GE; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 352 "src/cminus.y"
    { (yyval.op) = EQ; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 353 "src/cminus.y"
    { (yyval.op) = NE; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 357 "src/cminus.y"
    {
                            (yyval.node) = newExp(OP_K);
                            (yyval.node)->op = (yyvsp[(2) - (3)].op);
                            (yyval.node)->child[0] = (yyvsp[(1) - (3)].node);
                            (yyval.node)->child[1] = (yyvsp[(3) - (3)].node);
                        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 363 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 366 "src/cminus.y"
    { (yyval.op) = PLUS; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 367 "src/cminus.y"
    { (yyval.op) = MINUS; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 371 "src/cminus.y"
    {
                            (yyval.node) = newExp(OP_K);
                            (yyval.node)->op = (yyvsp[(2) - (3)].op);
                            (yyval.node)->child[0] = (yyvsp[(1) - (3)].node);
                            (yyval.node)->child[1] = (yyvsp[(3) - (3)].node);
                        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 377 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 380 "src/cminus.y"
    { (yyval.op) = MULTI; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 381 "src/cminus.y"
    { (yyval.op) = DIVIDE; ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 384 "src/cminus.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 385 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 386 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 388 "src/cminus.y"
    {
                            (yyval.node) = newExp(CONST_K);
                            (yyval.node)->type = INT_T;
                            strcpy((yyval.node)->val, (yyvsp[(1) - (1)].str));
                        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 396 "src/cminus.y"
    {
                            (yyval.node) = newExp(CALL_K);
                            strcpy((yyval.node)->val, (yyvsp[(1) - (4)].str));
                            (yyval.node)->child[0] = (yyvsp[(3) - (4)].node);
                        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 403 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 404 "src/cminus.y"
    { (yyval.node) = NULL; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 408 "src/cminus.y"
    {
                            (yyval.node) = newExp(ARGS_K);
                            (yyval.node)->child[0] = (yyvsp[(1) - (3)].node);
                            (yyval.node)->child[1] = (yyvsp[(3) - (3)].node);
                        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 413 "src/cminus.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2154 "src/y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



