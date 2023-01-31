
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
#line 1 "Main.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int  yyerror(char *s);
    int yylex();
       
    char sym_variable[1001][1001];

    int store[1001];

    void make()
    {
	for (int i = 0; i < 1001; i++) strcpy(sym_variable[i], "-1");

    }
    
    int hash(char *str)
	{
		int value = 0;
		for(int i = 0 ; i < strlen(str) ; i++)
		{
			value = 10*value + (str[i] - 'A');
			value = value % 1001;
			while(value < 0)
				value = value + 1001;
		}
		return value;
	}

	int Declared(char *now){
	  for(int i=1;i<1001;i++){
		if(strcmp(sym_variable[i],now)==0){
			return i; 
		}
	}
	return 0;
	}

    int addNewVal(char *now){
	if(Declared(now)!=0)return 0;
	int index=hash(now);
	strcpy(sym_variable[index],now);
	store[index]=0;
	
    }
    int getVal(char *now){
	return store[Declared(now)];
    }
    int setVal(char *now,int val){
	int idx= Declared(now);
	store[idx] = val;
    }

    
	


/* Line 189 of yacc.c  */
#line 133 "Main.tab.c"

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
     NUMBER = 258,
     VAR = 259,
     VOIDMAIN = 260,
     S = 261,
     E = 262,
     DO = 263,
     END = 264,
     IF = 265,
     ELSE = 266,
     ELSEIF = 267,
     MUL = 268,
     DIV = 269,
     MOD = 270,
     ARRAY = 271,
     INT = 272,
     FLOAT = 273,
     CHAR = 274,
     PLUS = 275,
     MINUS = 276,
     LOG = 277,
     LOG10 = 278,
     TAN = 279,
     FORLOOP = 280,
     WHILE = 281,
     ODDEVEN = 282,
     GCD = 283,
     SHOW = 284,
     FACTORIAL = 285,
     SWITCH = 286,
     CASE = 287,
     DEFAULT = 288,
     SIN = 289,
     COS = 290,
     IFX = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 61 "Main.y"

	char idval[1001];
	int val;



/* Line 214 of yacc.c  */
#line 212 "Main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "Main.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNRULES -- Number of states.  */
#define YYNSTATES  159

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    41,
      37,    43,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,    39,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    14,    17,    20,    22,    24,
      26,    30,    32,    36,    38,    40,    43,    48,    54,    62,
      74,    93,   101,   113,   119,   127,   137,   145,   147,   150,
     151,   154,   160,   165,   167,   169,   173,   177,   181,   185,
     189,   193,   197,   201,   205,   210,   215,   220,   225,   230
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,     5,    40,     6,    50,     7,    -1,    -1,
      50,    51,    41,    -1,    50,    55,    -1,    52,    53,    -1,
      17,    -1,    18,    -1,    19,    -1,    54,    42,    53,    -1,
      54,    -1,     4,    43,     3,    -1,     4,    -1,    41,    -1,
      60,    41,    -1,     4,    43,    60,    41,    -1,    29,    44,
      60,    45,    41,    -1,    10,    44,    60,    45,     8,    55,
       9,    -1,    10,    44,    60,    45,     8,    55,     9,    11,
       8,    55,     9,    -1,    10,    44,    60,    45,     8,    55,
       9,    12,    44,    60,    45,     8,    55,     9,    11,     8,
      55,     9,    -1,    31,    44,     3,    45,     8,    56,     9,
      -1,    25,    44,     3,    40,     3,    41,     3,    45,     8,
      55,     9,    -1,    27,    44,     3,    45,    41,    -1,    16,
      52,     4,    46,     3,    47,    41,    -1,    26,    46,     3,
      42,     3,    47,     8,    55,     9,    -1,    28,    44,     3,
      42,     3,    45,    41,    -1,    57,    -1,    57,    59,    -1,
      -1,    57,    58,    -1,    32,     3,    40,    60,    41,    -1,
      33,    40,    60,    41,    -1,     3,    -1,     4,    -1,    60,
      20,    60,    -1,    60,    21,    60,    -1,    60,    13,    60,
      -1,    60,    14,    60,    -1,    60,    15,    60,    -1,    60,
      39,    60,    -1,    60,    37,    60,    -1,    60,    38,    60,
      -1,    44,    60,    45,    -1,    34,    44,    60,    45,    -1,
      35,    44,    60,    45,    -1,    24,    44,    60,    45,    -1,
      23,    44,    60,    45,    -1,    22,    44,    60,    45,    -1,
      30,    44,     3,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    89,    90,    91,    94,    98,    99,   100,
     103,   104,   107,   117,   126,   128,   132,   139,   143,   153,
     162,   175,   182,   191,   216,   223,   230,   248,   249,   252,
     253,   256,   258,   264,   266,   268,   270,   272,   274,   284,
     294,   295,   297,   299,   301,   303,   305,   307,   309,   311
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VAR", "VOIDMAIN", "S", "E",
  "DO", "END", "IF", "ELSE", "ELSEIF", "MUL", "DIV", "MOD", "ARRAY", "INT",
  "FLOAT", "CHAR", "PLUS", "MINUS", "LOG", "LOG10", "TAN", "FORLOOP",
  "WHILE", "ODDEVEN", "GCD", "SHOW", "FACTORIAL", "SWITCH", "CASE",
  "DEFAULT", "SIN", "COS", "IFX", "'<'", "'>'", "'^'", "':'", "';'", "','",
  "'='", "'('", "')'", "'['", "']'", "$accept", "program", "function",
  "declaration", "TYPE", "variable_list", "inilize", "statement",
  "SWITCHCASE", "casegrammer", "casenumber", "defaultgrammer",
  "expression", 0
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
     285,   286,   287,   288,   289,   290,   291,    60,    62,    94,
      58,    59,    44,    61,    40,    41,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    51,    52,    52,    52,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     2,     4,     5,     7,    11,
      18,     7,    11,     5,     7,     9,     7,     1,     2,     0,
       2,     5,     4,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    33,    34,     2,
       0,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       4,    13,     6,    11,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,    37,    38,    39,    35,    36,    41,    42,    40,    16,
       0,     0,    48,    47,    46,     0,     0,     0,     0,     0,
      49,     0,    44,    45,    12,    10,     0,     0,     0,     0,
      23,     0,    17,    29,     0,     0,     0,     0,     0,     0,
      27,    18,    24,     0,     0,    26,    21,     0,     0,    30,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,     0,    32,    19,     0,
      22,    31,     0,     0,     0,     0,     0,     0,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    29,    30,    52,    53,    31,   119,   120,
     129,   130,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
      -1,   -33,    16,    11,  -104,  -104,    38,  -104,   -23,  -104,
     -19,     5,  -104,  -104,  -104,    -9,    -6,    -5,    -4,    -3,
       0,     3,     6,     7,     8,    14,    15,  -104,   100,    29,
      42,  -104,   233,   100,   100,    67,   100,   100,   100,    73,
      74,    75,    77,   100,    83,    85,   100,   100,  -104,   112,
    -104,    46,  -104,    50,   100,   100,   100,   100,   100,   100,
     100,   100,  -104,   247,   125,    61,   139,   152,   166,    76,
      69,    72,    78,   179,    84,    86,   193,   206,  -104,   111,
      42,    79,    79,   291,    -2,    -2,    70,    70,  -104,  -104,
     113,   116,  -104,  -104,  -104,   133,   134,    87,   138,   101,
    -104,   135,  -104,  -104,  -104,  -104,    71,   108,   106,   109,
    -104,   103,  -104,  -104,   149,   120,   165,   161,   130,   173,
     -31,     2,  -104,   129,    71,  -104,  -104,   172,   143,  -104,
    -104,   177,   144,   187,   189,   156,   100,    71,   100,    71,
    -104,   100,   262,   192,   220,   200,   276,  -104,  -104,   194,
    -104,  -104,    71,   201,   204,   214,    71,   203,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,  -104,   212,   145,  -104,  -103,  -104,  -104,
    -104,  -104,   -28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,   127,   128,   114,     1,    63,    64,     3,    66,    67,
      68,    54,    55,   131,   132,    73,     4,     5,    76,    77,
      33,   134,    12,    13,    14,    34,    81,    82,    83,    84,
      85,    86,    87,    88,   143,    36,   145,    61,    37,    38,
      39,     7,     8,    40,    41,     9,    51,    42,    10,   153,
      43,    44,    45,   157,    11,    12,    13,    14,    46,    47,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      50,    65,    25,    26,     7,     8,    69,    70,    71,    27,
      72,    10,    28,    54,    55,    56,    74,    11,    75,    79,
      57,    58,    80,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     7,    48,    25,    26,    91,   142,    61,
     144,    96,    27,   146,   104,    28,    95,    97,    61,   107,
      98,   106,    15,    16,    17,    54,    55,    56,   110,   100,
      23,   101,    57,    58,    25,    26,   108,   109,    54,    55,
      56,   111,   112,   113,    28,    57,    58,   116,   118,    59,
      60,    61,    54,    55,    56,   115,   117,    78,   121,    57,
      58,   122,    59,    60,    61,    54,    55,    56,   123,   124,
      90,   125,    57,    58,   133,   135,    59,    60,    61,    54,
      55,    56,   126,   136,    92,   137,    57,    58,   138,    59,
      60,    61,    54,    55,    56,   139,   141,    93,   140,    57,
      58,   148,   152,    59,    60,    61,    54,    55,    56,   150,
     154,    94,   158,    57,    58,   155,    59,    60,    61,    54,
      55,    56,   156,    35,    99,   105,    57,    58,     0,     0,
      59,    60,    61,    54,    55,    56,     0,     0,   102,     0,
      57,    58,     0,    59,    60,    61,    54,    55,    56,     0,
       0,   103,     0,    57,    58,     0,     0,    59,    60,    61,
      54,    55,    56,     0,     0,   149,     0,    57,    58,     0,
      59,    60,    61,     0,    62,    54,    55,    56,     0,     0,
       0,     0,    57,    58,    59,    60,    61,     0,    89,    54,
      55,    56,     0,     0,     0,     0,    57,    58,     0,    59,
      60,    61,     0,   147,    54,    55,     0,     0,     0,     0,
       0,    57,    58,    59,    60,    61,     0,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61
};

static const yytype_int16 yycheck[] =
{
      28,    32,    33,   106,     5,    33,    34,    40,    36,    37,
      38,    13,    14,    11,    12,    43,     0,     6,    46,    47,
      43,   124,    17,    18,    19,    44,    54,    55,    56,    57,
      58,    59,    60,    61,   137,    44,   139,    39,    44,    44,
      44,     3,     4,    46,    44,     7,     4,    44,    10,   152,
      44,    44,    44,   156,    16,    17,    18,    19,    44,    44,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      41,     4,    34,    35,     3,     4,     3,     3,     3,    41,
       3,    10,    44,    13,    14,    15,     3,    16,     3,    43,
      20,    21,    42,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     3,     4,    34,    35,    46,   136,    39,
     138,    42,    41,   141,     3,    44,    40,    45,    39,     3,
      42,     8,    22,    23,    24,    13,    14,    15,    41,    45,
      30,    45,    20,    21,    34,    35,     3,     3,    13,    14,
      15,     3,    41,     8,    44,    20,    21,    41,    45,    37,
      38,    39,    13,    14,    15,    47,    47,    45,     9,    20,
      21,    41,    37,    38,    39,    13,    14,    15,     3,     8,
      45,    41,    20,    21,    45,     3,    37,    38,    39,    13,
      14,    15,     9,    40,    45,     8,    20,    21,    44,    37,
      38,    39,    13,    14,    15,     8,    40,    45,     9,    20,
      21,     9,     8,    37,    38,    39,    13,    14,    15,     9,
       9,    45,     9,    20,    21,    11,    37,    38,    39,    13,
      14,    15,     8,    11,    45,    80,    20,    21,    -1,    -1,
      37,    38,    39,    13,    14,    15,    -1,    -1,    45,    -1,
      20,    21,    -1,    37,    38,    39,    13,    14,    15,    -1,
      -1,    45,    -1,    20,    21,    -1,    -1,    37,    38,    39,
      13,    14,    15,    -1,    -1,    45,    -1,    20,    21,    -1,
      37,    38,    39,    -1,    41,    13,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    37,    38,    39,    -1,    41,    13,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    37,
      38,    39,    -1,    41,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    49,    40,     0,     6,    50,     3,     4,     7,
      10,    16,    17,    18,    19,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    34,    35,    41,    44,    51,
      52,    55,    60,    43,    44,    52,    44,    44,    44,    44,
      46,    44,    44,    44,    44,    44,    44,    44,     4,    60,
      41,     4,    53,    54,    13,    14,    15,    20,    21,    37,
      38,    39,    41,    60,    60,     4,    60,    60,    60,     3,
       3,     3,     3,    60,     3,     3,    60,    60,    45,    43,
      42,    60,    60,    60,    60,    60,    60,    60,    60,    41,
      45,    46,    45,    45,    45,    40,    42,    45,    42,    45,
      45,    45,    45,    45,     3,    53,     8,     3,     3,     3,
      41,     3,    41,     8,    55,    47,    41,    47,    45,    56,
      57,     9,    41,     3,     8,    41,     9,    32,    33,    58,
      59,    11,    12,    45,    55,     3,    40,     8,    44,     8,
       9,    40,    60,    55,    60,    55,    60,    41,     9,    45,
       9,    41,     8,    55,     9,    11,     8,    55,     9
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
#line 86 "Main.y"
    {printf("\n::::    MAIN Function END    ::::\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 90 "Main.y"
    { ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 91 "Main.y"
    { ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 94 "Main.y"
    {printf("\nvariable Declaration successfully\n");
		                             printf("\n\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 107 "Main.y"
    {
	int res = addNewVal((yyvsp[(1) - (3)].idval));
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);

		}
		setVal((yyvsp[(1) - (3)].idval),(yyvsp[(3) - (3)].val));

	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 117 "Main.y"
    {
		int res = addNewVal((yyvsp[(1) - (1)].idval));
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 126 "Main.y"
    { ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 128 "Main.y"
    {   printf("value of expression: %d\n", (yyvsp[(1) - (2)].val)); (yyval.val)=(yyvsp[(1) - (2)].val);
		printf("\n\n");
		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 132 "Main.y"
    { 
							printf("\nValue of the variable : %d\n",(yyvsp[(3) - (4)].val));
							setVal((yyvsp[(1) - (4)].idval),(yyvsp[(3) - (4)].val));
						
							(yyval.val)=(yyvsp[(3) - (4)].val);
							printf("\n\n");
						;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 139 "Main.y"
    {printf("\nPrint Expression %d\n",(yyvsp[(3) - (5)].val));
		                         	printf("\n\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 143 "Main.y"
    {
								if((yyvsp[(3) - (7)].val)){
									printf("\nvalue of expression in IF : %d\n",(yyvsp[(6) - (7)].val));
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
								printf("\n\n");
							;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 153 "Main.y"
    {
								if((yyvsp[(3) - (11)].val)){
									printf("value of expression in IF : %d\n",(yyvsp[(6) - (11)].val));
								}
								else{
									printf("value of expression in ELSE : %d\n",(yyvsp[(10) - (11)].val));
								}
								printf("\n\n");
							;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 162 "Main.y"
    {
									if((yyvsp[(3) - (18)].val)){
									printf("value of expression in IF : %d\n",(yyvsp[(6) - (18)].val));
								}
								else if((yyvsp[(10) - (18)].val)){
									printf("value of expression in ELSE-IF : %d\n",(yyvsp[(13) - (18)].val));
								}
								else{
									printf("value of expression in ELSE : %d\n",(yyvsp[(17) - (18)].val));
								}
								printf("\n\n");
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 175 "Main.y"
    {
		                        printf("\nSWITCH CASE Declaration\n");
		                        printf("\n\n");
	                            ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 182 "Main.y"
    {
	                                int i;
	                                printf("For Loop execution\n");
	                                for(i=(yyvsp[(3) - (11)].val) ; i<(yyvsp[(5) - (11)].val) ; i=i+(yyvsp[(7) - (11)].val) ) 
	                                {printf("\nvalue of i : %d expression value : %d\n", i,(yyvsp[(10) - (11)].val));}
	                                printf("\n\n");

				               ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 191 "Main.y"
    {
		printf("Prime Number detection \n");
        int n, i, flag = 0;
        n=(yyvsp[(3) - (5)].val);

       for (i = 2; i <= n / 2; ++i) {
    
       if (n % i == 0) {
       flag = 1;
       break;
       }
     }

     if (n == 1) {
    printf("1 is neither prime nor composite.");
    } 
     else {
     if (flag == 0)
      printf("%d is a prime number.", n);
      else
      printf("%d is not a prime number.", n);
     }
		printf("\n\n");
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 216 "Main.y"
    {
		printf("\nARRAY Declaration\n");
		
		printf("\nSize of the ARRAY is : %d\n",(yyvsp[(5) - (7)].val));
		printf("\n\n");
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 223 "Main.y"
    {
	                                int i;
	                                printf("\n WHILE Loop execution \n");
	                                for(i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\niteration loop : %d    \n", i);}
	                                printf("\n\n");
	                                								
				               ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 230 "Main.y"
    {
		 int n1, n2;
    
    n1=(yyvsp[(3) - (7)].val);
	n2=(yyvsp[(5) - (7)].val);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 256 "Main.y"
    { printf("Case No : %d & expression value :%d \n",(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].val));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 258 "Main.y"
    {
 				printf("\nDefault case & expression value : %d",(yyvsp[(3) - (4)].val));
 			;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 264 "Main.y"
    {  (yyval.val) = (yyvsp[(1) - (1)].val);  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 266 "Main.y"
    { (yyval.val) = getVal((yyvsp[(1) - (1)].idval)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 268 "Main.y"
    {printf("\nAddition : %d+%d = %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)+(yyvsp[(3) - (3)].val) );  (yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 270 "Main.y"
    {printf("\nSubtraction : %d-%d=%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)-(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 272 "Main.y"
    {printf("\nMultiplication : %d*%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)*(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 274 "Main.y"
    { if((yyvsp[(3) - (3)].val)){
				     					printf("\nDivision : %d/%d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)/(yyvsp[(3) - (3)].val));
				     					(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
				     					
				  					}
				  					else{
										(yyval.val) = 0;
										printf("\nDivision by zero\n\t");
				  					} 	
				    			;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 284 "Main.y"
    { if((yyvsp[(3) - (3)].val)){
				     					printf("\nMod : %d MOD %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val));
				     					(yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);
				     					
				  					}
				  					else{
										(yyval.val) = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 294 "Main.y"
    {printf("\nPower  : %d ^ %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) ^ (yyvsp[(3) - (3)].val));  (yyval.val) = pow((yyvsp[(1) - (3)].val) , (yyvsp[(3) - (3)].val));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 295 "Main.y"
    {printf("\nLess Than : %d < %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 297 "Main.y"
    {printf("\nGreater than : %d > %d \n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 299 "Main.y"
    {	 (yyval.val) = (yyvsp[(2) - (3)].val); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 301 "Main.y"
    {printf("Value of Sin(%d) is %lf\n",(yyvsp[(3) - (4)].val),sin((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val)=sin((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 303 "Main.y"
    {printf("Value of Cos(%d) is %lf\n",(yyvsp[(3) - (4)].val),cos((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val)=cos((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 305 "Main.y"
    {printf("Value of Tan(%d) is %lf\n",(yyvsp[(3) - (4)].val),tan((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val)=tan((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 307 "Main.y"
    {printf("Value of Log10(%d) is %lf\n",(yyvsp[(3) - (4)].val),(log((yyvsp[(3) - (4)].val)*1.0)/log(10.0))); (yyval.val)=(log((yyvsp[(3) - (4)].val)*1.0)/log(10.0));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 309 "Main.y"
    {printf("Value of Log(%d) is %lf\n",(yyvsp[(3) - (4)].val),(log((yyvsp[(3) - (4)].val)))); (yyval.val)=(log((yyvsp[(3) - (4)].val)));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 311 "Main.y"
    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=(yyvsp[(3) - (4)].val);i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",(yyvsp[(3) - (4)].val),f);
		printf("\n\n");

		;}
    break;



/* Line 1455 of yacc.c  */
#line 1975 "Main.tab.c"
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



/* Line 1675 of yacc.c  */
#line 325 "Main.y"



int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	make();
	freopen("input_test.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}


