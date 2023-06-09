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
#line 1 "parser.y"

	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	int type=-1;	//initial declaration of type for symbol table
	char* vval="~";	//initial declaration of value for symbol table
	int vtype=-1;	//initial declaration for type checking for symbol table
	int scope=0;	//initial declaration for scope
	int err=0;	//Initial declaration for error
	void yyerror(char* s); // error handling function
	int yylex(); // declare the function performing lexical analysis
	int arraysize=1; //initial size of array
	extern int yylineno; // track the line number
	extern char* yytext; // track the token 


#line 90 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_CHAR = 259,                  /* T_CHAR  */
    T_DOUBLE = 260,                /* T_DOUBLE  */
    T_WHILE = 261,                 /* T_WHILE  */
    T_INC = 262,                   /* T_INC  */
    T_DEC = 263,                   /* T_DEC  */
    T_OROR = 264,                  /* T_OROR  */
    T_ANDAND = 265,                /* T_ANDAND  */
    T_EQCOMP = 266,                /* T_EQCOMP  */
    T_NOTEQUAL = 267,              /* T_NOTEQUAL  */
    T_GREATEREQ = 268,             /* T_GREATEREQ  */
    T_LESSEREQ = 269,              /* T_LESSEREQ  */
    T_LEFTSHIFT = 270,             /* T_LEFTSHIFT  */
    T_RIGHTSHIFT = 271,            /* T_RIGHTSHIFT  */
    T_PRINTLN = 272,               /* T_PRINTLN  */
    T_STRING = 273,                /* T_STRING  */
    T_FLOAT = 274,                 /* T_FLOAT  */
    T_BOOLEAN = 275,               /* T_BOOLEAN  */
    T_IF = 276,                    /* T_IF  */
    T_ELSE = 277,                  /* T_ELSE  */
    T_STRLITERAL = 278,            /* T_STRLITERAL  */
    T_DO = 279,                    /* T_DO  */
    T_INCLUDE = 280,               /* T_INCLUDE  */
    T_HEADER = 281,                /* T_HEADER  */
    T_MAIN = 282,                  /* T_MAIN  */
    T_ID = 283,                    /* T_ID  */
    T_NUM = 284,                   /* T_NUM  */
    T_FOR = 285,                   /* T_FOR  */
    T_OR = 286,                    /* T_OR  */
    T_AND = 287,                   /* T_AND  */
    T_INCR = 288,                  /* T_INCR  */
    T_DECR = 289,                  /* T_DECR  */
    T_IFX = 290                    /* T_IFX  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_WHILE 261
#define T_INC 262
#define T_DEC 263
#define T_OROR 264
#define T_ANDAND 265
#define T_EQCOMP 266
#define T_NOTEQUAL 267
#define T_GREATEREQ 268
#define T_LESSEREQ 269
#define T_LEFTSHIFT 270
#define T_RIGHTSHIFT 271
#define T_PRINTLN 272
#define T_STRING 273
#define T_FLOAT 274
#define T_BOOLEAN 275
#define T_IF 276
#define T_ELSE 277
#define T_STRLITERAL 278
#define T_DO 279
#define T_INCLUDE 280
#define T_HEADER 281
#define T_MAIN 282
#define T_ID 283
#define T_NUM 284
#define T_FOR 285
#define T_OR 286
#define T_AND 287
#define T_INCR 288
#define T_DECR 289
#define T_IFX 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_CHAR = 4,                     /* T_CHAR  */
  YYSYMBOL_T_DOUBLE = 5,                   /* T_DOUBLE  */
  YYSYMBOL_T_WHILE = 6,                    /* T_WHILE  */
  YYSYMBOL_T_INC = 7,                      /* T_INC  */
  YYSYMBOL_T_DEC = 8,                      /* T_DEC  */
  YYSYMBOL_T_OROR = 9,                     /* T_OROR  */
  YYSYMBOL_T_ANDAND = 10,                  /* T_ANDAND  */
  YYSYMBOL_T_EQCOMP = 11,                  /* T_EQCOMP  */
  YYSYMBOL_T_NOTEQUAL = 12,                /* T_NOTEQUAL  */
  YYSYMBOL_T_GREATEREQ = 13,               /* T_GREATEREQ  */
  YYSYMBOL_T_LESSEREQ = 14,                /* T_LESSEREQ  */
  YYSYMBOL_T_LEFTSHIFT = 15,               /* T_LEFTSHIFT  */
  YYSYMBOL_T_RIGHTSHIFT = 16,              /* T_RIGHTSHIFT  */
  YYSYMBOL_T_PRINTLN = 17,                 /* T_PRINTLN  */
  YYSYMBOL_T_STRING = 18,                  /* T_STRING  */
  YYSYMBOL_T_FLOAT = 19,                   /* T_FLOAT  */
  YYSYMBOL_T_BOOLEAN = 20,                 /* T_BOOLEAN  */
  YYSYMBOL_T_IF = 21,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 22,                    /* T_ELSE  */
  YYSYMBOL_T_STRLITERAL = 23,              /* T_STRLITERAL  */
  YYSYMBOL_T_DO = 24,                      /* T_DO  */
  YYSYMBOL_T_INCLUDE = 25,                 /* T_INCLUDE  */
  YYSYMBOL_T_HEADER = 26,                  /* T_HEADER  */
  YYSYMBOL_T_MAIN = 27,                    /* T_MAIN  */
  YYSYMBOL_T_ID = 28,                      /* T_ID  */
  YYSYMBOL_T_NUM = 29,                     /* T_NUM  */
  YYSYMBOL_T_FOR = 30,                     /* T_FOR  */
  YYSYMBOL_T_OR = 31,                      /* T_OR  */
  YYSYMBOL_T_AND = 32,                     /* T_AND  */
  YYSYMBOL_T_INCR = 33,                    /* T_INCR  */
  YYSYMBOL_T_DECR = 34,                    /* T_DECR  */
  YYSYMBOL_35_ = 35,                       /* '<'  */
  YYSYMBOL_36_ = 36,                       /* '>'  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '='  */
  YYSYMBOL_46_ = 46,                       /* '+'  */
  YYSYMBOL_47_ = 47,                       /* '-'  */
  YYSYMBOL_48_ = 48,                       /* '*'  */
  YYSYMBOL_49_ = 49,                       /* '/'  */
  YYSYMBOL_50_ = 50,                       /* '!'  */
  YYSYMBOL_T_IFX = 51,                     /* T_IFX  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_START = 53,                     /* START  */
  YYSYMBOL_PROG = 54,                      /* PROG  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_DEC_ASGN = 58,                  /* DEC_ASGN  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_DECLR = 60,                     /* DECLR  */
  YYSYMBOL_ARRAY = 61,                     /* ARRAY  */
  YYSYMBOL_BRACKET = 62,                   /* BRACKET  */
  YYSYMBOL_LISTVAR = 63,                   /* LISTVAR  */
  YYSYMBOL_VAR = 64,                       /* VAR  */
  YYSYMBOL_TYPE = 65,                      /* TYPE  */
  YYSYMBOL_ASSGN = 66,                     /* ASSGN  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_EXPR = 68,                      /* EXPR  */
  YYSYMBOL_E = 69,                         /* E  */
  YYSYMBOL_T = 70,                         /* T  */
  YYSYMBOL_F = 71,                         /* F  */
  YYSYMBOL_REL_OP = 72,                    /* REL_OP  */
  YYSYMBOL_LOGICAL_OP = 73,                /* LOGICAL_OP  */
  YYSYMBOL_UNARY_OP = 74,                  /* UNARY_OP  */
  YYSYMBOL_UN_OP = 75,                     /* UN_OP  */
  YYSYMBOL_MAIN = 76,                      /* MAIN  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_EMPTY_LISTVAR = 78,             /* EMPTY_LISTVAR  */
  YYSYMBOL_STMT = 79,                      /* STMT  */
  YYSYMBOL_80_6 = 80,                      /* $@6  */
  YYSYMBOL_STMT_NO_BLOCK = 81,             /* STMT_NO_BLOCK  */
  YYSYMBOL_82_7 = 82,                      /* $@7  */
  YYSYMBOL_83_8 = 83,                      /* $@8  */
  YYSYMBOL_84_9 = 84,                      /* $@9  */
  YYSYMBOL_DO = 85,                        /* DO  */
  YYSYMBOL_BLOCK = 86,                     /* BLOCK  */
  YYSYMBOL_87_10 = 87,                     /* $@10  */
  YYSYMBOL_COND = 88,                      /* COND  */
  YYSYMBOL_WHILE = 89,                     /* WHILE  */
  YYSYMBOL_WHILE_2 = 90,                   /* WHILE_2  */
  YYSYMBOL_91_11 = 91                      /* $@11  */
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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   453

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

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
       2,     2,     2,    50,     2,     2,     2,     2,     2,     2,
      38,    39,    48,    46,    44,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      35,    45,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    40,    42,    45,    45,    46,    46,    48,    49,
      51,    65,    66,    68,    69,    72,    86,    98,    99,   100,
     101,   105,   105,   117,   118,   119,   120,   121,   125,   137,
     149,   153,   165,   177,   180,   181,   207,   216,   227,   228,
     229,   230,   231,   232,   235,   236,   237,   240,   241,   244,
     245,   246,   247,   248,   251,   251,   255,   256,   262,   263,
     263,   264,   265,   266,   267,   268,   274,   275,   276,   276,
     277,   277,   277,   278,   281,   283,   283,   287,   288,   292,
     296,   297,   301,   301,   302
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
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_CHAR",
  "T_DOUBLE", "T_WHILE", "T_INC", "T_DEC", "T_OROR", "T_ANDAND",
  "T_EQCOMP", "T_NOTEQUAL", "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT",
  "T_RIGHTSHIFT", "T_PRINTLN", "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF",
  "T_ELSE", "T_STRLITERAL", "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN",
  "T_ID", "T_NUM", "T_FOR", "T_OR", "T_AND", "T_INCR", "T_DECR", "'<'",
  "'>'", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", "','", "'='",
  "'+'", "'-'", "'*'", "'/'", "'!'", "T_IFX", "$accept", "START", "PROG",
  "$@1", "FOR", "$@2", "DEC_ASGN", "$@3", "DECLR", "ARRAY", "BRACKET",
  "LISTVAR", "VAR", "TYPE", "ASSGN", "$@4", "EXPR", "E", "T", "F",
  "REL_OP", "LOGICAL_OP", "UNARY_OP", "UN_OP", "MAIN", "$@5",
  "EMPTY_LISTVAR", "STMT", "$@6", "STMT_NO_BLOCK", "$@7", "$@8", "$@9",
  "DO", "BLOCK", "$@10", "COND", "WHILE", "WHILE_2", "$@11", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-32)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,   -97,   -97,   -97,   -97,   -97,   -97,   -38,    -5,   -11,
     -97,    -2,   -97,   -97,   124,   -97,   -97,   -97,    47,   -97,
     194,    18,     6,    21,     1,    23,   347,   -20,     4,   -97,
      74,   194,   194,    27,   -97,    44,    40,    26,   -97,   -97,
     357,   -97,   -97,   194,    45,   194,    39,   -27,   -97,    24,
     -97,   194,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     194,   -97,    74,    74,   -97,   -97,    74,    74,   -97,    74,
      74,    29,   -97,   -97,   194,   317,    67,   -97,    49,   124,
      46,   -97,   -97,    61,    24,   -97,    45,    78,   124,   -97,
      45,   -97,   -97,    29,    29,     4,     4,   -97,   -97,   -97,
     158,   278,    71,    72,    82,    77,   363,    70,   317,   -97,
     -97,   -97,   158,   194,   403,    87,    24,    79,    73,   403,
     -97,   -97,   403,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   317,    83,   -97,    10,    88,    89,   317,   317,   -97,
     -34,   124,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   390,
     317,   107,   317,   124,    92,   317,    94,   397,   -97,   -97,
     -97,    90,   -97,   317,    99,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    27,    30,    29,    28,    47,     0,     0,    45,
      46,     0,    59,    60,     0,    62,    61,    63,     0,     2,
       0,     0,     0,     0,     0,     0,     0,    34,    40,    43,
       0,     0,     0,     0,    85,     0,     0,     0,    16,    45,
       0,     1,     8,     0,     0,     0,     0,    22,    19,    18,
      24,     0,    52,    53,    49,    48,    55,    54,    50,    51,
       0,    56,     0,     0,    57,    58,     0,     0,    36,     0,
       0,    37,     4,     9,     0,    75,     0,    84,     0,     0,
       0,    44,     7,    26,    17,     5,    67,     0,     0,    20,
       0,     6,    10,    33,    35,    38,    39,    41,    42,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    72,
      69,    83,     0,     0,    32,     0,    66,     0,     0,    25,
      23,    88,    87,    78,    71,    74,    76,    77,    73,    86,
      68,    75,     0,     3,     0,     0,    22,    75,    75,    70,
       0,     0,    64,    21,    79,    81,    94,    92,    89,     0,
      75,     0,    75,     0,     0,    75,     0,     0,    65,    82,
      93,     0,    14,    75,     0,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   -12,   -97,   -59,   -97,    13,   -97,    17,   -97,
       7,   -43,    52,   -18,   -68,   -97,   -14,   -25,    14,    30,
      12,   -97,   -97,   -97,   -97,   -97,   -97,   -96,   -97,   -97,
     -97,   -97,   -97,    51,   149,   -97,    48,   126,   -97,   -97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    18,    19,    33,    20,   163,    21,    22,    23,    48,
      89,    49,    50,    24,    25,    37,    26,    27,    28,    29,
      62,    63,    68,    30,    31,   150,   117,   107,   131,   108,
     137,   138,   151,    32,   110,    75,   123,   111,   148,   152
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    84,    34,   146,    44,    71,   147,   105,    42,     2,
       3,     4,   130,    64,    65,    87,   101,   -26,    88,    72,
      73,    52,    53,    54,    55,     5,    66,    67,    46,    47,
      36,    82,   121,    85,   -31,   139,    38,    93,    94,    91,
     105,   144,   145,   116,   121,    58,    59,    41,    92,   101,
      76,    80,    69,    70,   154,    43,   156,   104,    45,   159,
      51,   106,    99,   105,    74,   114,    78,   164,    90,   105,
     105,    79,   101,    83,   119,    66,    67,    86,   101,   101,
      95,    96,   105,   115,   105,   113,   122,   105,   102,   124,
     104,   101,   103,   101,   106,   105,   101,     6,   122,    97,
      98,   133,    39,    10,   101,   112,    88,   118,   125,   126,
      47,   129,    14,   104,   127,   134,   136,   106,   135,   104,
     104,   102,   140,   106,   106,   103,   109,   149,   142,   155,
     162,    87,   104,   158,   104,   160,   106,   104,   106,   157,
     165,   106,   120,   143,   102,   104,   141,     6,   103,   106,
     102,   102,    39,    10,   103,   103,    35,    12,    13,   109,
     132,    77,    14,   102,     0,   102,     0,   103,   102,   103,
      15,    16,   103,     0,    17,     0,   102,     0,     0,     0,
     103,     6,   109,     0,     0,     0,     9,    10,   109,   109,
       0,    12,    13,     0,   -13,     1,    14,     2,     3,     4,
     -13,   109,     0,   109,    15,    16,   109,     0,    17,     0,
       0,     0,     0,     5,   109,   -13,   -13,     6,     7,     8,
       0,     0,     9,    10,    11,     0,     0,    12,    13,     0,
       0,     0,    14,     0,   -13,   -13,     0,     0,     0,     0,
      15,    16,   -13,     1,    17,     2,     3,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     6,     7,     8,     0,     0,
       9,    10,    11,     0,     0,    12,    13,     0,     0,     1,
      14,     2,     3,     4,   -13,     0,     0,     0,    15,    16,
       0,     0,    17,     0,     0,     0,     0,     5,     0,   -13,
     -13,     6,     7,     8,     0,     0,     9,    10,    11,     0,
       0,    12,    13,     0,     0,     0,    14,     0,   -13,   -13,
       2,     3,     4,    76,    15,    16,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     5,     0,   100,     0,
       6,     7,     0,     0,     0,     9,    10,    11,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    34,    52,    53,
      54,    55,     0,    15,    16,     0,     0,    17,    52,    53,
      54,    55,     0,     0,    52,    53,    54,    55,    56,    57,
       0,     0,    58,    59,    60,     0,     0,     0,    56,    57,
       0,     0,    58,    59,    56,    57,    81,    61,    58,    59,
     128,    52,    53,    54,    55,     0,     0,    61,    52,    53,
      54,    55,     0,    61,    52,    53,    54,    55,     0,     0,
       0,    56,    57,     0,     0,    58,    59,   153,    56,    57,
       0,     0,    58,    59,    56,    57,   161,     0,    58,    59,
      61,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
      14,    44,    40,    37,    22,    30,    40,    75,    20,     3,
       4,     5,   108,    33,    34,    42,    75,    44,    45,    31,
      32,    11,    12,    13,    14,    19,    46,    47,    27,    28,
      35,    43,   100,    45,    45,   131,    38,    62,    63,    51,
     108,   137,   138,    86,   112,    35,    36,     0,    60,   108,
       6,    38,    48,    49,   150,    37,   152,    75,    37,   155,
      37,    75,    74,   131,    37,    79,    26,   163,    44,   137,
     138,    45,   131,    28,    88,    46,    47,    38,   137,   138,
      66,    67,   150,    37,   152,    36,   100,   155,    75,   101,
     108,   150,    75,   152,   108,   163,   155,    23,   112,    69,
      70,   113,    28,    29,   163,    38,    45,    29,    37,    37,
      28,    41,    38,   131,    37,    28,    43,   131,    39,   137,
     138,   108,    39,   137,   138,   108,    75,   141,    40,    22,
      40,    42,   150,    41,   152,    41,   150,   155,   152,   153,
      41,   155,    90,   136,   131,   163,   134,    23,   131,   163,
     137,   138,    28,    29,   137,   138,     7,    33,    34,   108,
     112,    35,    38,   150,    -1,   152,    -1,   150,   155,   152,
      46,    47,   155,    -1,    50,    -1,   163,    -1,    -1,    -1,
     163,    23,   131,    -1,    -1,    -1,    28,    29,   137,   138,
      -1,    33,    34,    -1,     0,     1,    38,     3,     4,     5,
       6,   150,    -1,   152,    46,    47,   155,    -1,    50,    -1,
      -1,    -1,    -1,    19,   163,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      46,    47,     0,     1,    50,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    -1,    33,    34,    -1,    -1,     1,
      38,     3,     4,     5,     6,    -1,    -1,    -1,    46,    47,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
       3,     4,     5,     6,    46,    47,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    -1,    38,    -1,    40,    11,    12,
      13,    14,    -1,    46,    47,    -1,    -1,    50,    11,    12,
      13,    14,    -1,    -1,    11,    12,    13,    14,    31,    32,
      -1,    -1,    35,    36,    37,    -1,    -1,    -1,    31,    32,
      -1,    -1,    35,    36,    31,    32,    39,    50,    35,    36,
      37,    11,    12,    13,    14,    -1,    -1,    50,    11,    12,
      13,    14,    -1,    50,    11,    12,    13,    14,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,    36,    37,    31,    32,
      -1,    -1,    35,    36,    31,    32,    39,    -1,    35,    36,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,    19,    23,    24,    25,    28,
      29,    30,    33,    34,    38,    46,    47,    50,    53,    54,
      56,    58,    59,    60,    65,    66,    68,    69,    70,    71,
      75,    76,    85,    55,    40,    86,    35,    67,    38,    28,
      68,     0,    54,    37,    65,    37,    27,    28,    61,    63,
      64,    37,    11,    12,    13,    14,    31,    32,    35,    36,
      37,    50,    72,    73,    33,    34,    46,    47,    74,    48,
      49,    69,    54,    54,    37,    87,     6,    89,    26,    45,
      58,    39,    54,    28,    63,    54,    38,    42,    45,    62,
      44,    54,    54,    69,    69,    70,    70,    71,    71,    54,
      21,    56,    58,    60,    65,    66,    68,    79,    81,    85,
      86,    89,    38,    36,    68,    37,    63,    78,    29,    68,
      64,    66,    68,    88,    54,    37,    37,    37,    37,    41,
      79,    80,    88,    54,    28,    39,    43,    82,    83,    79,
      39,    72,    40,    62,    79,    79,    37,    40,    90,    68,
      77,    84,    91,    37,    79,    22,    79,    68,    41,    79,
      41,    39,    40,    57,    79,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    54,    54,    57,    56,    59,    58,    60,    60,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    67,    66,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    73,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    77,    76,    78,    78,    79,    80,
      79,    79,    79,    79,    79,    79,    81,    81,    82,    81,
      83,    84,    81,    81,    85,    87,    86,    88,    88,    89,
      88,    88,    91,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     2,     3,     3,     3,     2,     2,
       3,     0,     4,     0,     0,    14,     0,     3,     2,     2,
       2,     4,     0,     3,     1,     3,     1,     1,     1,     1,
       1,     0,     4,     3,     1,     3,     2,     2,     3,     3,
       1,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     9,     1,     0,     2,     0,
       3,     2,     1,     2,     2,     0,     2,     2,     0,     4,
       0,     0,     7,     1,     3,     0,     4,     1,     1,     5,
       1,     1,     0,     4,     1
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
  case 2: /* START: PROG  */
#line 27 "parser.y"
             { if(err==0) printf("Valid syntax\n");
	 YYACCEPT; }
#line 1451 "y.tab.c"
    break;

  case 11: /* $@1: %empty  */
#line 40 "parser.y"
               {yyerrok;yyclearin;}
#line 1457 "y.tab.c"
    break;

  case 14: /* $@2: %empty  */
#line 45 "parser.y"
                                                            {scope++;}
#line 1463 "y.tab.c"
    break;

  case 15: /* FOR: T_FOR '(' DEC_ASGN ';' T_ID REL_OP EXPR ';' EXPR ')' '{' $@2 STMT '}'  */
#line 45 "parser.y"
                                                                               {scope--;}
#line 1469 "y.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 46 "parser.y"
           {printf(" ");}
#line 1475 "y.tab.c"
    break;

  case 20: /* ARRAY: T_ID BRACKET  */
#line 51 "parser.y"
                     {
		if(check_sym_tab(yyvsp[-1]))	//if variable is in table then variable is being re-declared
				{
					printf("Variable %s already declared\n",yyvsp[-1]);
					yyerror(yyvsp[-1]);
				}
				else
				{
				insert_symbol(yyvsp[-1],size(type)*arraysize,type,yylineno,scope);
				arraysize=1;	//revert to default for checking
				type=-1;
				}
		}
#line 1493 "y.tab.c"
    break;

  case 21: /* BRACKET: '[' T_NUM ']' BRACKET  */
#line 65 "parser.y"
                                { arraysize*=atoi(yyvsp[-2]);}
#line 1499 "y.tab.c"
    break;

  case 25: /* VAR: T_ID '=' EXPR  */
#line 72 "parser.y"
                        {
				if(check_sym_tab(yyvsp[-2]))	//if variable is in table then variable is being re-declared
				{
					printf("Variable %s already declared\n",yyvsp[-2]);
					yyerror(yyvsp[-2]);
				}
				else
				{
				insert_symbol(yyvsp[-2],size(type),type,yylineno,scope);
				insert_val(yyvsp[-2],vval,yylineno);
				vval="~";	//revert to default for checking
				type=-1;
				}
			}
#line 1518 "y.tab.c"
    break;

  case 26: /* VAR: T_ID  */
#line 86 "parser.y"
                        {
				if(check_sym_tab(yyvsp[0]))	//if variable is in table then variable is being re-declared
				{
					printf("Variable %s already declared\n",yyvsp[0]);
					yyerror(yyvsp[0]);
				}
				else{
				insert_symbol(yyvsp[0],size(type),type,yylineno,scope);
				type=-1;	//revert to default for checking
				}
			}
#line 1534 "y.tab.c"
    break;

  case 27: /* TYPE: T_INT  */
#line 98 "parser.y"
             {type = INT;}
#line 1540 "y.tab.c"
    break;

  case 28: /* TYPE: T_FLOAT  */
#line 99 "parser.y"
                 {type = FLOAT;}
#line 1546 "y.tab.c"
    break;

  case 29: /* TYPE: T_DOUBLE  */
#line 100 "parser.y"
                  {type = DOUBLE;}
#line 1552 "y.tab.c"
    break;

  case 30: /* TYPE: T_CHAR  */
#line 101 "parser.y"
                {type = CHAR;}
#line 1558 "y.tab.c"
    break;

  case 31: /* $@4: %empty  */
#line 105 "parser.y"
             {type=retrieve_type(yyvsp[0]);}
#line 1564 "y.tab.c"
    break;

  case 32: /* ASSGN: T_ID $@4 '=' EXPR  */
#line 105 "parser.y"
                                                {
				if(!check_sym_tab(yyvsp[-3]))	//if variable not declared then value cannot be assigned
				{
					printf("Variable %s not declared\n",yyvsp[-3]);
					yyerror(yyvsp[-3]);
				}
				insert_val(yyvsp[-3],vval,yylineno);
				vval="~";		//to make sure previous values aren't inserted into other identifiers
				type=-1;		//revert to default for checking
			}
#line 1579 "y.tab.c"
    break;

  case 34: /* EXPR: E  */
#line 118 "parser.y"
           {vval=yyvsp[0];}
#line 1585 "y.tab.c"
    break;

  case 38: /* E: E '+' T  */
#line 125 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])+atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])+atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1602 "y.tab.c"
    break;

  case 39: /* E: E '-' T  */
#line 137 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])-atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])-atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1619 "y.tab.c"
    break;

  case 40: /* E: T  */
#line 149 "parser.y"
        {yyval=yyvsp[0];}
#line 1625 "y.tab.c"
    break;

  case 41: /* T: T '*' F  */
#line 153 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])*atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])*atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1642 "y.tab.c"
    break;

  case 42: /* T: T '/' F  */
#line 165 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])/atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])/atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1659 "y.tab.c"
    break;

  case 43: /* T: F  */
#line 177 "parser.y"
        {yyval=yyvsp[0];}
#line 1665 "y.tab.c"
    break;

  case 45: /* F: T_ID  */
#line 181 "parser.y"
                {
			if(check_sym_tab(yyvsp[0]))		//check if variable is in symbol table
			{
				char* check=retrieve_val(yyvsp[0]);
				if(check=="~")		//if variable has no value then can't be used for assignment
				{
					printf("Variable %s not initialised",yyvsp[0]);
					yyerror(yyvsp[0]);
				}
				else
				{	
					yyval=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)	//checks for matching type
					{
						printf("Mismatch type\n");
						yyerror(yyvsp[0]);
					}	
				}
			}
			else
			{
					printf("Variable %s not declared\n",yyvsp[0]);
					yyerror(yyvsp[0]);
			}
		}
#line 1696 "y.tab.c"
    break;

  case 46: /* F: T_NUM  */
#line 207 "parser.y"
                {
    			yyval=strdup(yyvsp[0]); 
    			vtype=type_check(yyvsp[0]);
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror(yyvsp[0]);
			}
		}
#line 1710 "y.tab.c"
    break;

  case 47: /* F: T_STRLITERAL  */
#line 216 "parser.y"
                   {
    			yyval=strdup(yyvsp[0]); 
    			vtype=1;
			if(vtype!=type)		//checks for matching type
			{
				printf("Mismatch type\n");	
				yyerror(yyvsp[0]);
			}
		}
#line 1724 "y.tab.c"
    break;

  case 64: /* $@5: %empty  */
#line 251 "parser.y"
                                             {scope++;}
#line 1730 "y.tab.c"
    break;

  case 65: /* MAIN: TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' $@5 STMT '}'  */
#line 251 "parser.y"
                                                                 {scope--;}
#line 1736 "y.tab.c"
    break;

  case 69: /* $@6: %empty  */
#line 263 "parser.y"
                {scope++;}
#line 1742 "y.tab.c"
    break;

  case 70: /* STMT: BLOCK $@6 STMT  */
#line 263 "parser.y"
                                {scope--;}
#line 1748 "y.tab.c"
    break;

  case 78: /* $@7: %empty  */
#line 276 "parser.y"
                    {scope++;}
#line 1754 "y.tab.c"
    break;

  case 79: /* STMT_NO_BLOCK: T_IF COND $@7 STMT  */
#line 276 "parser.y"
                                    {scope--;}
#line 1760 "y.tab.c"
    break;

  case 80: /* $@8: %empty  */
#line 277 "parser.y"
                    {scope++;}
#line 1766 "y.tab.c"
    break;

  case 81: /* $@9: %empty  */
#line 277 "parser.y"
                                    {scope--;}
#line 1772 "y.tab.c"
    break;

  case 85: /* $@10: %empty  */
#line 283 "parser.y"
            {scope++;}
#line 1778 "y.tab.c"
    break;

  case 86: /* BLOCK: '{' $@10 STMT '}'  */
#line 283 "parser.y"
                                {scope--;}
#line 1784 "y.tab.c"
    break;

  case 92: /* $@11: %empty  */
#line 301 "parser.y"
             {scope++;}
#line 1790 "y.tab.c"
    break;

  case 93: /* WHILE_2: '{' $@11 STMT '}'  */
#line 301 "parser.y"
                                {scope--;}
#line 1796 "y.tab.c"
    break;


#line 1800 "y.tab.c"

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

#line 305 "parser.y"



/* error handling function */
void yyerror(char* s)
{
	err+=1;
	printf("Error :syntax error,line number:%d,token:%s \n",yylineno,yytext);
}
int yywrap()
{
    return(1);
}

/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	t=init_table();
	//printf("here \n");
	yyparse();
	//display_sym_tab();
	return 0;

}

