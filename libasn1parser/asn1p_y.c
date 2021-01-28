/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         asn1p_parse
#define yylex           asn1p_lex
#define yyerror         asn1p_error
#define yydebug         asn1p_debug
#define yynerrs         asn1p_nerrs

#define yylval          asn1p_lval
#define yychar          asn1p_char

/* Copy the first part of user declarations.  */
#line 3 "asn1p_y.y" /* yacc.c:339  */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>
#include <assert.h>

#include "asn1parser.h"

#define YYERROR_VERBOSE
#define YYDEBUG 1
#define YYFPRINTF   prefixed_fprintf

/*
 * Prefix parser debug with "PARSER: " for easier human eye scanning.
 */
static int
__attribute__((format(printf, 2, 3)))
prefixed_fprintf(FILE *f, const char *fmt, ...) {
    static int line_ended = 1;
    va_list ap;
    va_start(ap, fmt);
    if(line_ended) {
        fprintf(f, "PARSER: ");
        line_ended = 0;
    }
    size_t len = strlen(fmt);
    if(len && fmt[len-1] == '\n') {
        line_ended = 1;
    }
    int ret = vfprintf(f, fmt, ap);
    va_end(ap);
    return ret;
}

int yylex(void);
int yyerror(void **param, const char *msg);
#ifdef	YYBYACC
int yyparse(void **param);	/* byacc does not produce a prototype */
#endif
void asn1p_lexer_hack_push_opaque_state(void);
void asn1p_lexer_hack_enable_with_syntax(void);
void asn1p_lexer_hack_push_encoding_control(void);
#define	yylineno	asn1p_lineno
extern int asn1p_lineno;
const char *asn1p_parse_debug_filename;
#define ASN_FILENAME asn1p_parse_debug_filename

/*
 * Process directives as <ASN1C:RepresentAsPointer>
 */
extern int asn1p_as_pointer;

/*
 * This temporary variable is used to solve the shortcomings of 1-lookahead
 * parser.
 */
static struct AssignedIdentifier *saved_aid;

static asn1p_value_t *_convert_bitstring2binary(char *str, int base);
static void _fixup_anonymous_identifier(asn1p_expr_t *expr);

static asn1p_module_t *currentModule;
#define	NEW_EXPR()	(asn1p_expr_new(yylineno, currentModule))

#define	checkmem(ptr)	do {						\
		if(!(ptr))						\
		return yyerror(param, "Memory failure");		\
	} while(0)

#define	CONSTRAINT_INSERT(root, constr_type, arg1, arg2) do {		\
		if(arg1->type != constr_type) {				\
			int __ret;					\
			root = asn1p_constraint_new(yylineno, currentModule);	\
			checkmem(root);					\
			root->type = constr_type;			\
			__ret = asn1p_constraint_insert(root,		\
				arg1);					\
			checkmem(__ret == 0);				\
		} else {						\
			root = arg1;					\
		}							\
		if(arg2) {						\
			int __ret					\
			= asn1p_constraint_insert(root, arg2);		\
			checkmem(__ret == 0);				\
		}							\
	} while(0)

#ifdef	AL_IMPORT
#error	AL_IMPORT DEFINED ELSEWHERE!
#endif
#define AL_IMPORT(to, where, from, field)                                      \
    do {                                                                       \
        if(!(from)) break;                                                     \
        while(TQ_FIRST(&((from)->where))) {                                    \
            TQ_ADD(&((to)->where), TQ_REMOVE(&((from)->where), field), field); \
        }                                                                      \
        assert(TQ_FIRST(&((from)->where)) == 0);                               \
    } while(0)


#line 179 "asn1p_y.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_ASN1P_ASN_P_Y_H_INCLUDED
# define YY_ASN1P_ASN_P_Y_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int asn1p_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_PPEQ = 258,
    TOK_VBracketLeft = 259,
    TOK_VBracketRight = 260,
    TOK_whitespace = 261,
    TOK_opaque = 262,
    TOK_bstring = 263,
    TOK_cstring = 264,
    TOK_hstring = 265,
    TOK_identifier = 266,
    TOK_number = 267,
    TOK_number_negative = 268,
    TOK_realnumber = 269,
    TOK_tuple = 270,
    TOK_quadruple = 271,
    TOK_typereference = 272,
    TOK_capitalreference = 273,
    TOK_typefieldreference = 274,
    TOK_valuefieldreference = 275,
    TOK_Literal = 276,
    TOK_ExtValue_BIT_STRING = 277,
    TOK_ABSENT = 278,
    TOK_ABSTRACT_SYNTAX = 279,
    TOK_ALL = 280,
    TOK_ANY = 281,
    TOK_APPLICATION = 282,
    TOK_AUTOMATIC = 283,
    TOK_BEGIN = 284,
    TOK_BIT = 285,
    TOK_BMPString = 286,
    TOK_BOOLEAN = 287,
    TOK_BY = 288,
    TOK_CHARACTER = 289,
    TOK_CHOICE = 290,
    TOK_CLASS = 291,
    TOK_COMPONENT = 292,
    TOK_COMPONENTS = 293,
    TOK_CONSTRAINED = 294,
    TOK_CONTAINING = 295,
    TOK_DEFAULT = 296,
    TOK_DEFINITIONS = 297,
    TOK_DEFINED = 298,
    TOK_EMBEDDED = 299,
    TOK_ENCODED = 300,
    TOK_ENCODING_CONTROL = 301,
    TOK_END = 302,
    TOK_ENUMERATED = 303,
    TOK_EXPLICIT = 304,
    TOK_EXPORTS = 305,
    TOK_EXTENSIBILITY = 306,
    TOK_FALSE = 307,
    TOK_FROM = 308,
    TOK_GeneralizedTime = 309,
    TOK_GeneralString = 310,
    TOK_GraphicString = 311,
    TOK_IA5String = 312,
    TOK_IDENTIFIER = 313,
    TOK_IMPLICIT = 314,
    TOK_IMPLIED = 315,
    TOK_IMPORTS = 316,
    TOK_INCLUDES = 317,
    TOK_INSTANCE = 318,
    TOK_INSTRUCTIONS = 319,
    TOK_INTEGER = 320,
    TOK_ISO646String = 321,
    TOK_MAX = 322,
    TOK_MIN = 323,
    TOK_MINUS_INFINITY = 324,
    TOK_NULL = 325,
    TOK_NumericString = 326,
    TOK_OBJECT = 327,
    TOK_ObjectDescriptor = 328,
    TOK_OCTET = 329,
    TOK_OF = 330,
    TOK_OPTIONAL = 331,
    TOK_PATTERN = 332,
    TOK_PDV = 333,
    TOK_PLUS_INFINITY = 334,
    TOK_PRESENT = 335,
    TOK_PrintableString = 336,
    TOK_PRIVATE = 337,
    TOK_REAL = 338,
    TOK_RELATIVE_OID = 339,
    TOK_SEQUENCE = 340,
    TOK_SET = 341,
    TOK_SIZE = 342,
    TOK_STRING = 343,
    TOK_SYNTAX = 344,
    TOK_T61String = 345,
    TOK_TAGS = 346,
    TOK_TeletexString = 347,
    TOK_TRUE = 348,
    TOK_TYPE_IDENTIFIER = 349,
    TOK_UNIQUE = 350,
    TOK_UNIVERSAL = 351,
    TOK_UniversalString = 352,
    TOK_UTCTime = 353,
    TOK_UTF8String = 354,
    TOK_VideotexString = 355,
    TOK_VisibleString = 356,
    TOK_WITH = 357,
    UTF8_BOM = 358,
    TOK_EXCEPT = 359,
    TOK_INTERSECTION = 360,
    TOK_UNION = 361,
    TOK_TwoDots = 362,
    TOK_ThreeDots = 363,
    TOK_SUCCESSORS = 364,
    TOK_DESCENDANTS = 365
  };
#endif
/* Tokens.  */
#define TOK_PPEQ 258
#define TOK_VBracketLeft 259
#define TOK_VBracketRight 260
#define TOK_whitespace 261
#define TOK_opaque 262
#define TOK_bstring 263
#define TOK_cstring 264
#define TOK_hstring 265
#define TOK_identifier 266
#define TOK_number 267
#define TOK_number_negative 268
#define TOK_realnumber 269
#define TOK_tuple 270
#define TOK_quadruple 271
#define TOK_typereference 272
#define TOK_capitalreference 273
#define TOK_typefieldreference 274
#define TOK_valuefieldreference 275
#define TOK_Literal 276
#define TOK_ExtValue_BIT_STRING 277
#define TOK_ABSENT 278
#define TOK_ABSTRACT_SYNTAX 279
#define TOK_ALL 280
#define TOK_ANY 281
#define TOK_APPLICATION 282
#define TOK_AUTOMATIC 283
#define TOK_BEGIN 284
#define TOK_BIT 285
#define TOK_BMPString 286
#define TOK_BOOLEAN 287
#define TOK_BY 288
#define TOK_CHARACTER 289
#define TOK_CHOICE 290
#define TOK_CLASS 291
#define TOK_COMPONENT 292
#define TOK_COMPONENTS 293
#define TOK_CONSTRAINED 294
#define TOK_CONTAINING 295
#define TOK_DEFAULT 296
#define TOK_DEFINITIONS 297
#define TOK_DEFINED 298
#define TOK_EMBEDDED 299
#define TOK_ENCODED 300
#define TOK_ENCODING_CONTROL 301
#define TOK_END 302
#define TOK_ENUMERATED 303
#define TOK_EXPLICIT 304
#define TOK_EXPORTS 305
#define TOK_EXTENSIBILITY 306
#define TOK_FALSE 307
#define TOK_FROM 308
#define TOK_GeneralizedTime 309
#define TOK_GeneralString 310
#define TOK_GraphicString 311
#define TOK_IA5String 312
#define TOK_IDENTIFIER 313
#define TOK_IMPLICIT 314
#define TOK_IMPLIED 315
#define TOK_IMPORTS 316
#define TOK_INCLUDES 317
#define TOK_INSTANCE 318
#define TOK_INSTRUCTIONS 319
#define TOK_INTEGER 320
#define TOK_ISO646String 321
#define TOK_MAX 322
#define TOK_MIN 323
#define TOK_MINUS_INFINITY 324
#define TOK_NULL 325
#define TOK_NumericString 326
#define TOK_OBJECT 327
#define TOK_ObjectDescriptor 328
#define TOK_OCTET 329
#define TOK_OF 330
#define TOK_OPTIONAL 331
#define TOK_PATTERN 332
#define TOK_PDV 333
#define TOK_PLUS_INFINITY 334
#define TOK_PRESENT 335
#define TOK_PrintableString 336
#define TOK_PRIVATE 337
#define TOK_REAL 338
#define TOK_RELATIVE_OID 339
#define TOK_SEQUENCE 340
#define TOK_SET 341
#define TOK_SIZE 342
#define TOK_STRING 343
#define TOK_SYNTAX 344
#define TOK_T61String 345
#define TOK_TAGS 346
#define TOK_TeletexString 347
#define TOK_TRUE 348
#define TOK_TYPE_IDENTIFIER 349
#define TOK_UNIQUE 350
#define TOK_UNIVERSAL 351
#define TOK_UniversalString 352
#define TOK_UTCTime 353
#define TOK_UTF8String 354
#define TOK_VideotexString 355
#define TOK_VisibleString 356
#define TOK_WITH 357
#define UTF8_BOM 358
#define TOK_EXCEPT 359
#define TOK_INTERSECTION 360
#define TOK_UNION 361
#define TOK_TwoDots 362
#define TOK_ThreeDots 363
#define TOK_SUCCESSORS 364
#define TOK_DESCENDANTS 365

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 114 "asn1p_y.y" /* yacc.c:355  */

	asn1p_t			*a_grammar;
	asn1p_module_flags_e	 a_module_flags;
	asn1p_module_t		*a_module;
	asn1p_expr_type_e	 a_type;	/* ASN.1 Type */
	asn1p_expr_t		*a_expr;	/* Constructed collection */
	asn1p_constraint_t	*a_constr;	/* Constraint */
	enum asn1p_constraint_type_e	a_ctype;/* Constraint type */
	asn1p_xports_t		*a_xports;	/* IMports/EXports */
	struct AssignedIdentifier a_aid;	/* Assigned Identifier */
	asn1p_oid_t		*a_oid;		/* Object Identifier */
	asn1p_oid_arc_t		 a_oid_arc;	/* Single OID's arc */
	struct asn1p_type_tag_s	 a_tag;		/* A tag */
	asn1p_ref_t		*a_ref;		/* Reference to custom type */
	asn1p_wsyntx_t		*a_wsynt;	/* WITH SYNTAX contents */
	asn1p_wsyntx_chunk_t	*a_wchunk;	/* WITH SYNTAX chunk */
	struct asn1p_ref_component_s a_refcomp;	/* Component of a reference */
	asn1p_value_t		*a_value;	/* Number, DefinedValue, etc */
	struct asn1p_param_s	 a_parg;	/* A parameter argument */
	asn1p_paramlist_t	*a_plist;	/* A pargs list */
	struct asn1p_expr_marker_s a_marker;	/* OPTIONAL/DEFAULT */
	enum asn1p_constr_pres_e a_pres;	/* PRESENT/ABSENT/OPTIONAL */
	asn1c_integer_t		 a_int;
	double			 a_dbl;
	char	*tv_str;
	struct {
		char *buf;
		int len;
	}	tv_opaque;
	struct {
		char *name;
		struct asn1p_type_tag_s tag;
	} tv_nametag;

#line 474 "asn1p_y.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE asn1p_lval;

int asn1p_parse (void **param);

#endif /* !YY_ASN1P_ASN_P_Y_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 491 "asn1p_y.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   957

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  149
/* YYNRULES -- Number of rules.  */
#define YYNRULES  346
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  529

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   123,     2,     2,     2,     2,     2,     2,
     116,   117,     2,     2,   119,     2,   124,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   118,
     125,     2,     2,     2,   126,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   121,     2,   122,   105,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,   107,   115,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     106,   108,   109,   110,   111,   112,   113
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   417,   417,   420,   426,   431,   448,   448,   477,   478,
     482,   485,   491,   497,   506,   510,   514,   524,   525,   534,
     537,   546,   549,   552,   555,   559,   580,   581,   590,   603,
     606,   623,   630,   644,   652,   651,   665,   678,   679,   682,
     692,   698,   699,   702,   707,   714,   715,   719,   723,   726,
     738,   743,   750,   756,   762,   771,   774,   780,   781,   793,
     796,   799,   807,   812,   819,   825,   831,   840,   843,   863,
     873,   893,   899,   915,   921,   929,   938,   949,   953,   961,
     969,   977,   988,   993,  1000,  1001,  1009,  1017,  1040,  1041,
    1044,  1049,  1053,  1063,  1070,  1076,  1083,  1089,  1094,  1098,
    1108,  1113,  1116,  1123,  1133,  1134,  1138,  1145,  1155,  1165,
    1176,  1186,  1197,  1207,  1218,  1230,  1231,  1238,  1237,  1246,
    1250,  1257,  1261,  1264,  1268,  1274,  1282,  1291,  1302,  1305,
    1312,  1335,  1358,  1382,  1389,  1408,  1409,  1412,  1413,  1419,
    1425,  1431,  1441,  1451,  1457,  1469,  1484,  1492,  1500,  1511,
    1522,  1544,  1552,  1561,  1565,  1570,  1579,  1584,  1589,  1597,
    1620,  1630,  1631,  1632,  1632,  1640,  1645,  1650,  1655,  1656,
    1657,  1658,  1662,  1663,  1681,  1685,  1690,  1698,  1707,  1722,
    1723,  1729,  1730,  1731,  1732,  1733,  1734,  1736,  1737,  1738,
    1739,  1740,  1741,  1748,  1749,  1750,  1754,  1760,  1765,  1770,
    1775,  1780,  1789,  1790,  1794,  1798,  1799,  1800,  1801,  1802,
    1806,  1807,  1808,  1809,  1813,  1814,  1821,  1821,  1822,  1822,
    1826,  1827,  1831,  1832,  1836,  1837,  1838,  1842,  1848,  1849,
    1858,  1858,  1860,  1863,  1867,  1868,  1874,  1885,  1886,  1892,
    1893,  1899,  1900,  1907,  1908,  1914,  1915,  1926,  1932,  1938,
    1939,  1941,  1942,  1943,  1948,  1953,  1958,  1963,  1975,  1984,
    1985,  1991,  1992,  1997,  2000,  2005,  2013,  2019,  2031,  2034,
    2040,  2041,  2041,  2042,  2044,  2057,  2062,  2068,  2082,  2083,
    2087,  2090,  2093,  2101,  2102,  2103,  2108,  2107,  2119,  2128,
    2129,  2130,  2131,  2134,  2137,  2146,  2162,  2168,  2174,  2188,
    2199,  2215,  2218,  2238,  2242,  2246,  2250,  2257,  2262,  2268,
    2277,  2282,  2289,  2297,  2307,  2312,  2319,  2327,  2337,  2352,
    2357,  2364,  2371,  2379,  2387,  2394,  2405,  2409,  2416,  2447,
    2448,  2452,  2459,  2465,  2466,  2467,  2468,  2472,  2473,  2474,
    2478,  2482,  2490,  2491,  2497,  2504,  2511
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_PPEQ", "TOK_VBracketLeft",
  "TOK_VBracketRight", "TOK_whitespace", "TOK_opaque", "TOK_bstring",
  "TOK_cstring", "TOK_hstring", "\"identifier\"", "\"number\"",
  "\"negative number\"", "TOK_realnumber", "TOK_tuple", "TOK_quadruple",
  "TOK_typereference", "TOK_capitalreference", "TOK_typefieldreference",
  "TOK_valuefieldreference", "TOK_Literal", "TOK_ExtValue_BIT_STRING",
  "TOK_ABSENT", "TOK_ABSTRACT_SYNTAX", "TOK_ALL", "TOK_ANY",
  "TOK_APPLICATION", "TOK_AUTOMATIC", "TOK_BEGIN", "TOK_BIT",
  "TOK_BMPString", "TOK_BOOLEAN", "TOK_BY", "TOK_CHARACTER", "TOK_CHOICE",
  "TOK_CLASS", "TOK_COMPONENT", "TOK_COMPONENTS", "TOK_CONSTRAINED",
  "TOK_CONTAINING", "TOK_DEFAULT", "TOK_DEFINITIONS", "TOK_DEFINED",
  "TOK_EMBEDDED", "TOK_ENCODED", "TOK_ENCODING_CONTROL", "TOK_END",
  "TOK_ENUMERATED", "TOK_EXPLICIT", "TOK_EXPORTS", "TOK_EXTENSIBILITY",
  "TOK_FALSE", "TOK_FROM", "TOK_GeneralizedTime", "TOK_GeneralString",
  "TOK_GraphicString", "TOK_IA5String", "TOK_IDENTIFIER", "TOK_IMPLICIT",
  "TOK_IMPLIED", "TOK_IMPORTS", "TOK_INCLUDES", "TOK_INSTANCE",
  "TOK_INSTRUCTIONS", "TOK_INTEGER", "TOK_ISO646String", "TOK_MAX",
  "TOK_MIN", "TOK_MINUS_INFINITY", "TOK_NULL", "TOK_NumericString",
  "TOK_OBJECT", "TOK_ObjectDescriptor", "TOK_OCTET", "TOK_OF",
  "TOK_OPTIONAL", "TOK_PATTERN", "TOK_PDV", "TOK_PLUS_INFINITY",
  "TOK_PRESENT", "TOK_PrintableString", "TOK_PRIVATE", "TOK_REAL",
  "TOK_RELATIVE_OID", "TOK_SEQUENCE", "TOK_SET", "TOK_SIZE", "TOK_STRING",
  "TOK_SYNTAX", "TOK_T61String", "TOK_TAGS", "TOK_TeletexString",
  "TOK_TRUE", "TOK_TYPE_IDENTIFIER", "TOK_UNIQUE", "TOK_UNIVERSAL",
  "TOK_UniversalString", "TOK_UTCTime", "TOK_UTF8String",
  "TOK_VideotexString", "TOK_VisibleString", "TOK_WITH",
  "\"UTF-8 byte order mark\"", "TOK_EXCEPT", "'^'", "TOK_INTERSECTION",
  "'|'", "TOK_UNION", "\"..\"", "\"...\"", "TOK_SUCCESSORS",
  "TOK_DESCENDANTS", "\"concrete TypeDeclaration\"", "'{'", "'}'", "'('",
  "')'", "';'", "','", "':'", "'['", "']'", "'!'", "'.'", "'<'", "'@'",
  "$accept", "ParsedGrammar", "ModuleList", "ModuleDefinition", "$@1",
  "optObjectIdentifier", "ObjectIdentifier", "ObjectIdentifierBody",
  "ObjectIdentifierElement", "optModuleDefinitionFlags",
  "ModuleDefinitionFlags", "ModuleDefinitionFlag", "optModuleBody",
  "ModuleBody", "AssignmentList", "Assignment", "$@2", "optImports",
  "ImportsDefinition", "optImportsBundleSet", "ImportsBundleSet",
  "AssignedIdentifier", "ImportsBundle", "ImportsBundleInt", "ImportsList",
  "ImportsElement", "ImportSelectionOption", "optExports",
  "ExportsDefinition", "ExportsBody", "ExportsElement", "ValueSet",
  "ValueSetTypeAssignment", "DefinedType", "DataTypeReference",
  "ParameterArgumentList", "ParameterArgumentName", "ActualParameterList",
  "ActualParameter", "optComponentTypeLists", "ComponentTypeLists",
  "ComponentType", "AlternativeTypeLists", "AlternativeType",
  "ObjectClass", "optUNIQUE", "FieldSpec", "ClassField", "optWithSyntax",
  "WithSyntax", "$@3", "WithSyntaxList", "WithSyntaxToken",
  "ExtensionAndException", "Type", "TaggedType", "DefinedUntaggedType",
  "UntaggedType", "MaybeIndirectTaggedType", "NSTD_IndirectMarker",
  "MaybeIndirectTypeDeclaration", "TypeDeclaration",
  "ConcreteTypeDeclaration", "ComplexTypeReference",
  "ComplexTypeReferenceAmpList", "ComplexTypeReferenceElement",
  "PrimitiveFieldReference", "FieldName", "DefinedObjectClass",
  "ValueAssignment", "Value", "$@4", "SimpleValue", "DefinedValue",
  "RestrictedCharacterStringValue", "Opaque", "OpaqueFirstToken",
  "BasicTypeId", "BasicTypeId_UniverationCompatible", "BuiltinType",
  "BasicString", "UnionMark", "IntersectionMark", "optConstraint",
  "optManyConstraints", "optSizeOrConstraint", "Constraint",
  "ManyConstraints", "ConstraintSpec", "SubtypeConstraint",
  "ElementSetSpecs", "ElementSetSpec", "Unions", "Intersections",
  "IntersectionElements", "Elements", "SubtypeElements",
  "PermittedAlphabet", "SizeConstraint", "PatternConstraint", "ValueRange",
  "LowerEndValue", "UpperEndValue", "SingleValue", "BitStringValue",
  "ContainedSubtype", "InnerTypeConstraints", "SingleTypeConstraint",
  "MultipleTypeConstraints", "FullSpecification", "PartialSpecification",
  "TypeConstraints", "NamedConstraint", "optPresenceConstraint",
  "PresenceConstraint", "GeneralConstraint", "UserDefinedConstraint",
  "$@5", "ContentsConstraint", "ConstraintRangeSpec", "TableConstraint",
  "SimpleTableConstraint", "ComponentRelationConstraint", "AtNotationList",
  "AtNotationElement", "ComponentIdList", "optMarker", "Marker",
  "IdentifierList", "IdentifierElement", "NamedNumberList", "NamedNumber",
  "NamedBitList", "NamedBit", "Enumerations", "UniverationList",
  "UniverationElement", "SignedNumber", "RealValue", "optTag", "Tag",
  "TagTypeValue", "TagClass", "TagPlicit", "TypeRefName", "optIdentifier",
  "Identifier", "IdentifierAsReference", "IdentifierAsValue", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,    94,   360,   124,   361,   362,
     363,   364,   365,   366,   123,   125,    40,    41,    59,    44,
      58,    91,    93,    33,    46,    60,    64
};
# endif

#define YYPACT_NINF -371

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-371)))

#define YYTABLE_NINF -304

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,  -371,  -371,   175,   129,   175,  -371,  -371,   175,  -371,
    -371,   -74,    70,    60,  -371,  -371,  -371,  -371,    88,  -371,
      35,   204,  -371,  -371,   154,   117,   110,   123,   148,   138,
     231,   204,  -371,   134,  -371,  -371,  -371,  -371,  -371,   230,
    -371,  -371,    69,    66,   234,  -371,   208,  -371,   160,  -371,
     102,  -371,   174,  -371,  -371,    68,   695,  -371,  -371,  -371,
     153,   183,  -371,   203,   153,  -371,   236,     5,  -371,   219,
    -371,  -371,   322,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,  -371,  -371,   695,  -371,  -371,  -371,
    -371,  -371,     9,   224,  -371,  -371,  -371,  -371,   192,  -371,
     175,   153,   238,  -371,  -371,    -6,   856,    10,   344,  -371,
     780,  -371,   120,   351,  -371,  -371,   -74,  -371,  -371,  -371,
     241,  -371,  -371,   268,  -371,   270,   281,  -371,  -371,  -371,
    -371,   302,   273,  -371,  -371,  -371,    92,  -371,   242,  -371,
    -371,   243,  -371,  -371,  -371,   353,   252,   244,   246,   253,
     328,   285,   260,   261,   313,   275,   101,   112,  -371,  -371,
     274,  -371,   277,  -371,  -371,  -371,  -371,  -371,   687,  -371,
    -371,   217,  -371,  -371,  -371,  -371,  -371,   390,   856,   153,
     153,   286,   369,  -371,   175,   295,    61,   359,   296,    62,
      22,   306,   384,   274,   109,   232,   321,  -371,  -371,   109,
     334,  -371,  -371,   274,   593,  -371,  -371,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,   287,  -371,  -371,  -371,   220,    27,
     137,  -371,    -6,  -371,  -371,  -371,  -371,  -371,  -371,   244,
     246,   308,   274,   224,  -371,   125,   290,  -371,   389,   274,
    -371,  -371,   298,   297,   222,   226,  -371,   311,  -371,  -371,
    -371,  -371,  -371,   -29,    50,  -371,  -371,  -371,  -371,  -371,
     293,  -371,  -371,  -371,  -371,   139,  -371,  -371,   384,   384,
     300,   145,  -371,  -371,  -371,  -371,   224,  -371,   303,   301,
    -371,  -371,   309,  -371,   171,  -371,   310,  -371,   349,   304,
     314,  -371,  -371,    52,   224,   394,   224,   175,   312,  -371,
    -371,  -371,  -371,  -371,  -371,   316,  -371,   384,   319,   384,
    -371,   320,  -371,   172,  -371,  -371,  -371,  -371,   282,   384,
    -371,  -371,   687,  -371,    52,    29,    52,  -371,  -371,   340,
      29,    52,   336,   217,  -371,  -371,   498,  -371,  -371,  -371,
    -371,   274,   326,   327,  -371,  -371,   335,  -371,  -371,   498,
    -371,  -371,   498,   498,   325,   338,   520,   317,  -371,   384,
    -371,   180,  -371,   333,   262,  -371,    16,   780,   274,  -371,
    -371,    22,   262,  -371,   384,   262,   224,  -371,    21,  -371,
      52,   339,  -371,   337,  -371,   329,   224,  -371,  -371,   224,
    -371,   593,  -371,   447,  -371,  -371,  -371,  -371,  -371,   324,
    -371,  -371,  -371,    52,  -371,  -371,   371,  -371,  -371,  -371,
    -371,  -371,  -371,    25,  -371,  -371,  -371,  -371,   342,   226,
    -371,  -371,  -371,   343,  -371,  -371,  -371,  -371,  -371,  -371,
     384,   265,  -371,  -371,    62,  -371,  -371,  -371,  -371,   341,
     346,  -371,   347,   348,  -371,    40,  -371,  -371,  -371,  -371,
      15,   182,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
     355,   354,   191,  -371,   274,   389,  -371,  -371,   350,   360,
      19,  -371,  -371,  -371,  -371,    24,   282,   384,   356,  -371,
    -371,   329,  -371,  -371,  -371,   384,  -371,   384,    18,  -371,
    -371,  -371,  -371,  -371,  -371,   447,   356,   384,  -371,    44,
     207,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
      44,    41,  -371,  -371,  -371,    36,  -371,  -371,  -371
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   340,   341,     0,     0,     3,     4,     6,     2,     1,
       5,     8,     0,     0,     9,   344,    16,    11,     0,    12,
      14,    17,    10,    13,     0,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    25,    23,    21,    24,    22,     0,
      20,    15,    57,     0,     0,    27,    37,    58,     0,    61,
       0,    62,    64,    66,     7,    41,     0,    38,    60,    59,
       0,     0,    40,     0,    42,    43,    48,     0,    50,    52,
      54,   202,     0,   203,   204,   205,   206,   207,   215,   208,
     209,   210,   211,   212,   213,   214,    28,    29,    33,    31,
      32,    36,   329,   329,    63,    65,    39,    44,     0,    47,
       0,     0,     0,    34,    30,   329,     0,   333,     0,   128,
       0,   330,   337,     0,    55,    56,    45,    51,    53,    35,
       0,    72,    71,     0,   181,     0,     0,   194,   190,   193,
     182,     0,     0,   183,   186,   189,     0,    75,     0,   192,
     191,    77,   335,   336,   334,     0,     0,   146,   147,     0,
     143,     0,     0,   194,     0,   193,   224,   224,   136,   129,
     222,   135,    69,   196,   137,   339,   338,   331,     0,    46,
      49,     0,   195,   188,   187,   185,   184,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,   195,   329,
       0,     0,     0,     0,   329,     0,     0,   225,   226,   329,
       0,   131,   228,   223,     0,   264,   174,   265,   326,   327,
     328,   175,   176,   166,   165,   167,   163,   160,   161,   162,
     170,   171,   168,   169,     0,   345,   346,   172,   329,   329,
       0,   106,   329,    76,    81,    80,    79,    78,   332,   146,
     147,     0,     0,   329,   260,     0,     0,   233,     0,   222,
     267,   263,     0,   234,   237,   239,   241,   243,   245,   249,
     250,   252,   253,     0,   247,   248,   251,   148,   154,   155,
     150,   151,   153,   149,   201,     0,   307,   309,     0,     0,
     125,     0,    97,   101,   102,   133,   329,   325,     0,   318,
     319,   324,   321,   145,     0,   310,     0,   255,     0,     0,
      89,    90,    96,   303,   329,     0,   329,   163,     0,   230,
     232,   231,   283,   285,   284,   293,   294,   342,     0,   342,
     229,   165,    87,     0,    82,    84,    85,    86,     0,     0,
     159,   156,     0,   305,   303,   303,   303,   108,   304,   104,
     303,   303,   115,     0,    74,    73,     0,   254,   266,   256,
     257,     0,     0,     0,   130,    67,     0,   216,   217,     0,
     218,   219,     0,     0,   289,     0,     0,     0,   200,     0,
     144,     0,   314,     0,     0,   138,   329,     0,   222,   100,
     198,     0,     0,   197,     0,     0,   329,   139,   329,    94,
     303,     0,   288,     0,   227,     0,   329,   343,   140,   329,
      70,     0,   179,   164,   177,   180,   173,   306,   113,     0,
     112,   114,   105,   303,   110,   111,     0,   103,   116,   107,
     238,   270,   268,     0,   269,   271,   272,   246,   235,   240,
     242,   244,   290,   291,   262,   258,   261,   152,   308,   199,
       0,     0,   126,   127,   329,    98,   134,   132,   320,     0,
       0,   311,     0,     0,    95,   329,    91,    93,   286,   295,
       0,     0,   297,   133,   133,    83,   178,   157,   158,   109,
       0,     0,     0,   275,   220,     0,   292,   315,     0,     0,
       0,   323,   322,   313,   312,     0,     0,     0,   299,   301,
     296,     0,   141,   142,   117,     0,   273,     0,   278,   221,
     236,   316,   317,    99,    92,   287,   300,     0,   298,     0,
       0,   276,   281,   282,   280,   277,   279,   302,   121,   122,
       0,     0,   119,   123,   274,     0,   118,   120,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -371,  -371,   467,    82,  -371,  -371,   362,  -371,   454,  -371,
    -371,   450,  -371,  -371,  -371,   398,  -371,  -371,  -371,  -371,
    -371,  -371,   422,  -371,  -371,   386,  -371,  -371,  -371,  -371,
     428,   352,  -371,  -109,  -371,  -371,   315,  -371,    89,   305,
      34,   104,    53,   118,   264,  -371,  -371,   156,  -371,  -371,
    -371,   -20,  -294,  -174,   -83,  -371,  -371,   391,  -182,  -371,
    -114,   140,  -371,   330,  -371,   135,  -167,   289,   291,  -371,
    -159,  -371,  -191,  -176,  -371,    33,  -371,   -68,  -371,  -371,
      47,  -371,  -371,  -371,  -226,   365,  -154,  -371,  -371,  -371,
     331,  -240,  -371,   164,   162,  -245,  -371,  -371,   195,  -371,
    -371,  -371,  -371,   159,  -371,  -371,  -371,  -371,  -371,  -371,
    -371,    32,    42,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,    49,    54,  -227,  -371,  -371,   173,
    -371,   161,  -371,   103,  -371,  -371,   163,  -169,  -371,   -88,
    -371,  -371,  -371,  -371,    11,   227,   -12,  -371,  -370
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    11,    13,    14,    18,    19,    30,
      31,    32,    44,    45,    86,    87,   119,    56,    57,    63,
      64,   170,    65,    66,    67,    68,    99,    46,    47,    50,
      51,   322,    88,   249,    89,   136,   137,   323,   324,   299,
     300,   301,   281,   282,   121,   413,   230,   231,   417,   418,
     509,   521,   522,   302,   108,   109,   250,   325,   303,   377,
     378,   160,   161,   162,   270,   271,   523,   335,   336,    90,
     251,   328,   218,   219,   220,   403,   404,   163,   139,   164,
     140,   359,   362,   498,   201,   196,   202,   203,   308,   309,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   435,   264,   221,   265,   266,   422,   424,   425,
     426,   472,   473,   515,   516,   311,   312,   486,   313,   366,
     314,   315,   316,   461,   462,   488,   337,   338,   275,   276,
     294,   295,   371,   372,   288,   289,   290,   222,   223,   285,
     111,   112,   145,   167,   224,   396,   225,   226,   227
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   158,   197,   197,   110,   110,    20,   284,   353,   217,
     113,     7,   105,   326,     7,   283,     7,   110,   272,     7,
     444,   291,   122,   354,   503,   455,    15,    15,   327,   504,
     120,    53,    15,    15,   208,   209,    15,   142,   138,   297,
      12,   512,   518,    70,    93,   330,   331,   518,    53,   320,
     518,    15,    70,   474,    52,   268,   269,   519,   100,   298,
     268,   269,   519,   268,   269,   519,    69,    92,     1,     2,
     332,    52,    15,    15,    93,    69,   389,    15,   298,    15,
     364,    15,    16,     1,     2,     1,     2,    10,   347,    70,
      10,    48,   143,   332,   513,   158,   365,    92,   514,    15,
      16,   420,    21,    91,   379,   333,   144,   408,   410,   411,
     138,   116,    69,   414,   415,   107,   -26,   141,   431,    43,
      15,    62,   390,   106,   101,   474,   280,   474,   333,     9,
     107,   280,   287,    91,   349,   471,    15,   107,   376,   487,
     110,   110,   107,   388,   110,   334,   339,   298,   107,   345,
     280,    24,   447,   409,     3,   110,   526,   520,   528,  -259,
     348,   107,   520,   457,    15,   520,    33,   235,   237,   165,
       1,     2,   280,   407,   277,  -259,   274,   286,   292,   166,
     296,    34,   304,   107,    49,    17,   469,   304,   193,   141,
     234,   236,     1,     2,   284,   267,   273,   421,   442,   193,
     272,    35,   283,    22,   454,   443,   449,   177,    37,   452,
     326,   178,   291,   450,    36,   194,   453,   195,   110,   280,
      59,    60,    25,   392,   -88,   327,   199,   527,   195,    38,
     107,   527,    26,   350,    39,   500,   228,   229,   330,   331,
     205,   206,   207,    15,   208,   209,   210,   211,   212,   239,
     240,    41,   342,    27,   368,    28,   343,   241,   369,    42,
     375,   332,   284,    29,   376,   479,   370,   373,   158,    55,
     283,   305,   306,    15,   208,   209,    15,   478,    58,     1,
       2,    54,     1,     2,   213,   242,   383,   400,    61,   402,
     384,   401,   158,    15,   243,   439,   333,   490,    95,   440,
     244,   491,   214,   114,   115,   397,   496,   397,   463,   245,
     497,   464,     1,     2,   268,   269,   405,   406,   393,   193,
     499,    96,   524,   147,   148,   215,   497,   351,   352,   357,
     358,   360,   361,   102,   246,  -303,   268,   269,    98,  -303,
     103,   107,   247,   467,   468,   107,   307,   146,   248,   492,
     493,   198,   198,   118,   168,   171,   172,   277,   173,   174,
     175,   176,   179,   180,   286,   181,   182,   186,   184,   292,
     185,   187,   296,   188,   189,   190,   304,   205,   206,   207,
      15,   208,   209,   210,   211,   212,   239,   240,   191,   192,
     195,   204,   278,   232,   241,    15,   317,   205,   206,   207,
      15,   208,   209,   210,   211,   212,   239,   240,   238,   319,
     279,   329,   346,   355,   241,   363,   356,   367,   380,   387,
     381,   213,   242,   374,   386,   382,   385,   391,   373,   394,
     395,   243,   286,   388,   398,   412,  -182,   244,   416,   214,
     423,   213,   242,   304,   427,   428,   245,   433,   489,   441,
     432,   243,   459,   458,   466,   460,   193,   244,   481,   214,
     470,   475,   215,   482,   483,   484,   245,   501,   476,   494,
       8,   246,    23,   495,   405,   489,   193,   502,   169,   247,
     507,    40,   215,   216,   104,   248,    97,   117,    94,   485,
     465,   246,   456,   233,   445,   517,   344,   480,   183,   419,
     525,   159,   437,   216,   318,   248,   205,   206,   207,    15,
     208,   209,   210,   211,   212,   239,   240,   446,   340,   505,
     341,   293,   200,   429,   430,   436,   310,   510,   205,   206,
     207,    15,   208,   209,   210,   211,   212,     1,     2,   511,
     508,   506,   438,   477,   448,   451,   399,     0,     0,     0,
     213,   242,     0,     0,     0,     0,     0,     0,     0,     0,
     243,     0,     0,     0,     0,     0,   244,     0,   214,     0,
       0,     0,   213,     0,     0,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,     0,   434,     0,     0,
     214,   215,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   205,   206,   207,    15,   208,   209,   210,   211,   212,
     239,   240,   216,   215,   248,   149,     0,     0,     0,   150,
       0,     0,     0,   151,    71,   124,     0,   125,   152,     0,
       0,     0,     0,     0,   216,     0,     0,   126,     0,     0,
       0,   153,     0,     0,     0,   213,     0,   128,    73,    74,
      75,     0,     0,     0,     0,     0,   154,     0,   155,    76,
       0,     0,     0,   321,    77,   131,    78,   132,     0,     0,
       0,     0,     0,     0,    79,     0,   133,   134,   156,   157,
       0,     0,     0,    80,     0,    81,   215,     0,     0,     0,
      82,   135,    83,    84,    85,   205,   206,   207,    15,   208,
     209,   210,   211,   212,     1,     2,    15,   182,     0,     0,
       0,     0,     1,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,     0,     0,     0,     0,   214,     0,     0,
       0,    76,     0,     0,     0,     0,    77,     0,    78,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
     215,     0,     0,     0,     0,    80,     0,    81,     0,     0,
       0,     0,    82,     0,    83,    84,    85,   147,   148,     0,
       0,   216,   149,     0,     0,     0,   150,     0,     0,     0,
     151,    71,   124,     0,   125,   152,     0,     0,     0,     0,
       0,     0,     0,     0,   126,     0,     0,     0,   153,     0,
       0,     0,     0,     0,   128,    73,    74,    75,     0,     0,
       0,     0,     0,   154,     0,   155,    76,     0,     0,     0,
     130,    77,   131,    78,   132,     0,     0,     0,     0,     0,
       0,    79,     0,   133,   134,   156,   157,     0,     0,     0,
      80,     0,    81,     1,     2,     0,     0,    82,   135,    83,
      84,    85,     0,     0,     0,     0,   123,    71,   124,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,   127,     0,     0,     0,     0,     0,
     128,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,   129,    76,     0,     0,     0,   130,    77,   131,    78,
     132,     0,     0,     0,     0,     0,     0,    79,     0,   133,
     134,     0,     0,     0,     0,     0,    80,     0,    81,     0,
       0,     0,     0,    82,   135,    83,    84,    85
};

static const yytype_int16 yycheck[] =
{
      12,   110,   156,   157,    92,    93,    18,   189,   248,   168,
      93,     0,     3,   204,     3,   189,     5,   105,   185,     8,
       4,   190,   105,   249,     5,     4,    11,    11,   204,     5,
      36,    43,    11,    11,    12,    13,    11,    27,   106,   193,
     114,    23,     6,    55,    56,    18,    19,     6,    60,   203,
       6,    11,    64,   423,    43,    19,    20,    21,    53,    38,
      19,    20,    21,    19,    20,    21,    55,    56,    17,    18,
      41,    60,    11,    11,    86,    64,   303,    11,    38,    11,
     109,    11,    12,    17,    18,    17,    18,     5,   242,   101,
       8,    25,    82,    41,    76,   204,   125,    86,    80,    11,
      12,   346,    42,    56,   286,    76,    96,   334,   335,   336,
     178,   100,   101,   340,   341,   121,    47,   106,   363,    50,
      11,    53,   304,   114,   119,   495,   110,   497,    76,     0,
     121,   110,   110,    86,     9,   110,    11,   121,   119,   124,
     228,   229,   121,   119,   232,   228,   229,    38,   121,   232,
     110,   116,   378,   124,   103,   243,   115,   121,   122,   109,
     243,   121,   121,   390,    11,   121,    12,   179,   180,    49,
      17,    18,   110,   332,   186,   125,   115,   189,   190,    59,
     192,    64,   194,   121,   118,   115,   413,   199,    87,   178,
     179,   180,    17,    18,   376,   184,   185,   351,   374,    87,
     367,    91,   376,   115,   386,   374,   382,   115,    60,   385,
     401,   119,   381,   382,    91,   114,   385,   116,   306,   110,
     118,   119,    18,   306,   115,   401,   114,   521,   116,    91,
     121,   525,    28,   245,     3,   475,    19,    20,    18,    19,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   117,   115,    49,   115,    51,   119,    25,   119,    29,
     115,    41,   444,    59,   119,   441,   278,   279,   377,    61,
     444,    39,    40,    11,    12,    13,    11,    12,   118,    17,
      18,    47,    17,    18,    52,    53,   115,   115,   114,     7,
     119,   119,   401,    11,    62,   115,    76,   115,   115,   119,
      68,   119,    70,   111,   112,   317,   115,   319,   396,    77,
     119,   399,    17,    18,    19,    20,   328,   329,   307,    87,
     474,   118,   115,    17,    18,    93,   119,    37,    38,   107,
     108,   105,   106,   114,   102,   115,    19,    20,   102,   119,
      18,   121,   110,    19,    20,   121,   114,     3,   116,   463,
     464,   156,   157,   115,     3,   114,    88,   369,    88,    78,
      58,    88,   120,   120,   376,    12,   114,   114,   124,   381,
     124,    43,   384,    88,   114,   114,   388,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    75,   114,
     116,   114,    33,     3,    25,    11,    75,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   122,    75,
     114,   124,   104,   115,    25,   104,   119,   124,   115,   115,
     119,    52,    53,   123,    75,   116,   116,    33,   440,   117,
     114,    62,   444,   119,   115,    95,   116,    68,   102,    70,
     114,    52,    53,   455,   117,   110,    77,   109,   460,   116,
     125,    62,   115,   114,     7,   126,    87,    68,   117,    70,
      89,   119,    93,   117,   117,   117,    77,   117,   125,   114,
       3,   102,    18,   119,   486,   487,    87,   117,   116,   110,
     124,    31,    93,   114,    86,   116,    64,   101,    60,   455,
     401,   102,   388,   178,   376,   507,   232,   444,   146,   343,
     520,   110,   367,   114,   199,   116,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   377,   229,   486,
     229,   191,   157,   359,   362,   366,   195,   495,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   497,
     491,   487,   369,   440,   381,   384,   319,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    -1,    52,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    67,    -1,    -1,
      70,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   114,    93,   116,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    30,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    44,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    -1,    92,    93,    -1,    -1,    -1,
      97,    98,    99,   100,   101,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    11,   114,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    90,    -1,    92,    -1,    -1,
      -1,    -1,    97,    -1,    99,   100,   101,    17,    18,    -1,
      -1,   114,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      30,    31,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,    -1,
      90,    -1,    92,    17,    18,    -1,    -1,    97,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    17,    18,   103,   128,   129,   130,   271,   129,     0,
     130,   131,   114,   132,   133,    11,    12,   115,   134,   135,
     273,    42,   115,   135,   116,    18,    28,    49,    51,    59,
     136,   137,   138,    12,    64,    91,    91,    60,    91,     3,
     138,   117,    29,    50,   139,   140,   154,   155,    25,   118,
     156,   157,   271,   273,    47,    61,   144,   145,   118,   118,
     119,   114,    53,   146,   147,   149,   150,   151,   152,   271,
     273,    31,    46,    55,    56,    57,    66,    71,    73,    81,
      90,    92,    97,    99,   100,   101,   141,   142,   159,   161,
     196,   207,   271,   273,   157,   115,   118,   149,   102,   153,
      53,   119,   114,    18,   142,     3,   114,   121,   181,   182,
     266,   267,   268,   181,   111,   112,   271,   152,   115,   143,
      36,   171,   181,    30,    32,    34,    44,    48,    54,    65,
      70,    72,    74,    83,    84,    98,   162,   163,   204,   205,
     207,   271,    27,    82,    96,   269,     3,    17,    18,    22,
      26,    30,    35,    48,    63,    65,    85,    86,   160,   184,
     188,   189,   190,   204,   206,    49,    59,   270,     3,   133,
     148,   114,    88,    88,    78,    58,    88,   115,   119,   120,
     120,    12,   114,   158,   124,   124,   114,    43,    88,   114,
     114,    75,   114,    87,   114,   116,   212,   213,   225,   114,
     212,   211,   213,   214,   114,     8,     9,    10,    12,    13,
      14,    15,    16,    52,    70,    93,   114,   197,   199,   200,
     201,   231,   264,   265,   271,   273,   274,   275,    19,    20,
     173,   174,     3,   163,   271,   273,   271,   273,   122,    17,
      18,    25,    53,    62,    68,    77,   102,   110,   116,   160,
     183,   197,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   230,   232,   233,   271,    19,    20,
     191,   192,   193,   271,   115,   255,   256,   273,    33,   114,
     110,   169,   170,   180,   185,   266,   273,   110,   261,   262,
     263,   264,   273,   190,   257,   258,   273,   213,    38,   166,
     167,   168,   180,   185,   273,    39,    40,   114,   215,   216,
     217,   242,   243,   245,   247,   248,   249,    75,   166,    75,
     213,    70,   158,   164,   165,   184,   199,   200,   198,   124,
      18,    19,    41,    76,   181,   194,   195,   253,   254,   181,
     194,   195,   115,   119,   171,   181,   104,   213,   181,     9,
     273,    37,    38,   218,   211,   115,   119,   107,   108,   208,
     105,   106,   209,   104,   109,   125,   246,   124,   115,   119,
     273,   259,   260,   273,   123,   115,   119,   186,   187,   185,
     115,   119,   116,   115,   119,   116,    75,   115,   119,   253,
     185,    33,   181,   271,   117,   114,   272,   273,   115,   272,
     115,   119,     7,   202,   203,   273,   273,   197,   253,   124,
     253,   253,    95,   172,   253,   253,   102,   175,   176,   174,
     222,   213,   234,   114,   235,   236,   237,   117,   110,   220,
     221,   222,   125,   109,    67,   229,   230,   192,   256,   115,
     119,   116,   200,   264,     4,   170,   188,   211,   263,   200,
     264,   258,   200,   264,   185,     4,   168,   253,   114,   115,
     126,   250,   251,   266,   266,   165,     7,    19,    20,   253,
      89,   110,   238,   239,   275,   119,   125,   260,    12,   200,
     169,   117,   117,   117,   117,   167,   244,   124,   252,   273,
     115,   119,   187,   187,   114,   119,   115,   119,   210,   213,
     218,   117,   117,     5,     5,   202,   252,   124,   251,   177,
     238,   239,    23,    76,    80,   240,   241,   273,     6,    21,
     121,   178,   179,   193,   115,   178,   115,   179,   122
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   131,   130,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   139,   139,   140,   141,
     141,   142,   142,   142,   143,   142,   142,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     151,   151,   152,   152,   152,   153,   153,   154,   154,   155,
     155,   155,   156,   156,   157,   157,   157,   158,   159,   160,
     160,   161,   161,   161,   161,   162,   162,   163,   163,   163,
     163,   163,   164,   164,   165,   165,   165,   165,   166,   166,
     167,   167,   167,   168,   168,   168,   168,   169,   169,   169,
     170,   170,   170,   171,   172,   172,   173,   173,   174,   174,
     174,   174,   174,   174,   174,   175,   175,   177,   176,   178,
     178,   179,   179,   179,   179,   180,   180,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   188,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   190,
     190,   191,   191,   192,   193,   193,   194,   194,   194,   195,
     196,   197,   197,   198,   197,   199,   199,   199,   199,   199,
     199,   199,   200,   200,   201,   201,   201,   202,   202,   203,
     203,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   205,   205,   205,   206,   206,   206,   206,
     206,   206,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   212,   212,   213,   214,   214,
     215,   215,   216,   217,   217,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   223,
     223,   223,   223,   223,   224,   225,   226,   226,   227,   228,
     228,   229,   229,   230,   231,   231,   232,   232,   233,   233,
     234,   235,   235,   236,   237,   238,   238,   239,   240,   240,
     241,   241,   241,   242,   242,   242,   244,   243,   245,   246,
     246,   246,   246,   247,   247,   248,   249,   250,   250,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   262,
     262,   263,   263,   263,   263,   263,   264,   264,   265,   266,
     266,   267,   268,   269,   269,   269,   269,   270,   270,   270,
     271,   271,   272,   272,   273,   274,   275
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     0,     9,     0,     1,
       3,     2,     1,     2,     1,     4,     1,     0,     1,     1,
       2,     2,     2,     2,     2,     2,     0,     1,     3,     1,
       2,     1,     1,     1,     0,     3,     1,     0,     1,     3,
       2,     0,     1,     1,     2,     0,     1,     2,     1,     4,
       1,     3,     1,     3,     1,     2,     2,     0,     1,     3,
       3,     2,     1,     3,     1,     3,     1,     3,     4,     1,
       4,     3,     3,     6,     6,     1,     3,     1,     3,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     0,     1,
       1,     3,     5,     3,     2,     3,     1,     1,     3,     5,
       2,     1,     1,     5,     0,     1,     1,     3,     2,     4,
       3,     3,     3,     3,     3,     0,     1,     0,     6,     1,
       2,     1,     1,     1,     3,     1,     3,     3,     1,     2,
       2,     2,     3,     0,     2,     1,     1,     1,     4,     4,
       4,     6,     6,     1,     4,     3,     1,     1,     3,     3,
       3,     1,     3,     1,     1,     1,     1,     3,     3,     1,
       4,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     4,     4,     5,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     3,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       1,     1,     1,     3,     5,     1,     3,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     2,     1,
       2,     2,     3,     1,     1,     3,     4,     1,     3,     2,
       3,     1,     3,     0,     1,     1,     2,     1,     3,     1,
       1,     3,     4,     4,     1,     3,     4,     4,     1,     1,
       3,     1,     4,     4,     1,     1,     1,     1,     1,     0,
       1,     2,     4,     0,     1,     1,     1,     0,     1,     1,
       1,     1,     0,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      yyerror (param, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, param); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void **param)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (param);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void **param)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, param);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, void **param)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , param);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, param); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void **param)
{
  YYUSE (yyvaluep);
  YYUSE (param);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void **param)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
        case 2:
#line 417 "asn1p_y.y" /* yacc.c:1646  */
    {
		*(void **)param = (yyvsp[0].a_grammar);
	}
#line 2130 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 3:
#line 420 "asn1p_y.y" /* yacc.c:1646  */
    {
		*(void **)param = (yyvsp[0].a_grammar);
	}
#line 2138 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 4:
#line 426 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_grammar) = asn1p_new();
		checkmem((yyval.a_grammar));
		TQ_ADD(&((yyval.a_grammar)->modules), (yyvsp[0].a_module), mod_next);
	}
#line 2148 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 5:
#line 431 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_grammar) = (yyvsp[-1].a_grammar);
		TQ_ADD(&((yyval.a_grammar)->modules), (yyvsp[0].a_module), mod_next);
	}
#line 2157 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 6:
#line 448 "asn1p_y.y" /* yacc.c:1646  */
    { currentModule = asn1p_module_new(); }
#line 2163 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 7:
#line 453 "asn1p_y.y" /* yacc.c:1646  */
    {

		(yyval.a_module) = currentModule;

		if((yyvsp[-1].a_module)) {
			asn1p_module_t tmp = *((yyval.a_module));
			*((yyval.a_module)) = *((yyvsp[-1].a_module));
			*((yyvsp[-1].a_module)) = tmp;
			asn1p_module_free((yyvsp[-1].a_module));
		} else {
			/* There's a chance that a module is just plain empty */
		}

		(yyval.a_module)->ModuleName = (yyvsp[-8].tv_str);
		(yyval.a_module)->module_oid = (yyvsp[-6].a_oid);
		(yyval.a_module)->module_flags = (yyvsp[-4].a_module_flags);
	}
#line 2185 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 8:
#line 477 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_oid) = 0; }
#line 2191 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 9:
#line 478 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_oid) = (yyvsp[0].a_oid); }
#line 2197 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 10:
#line 482 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = (yyvsp[-1].a_oid);
	}
#line 2205 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 11:
#line 485 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = 0;
	}
#line 2213 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 12:
#line 491 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = asn1p_oid_new();
		asn1p_oid_add_arc((yyval.a_oid), &(yyvsp[0].a_oid_arc));
		if((yyvsp[0].a_oid_arc).name)
			free((yyvsp[0].a_oid_arc).name);
	}
#line 2224 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 13:
#line 497 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = (yyvsp[-1].a_oid);
		asn1p_oid_add_arc((yyval.a_oid), &(yyvsp[0].a_oid_arc));
		if((yyvsp[0].a_oid_arc).name)
			free((yyvsp[0].a_oid_arc).name);
	}
#line 2235 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 14:
#line 506 "asn1p_y.y" /* yacc.c:1646  */
    {					/* iso */
		(yyval.a_oid_arc).name = (yyvsp[0].tv_str);
		(yyval.a_oid_arc).number = -1;
	}
#line 2244 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 15:
#line 510 "asn1p_y.y" /* yacc.c:1646  */
    {		/* iso(1) */
		(yyval.a_oid_arc).name = (yyvsp[-3].tv_str);
		(yyval.a_oid_arc).number = (yyvsp[-1].a_int);
	}
#line 2253 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 16:
#line 514 "asn1p_y.y" /* yacc.c:1646  */
    {					/* 1 */
		(yyval.a_oid_arc).name = 0;
		(yyval.a_oid_arc).number = (yyvsp[0].a_int);
	}
#line 2262 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 17:
#line 524 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module_flags) = MSF_NOFLAGS; }
#line 2268 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 18:
#line 525 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = (yyvsp[0].a_module_flags);
	}
#line 2276 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 19:
#line 534 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = (yyvsp[0].a_module_flags);
	}
#line 2284 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 20:
#line 537 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = (yyvsp[-1].a_module_flags) | (yyvsp[0].a_module_flags);
	}
#line 2292 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 21:
#line 546 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_EXPLICIT_TAGS;
	}
#line 2300 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 22:
#line 549 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_IMPLICIT_TAGS;
	}
#line 2308 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 23:
#line 552 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_AUTOMATIC_TAGS;
	}
#line 2316 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 24:
#line 555 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_EXTENSIBILITY_IMPLIED;
	}
#line 2324 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 25:
#line 559 "asn1p_y.y" /* yacc.c:1646  */
    {
		/* X.680Amd1 specifies TAG and XER */
		if(strcmp((yyvsp[-1].tv_str), "TAG") == 0) {
		 	(yyval.a_module_flags) = MSF_TAG_INSTRUCTIONS;
		} else if(strcmp((yyvsp[-1].tv_str), "XER") == 0) {
		 	(yyval.a_module_flags) = MSF_XER_INSTRUCTIONS;
		} else {
			fprintf(stderr,
				"WARNING: %s INSTRUCTIONS at %s:%d: "
				"Unrecognized encoding reference\n",
				(yyvsp[-1].tv_str), ASN_FILENAME, yylineno);
		 	(yyval.a_module_flags) = MSF_unk_INSTRUCTIONS;
		}
		free((yyvsp[-1].tv_str));
	}
#line 2344 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 26:
#line 580 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = 0; }
#line 2350 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 27:
#line 581 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = (yyvsp[0].a_module);
	}
#line 2358 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 28:
#line 590 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		AL_IMPORT((yyval.a_module), exports, (yyvsp[-2].a_module), xp_next);
		AL_IMPORT((yyval.a_module), imports, (yyvsp[-1].a_module), xp_next);
		asn1p_module_move_members((yyval.a_module), (yyvsp[0].a_module));

		asn1p_module_free((yyvsp[-2].a_module));
		asn1p_module_free((yyvsp[-1].a_module));
		asn1p_module_free((yyvsp[0].a_module));
	}
#line 2373 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 29:
#line 603 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = (yyvsp[0].a_module);
	}
#line 2381 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 30:
#line 606 "asn1p_y.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].a_module)) {
			(yyval.a_module) = (yyvsp[-1].a_module);
		} else {
			(yyval.a_module) = (yyvsp[0].a_module);
			break;
		}
        asn1p_module_move_members((yyval.a_module), (yyvsp[0].a_module));
		asn1p_module_free((yyvsp[0].a_module));
	}
#line 2396 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 31:
#line 623 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[0].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[0].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[0].a_expr));
	}
#line 2408 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 32:
#line 630 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[0].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[0].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[0].a_expr));
	}
#line 2420 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 33:
#line 644 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[0].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[0].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[0].a_expr));
	}
#line 2432 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 34:
#line 652 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_push_encoding_control(); }
#line 2438 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 35:
#line 653 "asn1p_y.y" /* yacc.c:1646  */
    {
		fprintf(stderr,
			"WARNING: ENCODING-CONTROL %s "
			"specification at %s:%d ignored\n",
			(yyvsp[-1].tv_str), ASN_FILENAME, yylineno);
		free((yyvsp[-1].tv_str));
		(yyval.a_module) = 0;
	}
#line 2451 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 36:
#line 665 "asn1p_y.y" /* yacc.c:1646  */
    {
		return yyerror(param,
			"Attempt to redefine a standard basic string type, "
			"please comment out or remove this type redefinition.");
	}
#line 2461 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 37:
#line 678 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = 0; }
#line 2467 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 39:
#line 682 "asn1p_y.y" /* yacc.c:1646  */
    {
		if(!saved_aid && 0)
			return yyerror(param, "Unterminated IMPORTS FROM, "
					"expected semicolon ';'");
		saved_aid = 0;
		(yyval.a_module) = (yyvsp[-1].a_module);
	}
#line 2479 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 40:
#line 692 "asn1p_y.y" /* yacc.c:1646  */
    {
		return yyerror(param, "Empty IMPORTS list");
	}
#line 2487 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 41:
#line 698 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = asn1p_module_new(); }
#line 2493 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 43:
#line 702 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		TQ_ADD(&((yyval.a_module)->imports), (yyvsp[0].a_xports), xp_next);
	}
#line 2503 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 44:
#line 707 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = (yyvsp[-1].a_module);
		TQ_ADD(&((yyval.a_module)->imports), (yyvsp[0].a_xports), xp_next);
	}
#line 2512 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 45:
#line 714 "asn1p_y.y" /* yacc.c:1646  */
    { memset(&(yyval.a_aid), 0, sizeof((yyval.a_aid))); }
#line 2518 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 46:
#line 715 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_aid).oid = (yyvsp[0].a_oid); }
#line 2524 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 47:
#line 719 "asn1p_y.y" /* yacc.c:1646  */
    {
      (yyval.a_xports) = (yyvsp[-1].a_xports);
      (yyval.a_xports)->option = (yyvsp[0].a_int);
    }
#line 2533 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 49:
#line 726 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-3].a_xports);
		(yyval.a_xports)->fromModuleName = (yyvsp[-1].tv_str);
		(yyval.a_xports)->identifier = (yyvsp[0].a_aid);
		(yyval.a_xports)->option = 0;
		/* This stupid thing is used for look-back hack. */
		saved_aid = (yyval.a_xports)->identifier.oid ? 0 : &((yyval.a_xports)->identifier);
		checkmem((yyval.a_xports));
	}
#line 2547 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 50:
#line 738 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = asn1p_xports_new();
		checkmem((yyval.a_xports));
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2557 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 51:
#line 743 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-2].a_xports);
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2566 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 52:
#line 750 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	}
#line 2577 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 53:
#line 756 "asn1p_y.y" /* yacc.c:1646  */
    {		/* Completely equivalent to above */
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	}
#line 2588 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 54:
#line 762 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	}
#line 2599 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 55:
#line 771 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_int) = XPT_WITH_SUCCESSORS;
	}
#line 2607 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 56:
#line 774 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_int) = XPT_WITH_DESCENDANTS;
	}
#line 2615 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 57:
#line 780 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = 0; }
#line 2621 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 58:
#line 781 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		if((yyvsp[0].a_xports)) {
			TQ_ADD(&((yyval.a_module)->exports), (yyvsp[0].a_xports), xp_next);
		} else {
			/* "EXPORTS ALL;" */
		}
	}
#line 2635 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 59:
#line 793 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-1].a_xports);
	}
#line 2643 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 60:
#line 796 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = 0;
	}
#line 2651 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 61:
#line 799 "asn1p_y.y" /* yacc.c:1646  */
    {
		/* Empty EXPORTS clause effectively prohibits export. */
		(yyval.a_xports) = asn1p_xports_new();
		checkmem((yyval.a_xports));
	}
#line 2661 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 62:
#line 807 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = asn1p_xports_new();
		assert((yyval.a_xports));
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2671 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 63:
#line 812 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-2].a_xports);
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2680 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 64:
#line 819 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	}
#line 2691 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 65:
#line 825 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	}
#line 2702 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 66:
#line 831 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	}
#line 2713 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 67:
#line 840 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = (yyvsp[-1].a_constr); }
#line 2719 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 68:
#line 843 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->meta_type = AMT_VALUESET;
		(yyval.a_expr)->constraints = (yyvsp[0].a_constr);
	}
#line 2731 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 69:
#line 863 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[0].a_ref);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_TYPEREF;
	}
#line 2743 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 70:
#line 873 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[-3].a_ref);
		(yyval.a_expr)->rhs_pspecs = (yyvsp[-1].a_expr);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_TYPEREF;
	}
#line 2756 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 71:
#line 893 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		assert((yyval.a_expr)->expr_type);
		assert((yyval.a_expr)->meta_type);
	}
#line 2767 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 72:
#line 899 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		assert((yyval.a_expr)->expr_type == A1TC_CLASSDEF);
		assert((yyval.a_expr)->meta_type == AMT_OBJECTCLASS);
	}
#line 2778 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 73:
#line 915 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-5].tv_str);
		(yyval.a_expr)->lhs_params = (yyvsp[-3].a_plist);
	}
#line 2788 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 74:
#line 921 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-5].tv_str);
		(yyval.a_expr)->lhs_params = (yyvsp[-3].a_plist);
	}
#line 2798 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 75:
#line 929 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_plist) = asn1p_paramlist_new(yylineno);
		checkmem((yyval.a_plist));
		ret = asn1p_paramlist_add_param((yyval.a_plist), (yyvsp[0].a_parg).governor, (yyvsp[0].a_parg).argument);
		checkmem(ret == 0);
		asn1p_ref_free((yyvsp[0].a_parg).governor);
		free((yyvsp[0].a_parg).argument);
	}
#line 2812 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 76:
#line 938 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_plist) = (yyvsp[-2].a_plist);
		ret = asn1p_paramlist_add_param((yyval.a_plist), (yyvsp[0].a_parg).governor, (yyvsp[0].a_parg).argument);
		checkmem(ret == 0);
		asn1p_ref_free((yyvsp[0].a_parg).governor);
		free((yyvsp[0].a_parg).argument);
	}
#line 2825 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 77:
#line 949 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_parg).governor = NULL;
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
	}
#line 2834 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 78:
#line 953 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor, (yyvsp[-2].tv_str), 0);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
		free((yyvsp[-2].tv_str));
	}
#line 2847 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 79:
#line 961 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor, (yyvsp[-2].tv_str), 0);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
		free((yyvsp[-2].tv_str));
	}
#line 2860 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 80:
#line 969 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor,
			ASN_EXPR_TYPE2STR((yyvsp[-2].a_type)), 1);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
	}
#line 2873 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 81:
#line 977 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor,
			ASN_EXPR_TYPE2STR((yyvsp[-2].a_type)), 1);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
	}
#line 2886 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 82:
#line 988 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2896 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 83:
#line 993 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2905 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1001 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("?");
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 2918 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1009 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("?");
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 2931 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1017 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->expr_type = A1TC_VALUESET;
		(yyval.a_expr)->meta_type = AMT_VALUESET;
		(yyval.a_expr)->constraints = (yyvsp[0].a_constr);
	}
#line 2942 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1040 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_expr) = NEW_EXPR(); }
#line 2948 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1041 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_expr) = (yyvsp[0].a_expr); }
#line 2954 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1044 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2964 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1049 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2973 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1053 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-4].a_expr);
		(yyvsp[-1].a_expr)->meta_type = AMT_TYPE;
		(yyvsp[-1].a_expr)->expr_type = ASN_CONSTR_SEQUENCE;
		(yyvsp[-1].a_expr)->marker.flags |= EM_OPTIONAL;
		asn1p_expr_add((yyval.a_expr), (yyvsp[-1].a_expr));
	}
#line 2985 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1063 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyvsp[0].a_marker).flags |= (yyval.a_expr)->marker.flags;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 2997 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1070 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		(yyvsp[0].a_marker).flags |= (yyval.a_expr)->marker.flags;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
		_fixup_anonymous_identifier((yyval.a_expr));
	}
#line 3008 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1076 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->meta_type = (yyvsp[0].a_expr)->meta_type;
		(yyval.a_expr)->expr_type = A1TC_COMPONENTS_OF;
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3020 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1083 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
	}
#line 3028 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1089 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3038 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1094 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3047 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1098 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-4].a_expr);
		(yyvsp[-1].a_expr)->meta_type = AMT_TYPE;
		(yyvsp[-1].a_expr)->expr_type = ASN_CONSTR_SEQUENCE;
		(yyvsp[-1].a_expr)->marker.flags |= EM_OPTIONAL;
		asn1p_expr_add((yyval.a_expr), (yyvsp[-1].a_expr));
	}
#line 3059 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1108 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[-1].tv_str);
	}
#line 3069 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1113 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
	}
#line 3077 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1116 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		_fixup_anonymous_identifier((yyval.a_expr));
	}
#line 3086 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1123 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		checkmem((yyval.a_expr));
		(yyval.a_expr)->with_syntax = (yyvsp[0].a_wsynt);
		assert((yyval.a_expr)->expr_type == A1TC_CLASSDEF);
		assert((yyval.a_expr)->meta_type == AMT_OBJECTCLASS);
	}
#line 3098 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1133 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_int) = 0; }
#line 3104 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1134 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_int) = 1; }
#line 3110 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1138 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_CLASSDEF;
		(yyval.a_expr)->meta_type = AMT_OBJECTCLASS;
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3122 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1145 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3131 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1155 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-1].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_TFS;	/* TypeFieldSpec */
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3144 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1165 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_FTVFS;	/* FixedTypeValueFieldSpec */
		(yyval.a_expr)->unique = (yyvsp[-1].a_int);
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
		asn1p_expr_add((yyval.a_expr), (yyvsp[-2].a_expr));
	}
#line 3158 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1176 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_VTVFS;
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3171 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1186 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_OFS;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3185 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1197 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_VTVSFS;
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3198 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1207 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_FTVSFS;
		asn1p_expr_add((yyval.a_expr), (yyvsp[-1].a_expr));
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3212 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1218 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_OSFS;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3226 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1230 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_wsynt) = 0; }
#line 3232 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1231 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = (yyvsp[0].a_wsynt);
	}
#line 3240 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1238 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_enable_with_syntax(); }
#line 3246 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1240 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = (yyvsp[-1].a_wsynt);
	}
#line 3254 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1246 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = asn1p_wsyntx_new();
		TQ_ADD(&((yyval.a_wsynt)->chunks), (yyvsp[0].a_wchunk), next);
	}
#line 3263 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1250 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = (yyvsp[-1].a_wsynt);
		TQ_ADD(&((yyval.a_wsynt)->chunks), (yyvsp[0].a_wchunk), next);
	}
#line 3272 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1257 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[0].tv_opaque).buf, 0);
		(yyval.a_wchunk)->type = WC_WHITESPACE;
	}
#line 3281 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1261 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[0].tv_str), 0);
	}
#line 3289 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1264 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[0].a_refcomp).name, 0);
		(yyval.a_wchunk)->type = WC_FIELD;
	}
#line 3298 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1268 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromsyntax((yyvsp[-1].a_wsynt));
	}
#line 3306 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1274 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3319 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1282 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->value = (yyvsp[0].a_value);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3333 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1291 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		(yyval.a_expr)->value = (yyvsp[0].a_value);
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3347 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1305 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[0].a_expr);
        (yyval.a_expr)->tag = (yyvsp[-1].a_tag);
    }
#line 3356 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1312 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		/*
		 * Outer constraint for SEQUENCE OF and SET OF applies
		 * to the inner type.
		 */
		if((yyval.a_expr)->expr_type == ASN_CONSTR_SEQUENCE_OF
		|| (yyval.a_expr)->expr_type == ASN_CONSTR_SET_OF) {
			assert(!TQ_FIRST(&((yyval.a_expr)->members))->constraints);
			TQ_FIRST(&((yyval.a_expr)->members))->constraints = (yyvsp[0].a_constr);
		} else {
			if((yyval.a_expr)->constraints) {
				assert(!(yyvsp[0].a_constr));
				/* Check this : optManyConstraints is not used ?! */
				asn1p_constraint_free((yyvsp[0].a_constr));
			} else {
				(yyval.a_expr)->constraints = (yyvsp[0].a_constr);
			}
		}
	}
#line 3381 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1335 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		/*
		 * Outer constraint for SEQUENCE OF and SET OF applies
		 * to the inner type.
		 */
		if((yyval.a_expr)->expr_type == ASN_CONSTR_SEQUENCE_OF
		|| (yyval.a_expr)->expr_type == ASN_CONSTR_SET_OF) {
			assert(!TQ_FIRST(&((yyval.a_expr)->members))->constraints);
			TQ_FIRST(&((yyval.a_expr)->members))->constraints = (yyvsp[0].a_constr);
		} else {
			if((yyval.a_expr)->constraints) {
				assert(!(yyvsp[0].a_constr));
				/* Check this : optManyConstraints is not used ?! */
				asn1p_constraint_free((yyvsp[0].a_constr));
			} else {
				(yyval.a_expr)->constraints = (yyvsp[0].a_constr);
			}
		}
	}
#line 3406 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1358 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		(yyval.a_expr)->tag = (yyvsp[-2].a_tag);
		/*
		 * Outer constraint for SEQUENCE OF and SET OF applies
		 * to the inner type.
		 */
		if((yyval.a_expr)->expr_type == ASN_CONSTR_SEQUENCE_OF
		|| (yyval.a_expr)->expr_type == ASN_CONSTR_SET_OF) {
			assert(!TQ_FIRST(&((yyval.a_expr)->members))->constraints);
			TQ_FIRST(&((yyval.a_expr)->members))->constraints = (yyvsp[0].a_constr);
		} else {
			if((yyval.a_expr)->constraints) {
				assert(!(yyvsp[-1].a_expr));
				/* Check this : optManyConstraints is not used ?! */
				asn1p_constraint_free((yyvsp[0].a_constr));
			} else {
				(yyval.a_expr)->constraints = (yyvsp[0].a_constr);
			}
		}
	}
#line 3432 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1382 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_int) = asn1p_as_pointer ? EM_INDIRECT : 0;
		asn1p_as_pointer = 0;
	}
#line 3441 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1389 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->marker.flags |= (yyvsp[-1].a_int);

		if(((yyval.a_expr)->marker.flags & EM_INDIRECT)
		&& ((yyval.a_expr)->marker.flags & EM_OPTIONAL) != EM_OPTIONAL) {
			fprintf(stderr,
				"INFO: Directive <ASN1C:RepresentAsPointer> "
				"applied to %s at %s:%d\n",
				ASN_EXPR_TYPE2STR((yyval.a_expr)->expr_type)
					?  ASN_EXPR_TYPE2STR((yyval.a_expr)->expr_type)
					: "member",
				ASN_FILENAME, (yyval.a_expr)->_lineno
			);
		}
    }
#line 3462 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1413 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_CHOICE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3473 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1419 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SEQUENCE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3484 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1425 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SET;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3495 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1431 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->constraints = (yyvsp[-4].a_constr);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SEQUENCE_OF;
		(yyval.a_expr)->meta_type = AMT_TYPE;
		(yyvsp[0].a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyvsp[0].a_expr)->tag = (yyvsp[-1].a_tag);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3510 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1441 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->constraints = (yyvsp[-4].a_constr);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SET_OF;
		(yyval.a_expr)->meta_type = AMT_TYPE;
		(yyvsp[0].a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyvsp[0].a_expr)->tag = (yyvsp[-1].a_tag);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3525 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1451 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = ASN_TYPE_ANY;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3536 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1457 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_expr)->reference,
			(yyvsp[0].tv_str), RLT_lowercase);
		checkmem(ret == 0);
		(yyval.a_expr)->expr_type = ASN_TYPE_ANY;
		(yyval.a_expr)->meta_type = AMT_TYPE;
		free((yyvsp[0].tv_str));
	}
#line 3553 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1469 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[0].a_ref);
		(yyval.a_expr)->expr_type = A1TC_INSTANCE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3565 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1484 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		free((yyvsp[0].tv_str));
	}
#line 3578 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1492 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_CAPITALS);
		free((yyvsp[0].tv_str));
		checkmem(ret == 0);
	}
#line 3591 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1500 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[-2].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		free((yyvsp[-2].tv_str));
		free((yyvsp[0].tv_str));
	}
#line 3607 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1511 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[-2].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		free((yyvsp[-2].tv_str));
		free((yyvsp[0].tv_str));
	}
#line 3623 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1522 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = (yyvsp[0].a_ref);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[-2].tv_str), RLT_CAPITALS);
		free((yyvsp[-2].tv_str));
		checkmem(ret == 0);
		/*
		 * Move the last element infront.
		 */
		{
			struct asn1p_ref_component_s tmp_comp;
			tmp_comp = (yyval.a_ref)->components[(yyval.a_ref)->comp_count-1];
			memmove(&(yyval.a_ref)->components[1],
				&(yyval.a_ref)->components[0],
				sizeof((yyval.a_ref)->components[0])
				* ((yyval.a_ref)->comp_count - 1));
			(yyval.a_ref)->components[0] = tmp_comp;
		}
	}
#line 3647 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1544 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].a_refcomp).name, (yyvsp[0].a_refcomp).lex_type);
		free((yyvsp[0].a_refcomp).name);
		checkmem(ret == 0);
	}
#line 3660 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1552 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = (yyvsp[-2].a_ref);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].a_refcomp).name, (yyvsp[0].a_refcomp).lex_type);
		free((yyvsp[0].a_refcomp).name);
		checkmem(ret == 0);
	}
#line 3672 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1565 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_refcomp).lex_type = RLT_AmpUppercase;
		(yyval.a_refcomp).name = (yyvsp[0].tv_str);
	}
#line 3681 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1570 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_refcomp).lex_type = RLT_Amplowercase;
		(yyval.a_refcomp).name = (yyvsp[0].tv_str);
	}
#line 3690 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1579 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_AmpUppercase);
		free((yyvsp[0].tv_str));
	}
#line 3700 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1584 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = (yyval.a_ref);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_AmpUppercase);
		free((yyvsp[0].tv_str));
	}
#line 3710 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1589 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = (yyval.a_ref);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_Amplowercase);
		free((yyvsp[0].tv_str));
	}
#line 3720 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1597 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_CAPITALS);
		free((yyvsp[0].tv_str));
	}
#line 3730 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1620 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		assert((yyval.a_expr)->Identifier == NULL);
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 3742 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1632 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_push_opaque_state(); }
#line 3748 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1632 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_UNPARSED;
	}
#line 3758 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1640 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_NULL;
	}
#line 3768 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1645 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_FALSE;
	}
#line 3778 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1650 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(1);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_TRUE;
	}
#line 3788 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1663 "asn1p_y.y" /* yacc.c:1646  */
    {
		asn1p_ref_t *ref;
		int ret;
		ref = asn1p_ref_new(yylineno, currentModule);
		checkmem(ref);
		ret = asn1p_ref_add_component(ref, (yyvsp[-2].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		ret = asn1p_ref_add_component(ref, (yyvsp[0].tv_str), RLT_lowercase);
		checkmem(ret == 0);
		(yyval.a_value) = asn1p_value_fromref(ref, 0);
		checkmem((yyval.a_value));
		free((yyvsp[-2].tv_str));
		free((yyvsp[0].tv_str));
	}
#line 3807 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1681 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
		checkmem((yyval.a_value));
	}
#line 3816 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1685 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_TUPLE;
	}
#line 3826 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1690 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_QUADRUPLE;
	}
#line 3836 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1698 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.tv_opaque).len = (yyvsp[0].tv_opaque).len + 1;
		(yyval.tv_opaque).buf = malloc(1 + (yyval.tv_opaque).len + 1);
		checkmem((yyval.tv_opaque).buf);
		(yyval.tv_opaque).buf[0] = '{';
		memcpy((yyval.tv_opaque).buf + 1, (yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len);
		(yyval.tv_opaque).buf[(yyval.tv_opaque).len] = '\0';
		free((yyvsp[0].tv_opaque).buf);
    }
#line 3850 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1707 "asn1p_y.y" /* yacc.c:1646  */
    {
		int newsize = (yyvsp[-1].tv_opaque).len + (yyvsp[0].tv_opaque).len;
		char *p = malloc(newsize + 1);
		checkmem(p);
		memcpy(p         , (yyvsp[-1].tv_opaque).buf, (yyvsp[-1].tv_opaque).len);
		memcpy(p + (yyvsp[-1].tv_opaque).len, (yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len);
		p[newsize] = '\0';
		free((yyvsp[-1].tv_opaque).buf);
		free((yyvsp[0].tv_opaque).buf);
		(yyval.tv_opaque).buf = p;
		(yyval.tv_opaque).len = newsize;
	}
#line 3867 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1723 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.tv_opaque).len = strlen((yyvsp[0].tv_str));
        (yyval.tv_opaque).buf = (yyvsp[0].tv_str);
    }
#line 3876 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1729 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_BOOLEAN; }
#line 3882 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1730 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_NULL; }
#line 3888 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1731 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_REAL; }
#line 3894 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1732 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_OCTET_STRING; }
#line 3900 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1733 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_OBJECT_IDENTIFIER; }
#line 3906 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1734 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_RELATIVE_OID; }
#line 3912 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1736 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_EMBEDDED_PDV; }
#line 3918 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1737 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_CHARACTER_STRING; }
#line 3924 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1738 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_UTCTime; }
#line 3930 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1739 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_GeneralizedTime; }
#line 3936 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1748 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_INTEGER; }
#line 3942 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1749 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_ENUMERATED; }
#line 3948 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1750 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_BIT_STRING; }
#line 3954 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1754 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = (yyvsp[0].a_type);
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3965 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1760 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_INTEGER;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3975 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1765 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_ENUMERATED;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3985 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1770 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3995 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1775 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 4005 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1780 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 4016 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1789 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_BMPString; }
#line 4022 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1790 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_GeneralString;
		fprintf(stderr, "WARNING: GeneralString is not fully supported\n");
	}
#line 4031 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1794 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_GraphicString;
		fprintf(stderr, "WARNING: GraphicString is not fully supported\n");
	}
#line 4040 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1798 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_IA5String; }
#line 4046 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1799 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_ISO646String; }
#line 4052 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1800 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_NumericString; }
#line 4058 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1801 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_PrintableString; }
#line 4064 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1802 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_T61String;
		fprintf(stderr, "WARNING: T61String is not fully supported\n");
	}
#line 4073 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1806 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_TeletexString; }
#line 4079 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1807 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_UniversalString; }
#line 4085 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1808 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_UTF8String; }
#line 4091 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1809 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_VideotexString;
		fprintf(stderr, "WARNING: VideotexString is not fully supported\n");
	}
#line 4100 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1813 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_VisibleString; }
#line 4106 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1814 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_ObjectDescriptor; }
#line 4112 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1826 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = 0; }
#line 4118 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1831 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = 0; }
#line 4124 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1836 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = 0; }
#line 4130 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1842 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[-1].a_constr), 0);
    }
#line 4138 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1849 "asn1p_y.y" /* yacc.c:1646  */
    {
        if((yyvsp[0].a_constr)->type == ACT_CA_SET && (yyvsp[0].a_constr)->el_count == 1) {
            CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[-1].a_constr), (yyvsp[0].a_constr)->elements[0]);
        } else {
            CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[-1].a_constr), (yyvsp[0].a_constr));
        }
	}
#line 4150 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1863 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_EL_EXT;
	}
#line 4159 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1868 "asn1p_y.y" /* yacc.c:1646  */
    {
       asn1p_constraint_t *ct;
       ct = asn1p_constraint_new(yylineno, currentModule);
       ct->type = ACT_EL_EXT;
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[-2].a_constr), ct);
   }
#line 4170 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1874 "asn1p_y.y" /* yacc.c:1646  */
    {
       asn1p_constraint_t *ct;
       ct = asn1p_constraint_new(yylineno, currentModule);
       ct->type = ACT_EL_EXT;
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[-4].a_constr), ct);
       ct = (yyval.a_constr);
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, ct, (yyvsp[0].a_constr));
   }
#line 4183 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1886 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_AEX, (yyvsp[0].a_constr), 0);
	}
#line 4191 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1893 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_UNI, (yyvsp[-2].a_constr), (yyvsp[0].a_constr));
	}
#line 4199 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1900 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_INT, (yyvsp[-2].a_constr), (yyvsp[0].a_constr));
	}
#line 4207 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1908 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_EXC, (yyvsp[-2].a_constr), (yyvsp[0].a_constr));
	}
#line 4215 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1915 "asn1p_y.y" /* yacc.c:1646  */
    {
        int ret;
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        checkmem((yyval.a_constr));
        (yyval.a_constr)->type = ACT_CA_SET;
        ret = asn1p_constraint_insert((yyval.a_constr), (yyvsp[-1].a_constr));
        checkmem(ret == 0);
    }
#line 4228 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1926 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_VALUE;
		(yyval.a_constr)->value = (yyvsp[0].a_value);
	}
#line 4239 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1932 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_TYPE;
		(yyval.a_constr)->containedSubtype = (yyvsp[0].a_value);
	}
#line 4250 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1948 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_FROM, (yyvsp[0].a_constr), 0);
	}
#line 4258 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1953 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_SIZE, (yyvsp[0].a_constr), 0);
	}
#line 4266 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1958 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_PATTERN;
		(yyval.a_constr)->value = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
	}
#line 4276 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1963 "asn1p_y.y" /* yacc.c:1646  */
    {
		asn1p_ref_t *ref;
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_PATTERN;
		ref = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component(ref, (yyvsp[0].tv_str), RLT_lowercase);
		(yyval.a_constr)->value = asn1p_value_fromref(ref, 0);
		free((yyvsp[0].tv_str));
	}
#line 4290 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1975 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = (yyvsp[-1].a_ctype);
		(yyval.a_constr)->range_start = (yyvsp[-2].a_value);
		(yyval.a_constr)->range_stop = (yyvsp[0].a_value);
    }
#line 4302 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1985 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(-123);
		(yyval.a_value)->type = ATV_MIN;
    }
#line 4311 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1992 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(321);
		(yyval.a_value)->type = ATV_MAX;
    }
#line 4320 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2000 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = _convert_bitstring2binary((yyvsp[0].tv_str), 'B');
		checkmem((yyval.a_value));
		free((yyvsp[0].tv_str));
	}
#line 4330 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2005 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = _convert_bitstring2binary((yyvsp[0].tv_str), 'H');
		checkmem((yyval.a_value));
		free((yyvsp[0].tv_str));
	}
#line 4340 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2013 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromtype((yyvsp[0].a_expr));
		checkmem((yyval.a_value));
		asn1p_expr_free((yyvsp[0].a_expr));
    }
#line 4350 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2019 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromtype((yyvsp[0].a_expr));
		checkmem((yyval.a_value));
		asn1p_expr_free((yyvsp[0].a_expr));
    }
#line 4360 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2031 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_WCOMP, (yyvsp[0].a_constr), 0);
	}
#line 4368 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2034 "asn1p_y.y" /* yacc.c:1646  */
    {
        assert((yyvsp[0].a_constr)->type == ACT_CA_CSV);
        (yyvsp[0].a_constr)->type = ACT_CT_WCOMPS;
        (yyval.a_constr) = (yyvsp[0].a_constr);
	}
#line 4378 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2042 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = (yyvsp[-1].a_constr); }
#line 4384 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2044 "asn1p_y.y" /* yacc.c:1646  */
    {
        assert((yyvsp[-1].a_constr)->type == ACT_CA_CSV);
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        (yyval.a_constr)->type = ACT_CA_CSV;
		asn1p_constraint_t *ct = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		ct->type = ACT_EL_EXT;
        asn1p_constraint_insert((yyval.a_constr), ct);
        for(unsigned i = 0; i < (yyvsp[-1].a_constr)->el_count; i++) {
            asn1p_constraint_insert((yyval.a_constr), (yyvsp[-1].a_constr)->elements[i]);
        }
    }
#line 4401 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2057 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        (yyval.a_constr)->type = ACT_CA_CSV;
        asn1p_constraint_insert((yyval.a_constr), (yyvsp[0].a_constr));
    }
#line 4411 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2062 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_constr) = (yyvsp[-2].a_constr);
        asn1p_constraint_insert((yyval.a_constr), (yyvsp[0].a_constr));
	}
#line 4420 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2068 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        checkmem((yyval.a_constr));
        (yyval.a_constr)->type = ACT_EL_VALUE;
        (yyval.a_constr)->value = (yyvsp[-2].a_value);
        if((yyvsp[-1].a_constr)) asn1p_constraint_insert((yyval.a_constr), (yyvsp[-1].a_constr));
        (yyval.a_constr)->presence = (yyvsp[0].a_pres);
    }
#line 4433 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2082 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_pres) = ACPRES_DEFAULT; }
#line 4439 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2083 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_pres) = (yyvsp[0].a_pres); }
#line 4445 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2087 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_pres) = ACPRES_PRESENT;
	}
#line 4453 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2090 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_pres) = ACPRES_ABSENT;
	}
#line 4461 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2093 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_pres) = ACPRES_OPTIONAL;
	}
#line 4469 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2108 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_push_opaque_state(); }
#line 4475 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2108 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_CT_CTDBY;
		(yyval.a_constr)->value = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
		checkmem((yyval.a_constr)->value);
		(yyval.a_constr)->value->type = ATV_UNPARSED;
	}
#line 4488 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2119 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_CTNG;
		(yyval.a_constr)->value = asn1p_value_fromtype((yyvsp[0].a_expr));
		asn1p_expr_free((yyvsp[0].a_expr));
	}
#line 4499 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2128 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_RANGE; }
#line 4505 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2129 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_RLRANGE; }
#line 4511 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2130 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_LLRANGE; }
#line 4517 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2131 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_ULRANGE; }
#line 4523 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2134 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = (yyvsp[0].a_constr);
	}
#line 4531 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2137 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = (yyvsp[0].a_constr);
	}
#line 4539 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2146 "asn1p_y.y" /* yacc.c:1646  */
    {
		asn1p_ref_t *ref = asn1p_ref_new(yylineno, currentModule);
		asn1p_constraint_t *ct;
		int ret;
		ret = asn1p_ref_add_component(ref, (yyvsp[-1].tv_str), 0);
		checkmem(ret == 0);
		ct = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		ct->type = ACT_EL_VALUE;
		ct->value = asn1p_value_fromref(ref, 0);
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CRC, ct, 0);
		free((yyvsp[-1].tv_str));
	}
#line 4557 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2162 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CRC, (yyvsp[-3].a_constr), (yyvsp[-1].a_constr));
	}
#line 4565 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2168 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_VALUE;
		(yyval.a_constr)->value = asn1p_value_fromref((yyvsp[0].a_ref), 0);
	}
#line 4576 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2174 "asn1p_y.y" /* yacc.c:1646  */
    {
		asn1p_constraint_t *ct;
		ct = asn1p_constraint_new(yylineno, currentModule);
		checkmem(ct);
		ct->type = ACT_EL_VALUE;
		ct->value = asn1p_value_fromref((yyvsp[0].a_ref), 0);
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[-2].a_constr), ct);
	}
#line 4589 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2188 "asn1p_y.y" /* yacc.c:1646  */
    {
		char *p = malloc(strlen((yyvsp[0].tv_str)) + 2);
		int ret;
		*p = '@';
		strcpy(p + 1, (yyvsp[0].tv_str));
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_ref), p, 0);
		checkmem(ret == 0);
		free(p);
		free((yyvsp[0].tv_str));
	}
#line 4605 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2199 "asn1p_y.y" /* yacc.c:1646  */
    {
		char *p = malloc(strlen((yyvsp[0].tv_str)) + 3);
		int ret;
		p[0] = '@';
		p[1] = '.';
		strcpy(p + 2, (yyvsp[0].tv_str));
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_ref), p, 0);
		checkmem(ret == 0);
		free(p);
		free((yyvsp[0].tv_str));
	}
#line 4622 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2215 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 4630 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2218 "asn1p_y.y" /* yacc.c:1646  */
    {
		int l1 = strlen((yyvsp[-2].tv_str));
		int l3 = strlen((yyvsp[0].tv_str));
		(yyval.tv_str) = malloc(l1 + 1 + l3 + 1);
		memcpy((yyval.tv_str), (yyvsp[-2].tv_str), l1);
		(yyval.tv_str)[l1] = '.';
		memcpy((yyval.tv_str) + l1 + 1, (yyvsp[0].tv_str), l3);
		(yyval.tv_str)[l1 + 1 + l3] = '\0';
		free((yyvsp[-2].tv_str));
		free((yyvsp[0].tv_str));
	}
#line 4646 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2238 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_marker).flags = EM_NOMARK;
		(yyval.a_marker).default_value = 0;
	}
#line 4655 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2242 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_marker) = (yyvsp[0].a_marker); }
#line 4661 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2246 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_marker).flags = EM_OPTIONAL | EM_INDIRECT;
		(yyval.a_marker).default_value = 0;
	}
#line 4670 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2250 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_marker).flags = EM_DEFAULT;
		(yyval.a_marker).default_value = (yyvsp[0].a_value);
	}
#line 4679 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2257 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
    }
#line 4689 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2262 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
    }
#line 4698 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2268 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
    }
#line 4710 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2277 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4720 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2282 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4729 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2289 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4742 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2297 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4755 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2307 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4765 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2312 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4774 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2319 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = asn1p_value_fromint((yyvsp[-1].a_int));
	}
#line 4787 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2327 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4800 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2337 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
        asn1p_expr_t *first_memb = TQ_FIRST(&((yyval.a_expr)->members));
        if(first_memb) {
            if(first_memb->expr_type == A1TC_EXTENSIBLE) {
                return yyerror(param,
                    "The ENUMERATION cannot start with extension (...).");
            }
        } else {
            return yyerror(param,
                "The ENUMERATION list cannot be empty.");
        }
    }
#line 4818 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2352 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4828 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2357 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4837 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2364 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
	}
#line 4849 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2371 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4862 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2379 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4875 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2387 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 4887 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2394 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
	}
#line 4900 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2405 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
	}
#line 4909 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2409 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
	}
#line 4918 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2416 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromdouble((yyvsp[0].a_dbl));
		checkmem((yyval.a_value));
	}
#line 4927 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2447 "asn1p_y.y" /* yacc.c:1646  */
    { memset(&(yyval.a_tag), 0, sizeof((yyval.a_tag))); }
#line 4933 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2448 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag) = (yyvsp[0].a_tag); }
#line 4939 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2452 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_tag) = (yyvsp[-1].a_tag);
		(yyval.a_tag).tag_mode = (yyvsp[0].a_tag).tag_mode;
	}
#line 4948 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2459 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_tag) = (yyvsp[-2].a_tag);
		(yyval.a_tag).tag_value = (yyvsp[-1].a_int);
	}
#line 4957 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2465 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_CONTEXT_SPECIFIC; }
#line 4963 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2466 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_UNIVERSAL; }
#line 4969 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2467 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_APPLICATION; }
#line 4975 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2468 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_PRIVATE; }
#line 4981 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2472 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_mode = TM_DEFAULT; }
#line 4987 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2473 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_mode = TM_IMPLICIT; }
#line 4993 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2474 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_mode = TM_EXPLICIT; }
#line 4999 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2478 "asn1p_y.y" /* yacc.c:1646  */
    {
		checkmem((yyvsp[0].tv_str));
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 5008 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2482 "asn1p_y.y" /* yacc.c:1646  */
    {
		checkmem((yyvsp[0].tv_str));
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 5017 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2490 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.tv_str) = 0; }
#line 5023 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2491 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 5031 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2497 "asn1p_y.y" /* yacc.c:1646  */
    {
		checkmem((yyvsp[0].tv_str));
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 5040 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2504 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_lowercase);
		free((yyvsp[0].tv_str));
    }
#line 5050 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2511 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromref((yyvsp[0].a_ref), 0);
    }
#line 5058 "asn1p_y.c" /* yacc.c:1646  */
    break;


#line 5062 "asn1p_y.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (param, YY_("syntax error"));
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
        yyerror (param, yymsgp);
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
                      yytoken, &yylval, param);
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
                  yystos[yystate], yyvsp, param);
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
  yyerror (param, YY_("memory exhausted"));
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
                  yytoken, &yylval, param);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, param);
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
  return yyresult;
}
#line 2515 "asn1p_y.y" /* yacc.c:1906  */



/*
 * Convert Xstring ('0101'B or '5'H) to the binary vector.
 */
static asn1p_value_t *
_convert_bitstring2binary(char *str, int base) {
	asn1p_value_t *val;
	int slen;
	int memlen;
	int baselen;
	int bits;
	uint8_t *binary_vector;
	uint8_t *bv_ptr;
	uint8_t cur_val;

	assert(str);
	assert(str[0] == '\'');

	switch(base) {
	case 'B':
		baselen = 1;
		break;
	case 'H':
		baselen = 4;
		break;
	default:
		assert(base == 'B' || base == 'H');
		errno = EINVAL;
		return NULL;
	}

	slen = strlen(str);
	assert(str[slen - 1] == base);
	assert(str[slen - 2] == '\'');

	memlen = slen / (8 / baselen);	/* Conservative estimate */

	bv_ptr = binary_vector = malloc(memlen + 1);
	if(bv_ptr == NULL) {
		/* ENOMEM */
		return NULL;
	}

	cur_val = 0;
	bits = 0;
	while(*(++str) != '\'') {
		switch(baselen) {
		case 1:
			switch(*str) {
			case '1':
				cur_val |= 1 << (7 - (bits % 8));
			case '0':
				break;
			default:
				assert(!"_y UNREACH1");
			case ' ': case '\r': case '\n':
				continue;
			}
			break;
		case 4:
			switch(*str) {
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				cur_val |= (*str - '0') << (4 - (bits % 8));
				break;
			case 'A': case 'B': case 'C':
			case 'D': case 'E': case 'F':
				cur_val |= ((*str - 'A') + 10)
					<< (4 - (bits % 8));
				break;
			default:
				assert(!"_y UNREACH2");
			case ' ': case '\r': case '\n':
				continue;
			}
			break;
		}

		bits += baselen;
		if((bits % 8) == 0) {
			*bv_ptr++ = cur_val;
			cur_val = 0;
		}
	}

	*bv_ptr = cur_val;
	assert((bv_ptr - binary_vector) <= memlen);

	val = asn1p_value_frombits(binary_vector, bits, 0);
	if(val == NULL) {
		free(binary_vector);
	}

	return val;
}

/*
 * For unnamed types (used in old X.208 compliant modules)
 * generate some sort of interim names, to not to force human being to fix
 * the specification's compliance to modern ASN.1 standards.
 */
static void
_fixup_anonymous_identifier(asn1p_expr_t *expr) {
	char *p;
	assert(expr->Identifier == 0);

	/*
	 * Try to figure out the type name
	 * without going too much into details
	 */
	expr->Identifier = ASN_EXPR_TYPE2STR(expr->expr_type);
	if(expr->reference && expr->reference->comp_count > 0)
		expr->Identifier = expr->reference->components[0].name;

	fprintf(stderr,
		"WARNING: Line %d: expected lower-case member identifier, "
		"found an unnamed %s.\n"
		"WARNING: Obsolete X.208 syntax detected, "
		"please give the member a name.\n",
		yylineno, expr->Identifier ? expr->Identifier : "type");

	if(!expr->Identifier)
		expr->Identifier = "unnamed";
	expr->Identifier = strdup(expr->Identifier);
	assert(expr->Identifier);
	/* Make a lowercase identifier from the type name */
	for(p = expr->Identifier; *p; p++) {
		switch(*p) {
		case 'A' ... 'Z': *p += 32; break;
		case ' ': *p = '_'; break;
		case '-': *p = '_'; break;
		}
	}
	fprintf(stderr, "NOTE: Assigning temporary identifier \"%s\". "
			"Name clash may occur later.\n",
		expr->Identifier);
}

int
yyerror(void **param, const char *msg) {
	(void)param;
	extern char *asn1p_text;
	fprintf(stderr,
		"ASN.1 grammar parse error "
		"near %s:%d (token \"%s\"): %s\n",
		ASN_FILENAME, yylineno, asn1p_text, msg);
	return -1;
}

