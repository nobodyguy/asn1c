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
    TOK_ThreeDots = 363
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

#line 470 "asn1p_y.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE asn1p_lval;

int asn1p_parse (void **param);

#endif /* !YY_ASN1P_ASN_P_Y_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 487 "asn1p_y.c" /* yacc.c:358  */

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
#define YYLAST   953

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  125
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  342
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  524

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   364

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   121,     2,     2,     2,     2,     2,     2,
     114,   115,     2,     2,   117,     2,   122,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   118,   116,
     123,     2,     2,     2,   124,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   119,     2,   120,   105,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   112,   107,   113,     2,     2,     2,     2,
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
     106,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   413,   413,   416,   422,   427,   444,   444,   473,   474,
     478,   481,   487,   493,   502,   506,   510,   520,   521,   530,
     533,   542,   545,   548,   551,   555,   576,   577,   586,   599,
     602,   619,   626,   640,   648,   647,   661,   674,   675,   678,
     688,   694,   695,   698,   703,   710,   711,   715,   726,   731,
     738,   744,   750,   760,   761,   773,   776,   779,   787,   792,
     799,   805,   811,   820,   823,   843,   853,   873,   879,   895,
     901,   909,   918,   929,   933,   941,   949,   957,   968,   973,
     980,   981,   989,   997,  1020,  1021,  1024,  1029,  1033,  1043,
    1050,  1056,  1063,  1069,  1074,  1078,  1088,  1093,  1096,  1103,
    1113,  1114,  1118,  1125,  1135,  1145,  1156,  1166,  1177,  1187,
    1198,  1210,  1211,  1218,  1217,  1226,  1230,  1237,  1241,  1244,
    1248,  1254,  1262,  1271,  1282,  1285,  1292,  1315,  1338,  1362,
    1369,  1388,  1389,  1392,  1393,  1399,  1405,  1411,  1421,  1431,
    1437,  1449,  1464,  1472,  1480,  1491,  1502,  1524,  1532,  1541,
    1545,  1550,  1559,  1564,  1569,  1577,  1600,  1610,  1611,  1612,
    1612,  1620,  1625,  1630,  1635,  1636,  1637,  1638,  1642,  1643,
    1661,  1665,  1670,  1678,  1687,  1702,  1703,  1709,  1710,  1711,
    1712,  1713,  1714,  1716,  1717,  1718,  1719,  1720,  1721,  1728,
    1729,  1730,  1734,  1740,  1745,  1750,  1755,  1760,  1769,  1770,
    1774,  1778,  1779,  1780,  1781,  1782,  1786,  1787,  1788,  1789,
    1793,  1794,  1801,  1801,  1802,  1802,  1806,  1807,  1811,  1812,
    1816,  1817,  1818,  1822,  1828,  1829,  1838,  1838,  1840,  1843,
    1847,  1848,  1854,  1865,  1866,  1872,  1873,  1879,  1880,  1887,
    1888,  1894,  1895,  1906,  1912,  1918,  1919,  1921,  1922,  1923,
    1928,  1933,  1938,  1943,  1955,  1964,  1965,  1971,  1972,  1977,
    1980,  1985,  1993,  1999,  2011,  2014,  2020,  2021,  2021,  2022,
    2024,  2037,  2042,  2048,  2062,  2063,  2067,  2070,  2073,  2081,
    2082,  2083,  2088,  2087,  2099,  2108,  2109,  2110,  2111,  2114,
    2117,  2126,  2142,  2148,  2154,  2168,  2179,  2195,  2198,  2218,
    2222,  2226,  2230,  2237,  2242,  2248,  2257,  2262,  2269,  2277,
    2287,  2292,  2299,  2307,  2317,  2332,  2337,  2344,  2351,  2359,
    2367,  2374,  2385,  2389,  2396,  2427,  2428,  2432,  2439,  2445,
    2446,  2447,  2448,  2452,  2453,  2454,  2458,  2462,  2470,  2471,
    2477,  2484,  2491
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
  "'|'", "TOK_UNION", "\"..\"", "\"...\"", "\"concrete TypeDeclaration\"",
  "'{'", "'}'", "'('", "')'", "';'", "','", "':'", "'['", "']'", "'!'",
  "'.'", "'<'", "'@'", "$accept", "ParsedGrammar", "ModuleList",
  "ModuleDefinition", "$@1", "optObjectIdentifier", "ObjectIdentifier",
  "ObjectIdentifierBody", "ObjectIdentifierElement",
  "optModuleDefinitionFlags", "ModuleDefinitionFlags",
  "ModuleDefinitionFlag", "optModuleBody", "ModuleBody", "AssignmentList",
  "Assignment", "$@2", "optImports", "ImportsDefinition",
  "optImportsBundleSet", "ImportsBundleSet", "AssignedIdentifier",
  "ImportsBundle", "ImportsList", "ImportsElement", "optExports",
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
     363,   364,   123,   125,    40,    41,    59,    44,    58,    91,
      93,    33,    46,    60,    64
};
# endif

#define YYPACT_NINF -268

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-268)))

#define YYTABLE_NINF -300

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,  -268,  -268,    77,    38,    77,  -268,  -268,    77,  -268,
    -268,   -48,    17,    43,  -268,  -268,  -268,  -268,    30,  -268,
     -10,   237,  -268,  -268,   116,    96,    83,    97,    53,   113,
     218,   237,  -268,    52,  -268,  -268,  -268,  -268,  -268,   241,
    -268,  -268,    56,    65,   211,  -268,   174,  -268,   156,  -268,
      99,  -268,   165,  -268,  -268,   207,   691,  -268,  -268,  -268,
     276,   170,  -268,   176,   276,  -268,   -18,  -268,   183,  -268,
    -268,   280,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,   691,  -268,  -268,  -268,  -268,
    -268,    22,   184,  -268,  -268,  -268,  -268,    77,   276,   197,
    -268,  -268,     0,   852,    29,   321,  -268,   776,  -268,    28,
     323,   -48,  -268,  -268,  -268,   226,  -268,  -268,   252,  -268,
     254,   266,  -268,  -268,  -268,  -268,   272,   263,  -268,  -268,
    -268,    18,  -268,   243,  -268,  -268,   244,  -268,  -268,  -268,
     348,   251,   246,   247,   253,   327,   278,   271,   273,   309,
     274,   136,   164,  -268,  -268,   277,  -268,   275,  -268,  -268,
    -268,  -268,  -268,   703,  -268,  -268,   298,  -268,  -268,  -268,
    -268,  -268,   385,   852,   276,   276,   270,   364,  -268,    77,
     315,    13,   370,   292,    46,    89,   311,   394,   277,    51,
     229,   331,  -268,  -268,    51,   332,  -268,  -268,   277,   598,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,   286,
    -268,  -268,  -268,   208,    79,    37,  -268,     0,  -268,  -268,
    -268,  -268,  -268,  -268,   246,   247,   306,   277,   184,  -268,
      42,   299,  -268,   384,   277,  -268,  -268,   300,   294,   238,
     242,  -268,   308,  -268,  -268,  -268,  -268,  -268,     1,    57,
    -268,  -268,  -268,  -268,  -268,   293,  -268,  -268,  -268,  -268,
      70,  -268,  -268,   394,   394,   301,    76,  -268,  -268,  -268,
    -268,   184,  -268,   305,   302,  -268,  -268,   307,  -268,   100,
    -268,   310,  -268,   339,   312,   303,  -268,  -268,    31,   184,
     395,   184,    77,   314,  -268,  -268,  -268,  -268,  -268,  -268,
     318,  -268,   394,   320,   394,  -268,   317,  -268,   119,  -268,
    -268,  -268,  -268,   245,   394,  -268,  -268,   703,  -268,    31,
       5,    31,  -268,  -268,   340,     5,    31,   337,   298,  -268,
    -268,   491,  -268,  -268,  -268,  -268,   277,   328,   329,  -268,
    -268,   335,  -268,  -268,   491,  -268,  -268,   491,   491,   319,
     338,   505,   330,  -268,   394,  -268,   140,  -268,   336,   262,
    -268,    36,   776,   277,  -268,  -268,    89,   262,  -268,   394,
     262,   184,  -268,    23,  -268,    31,   341,  -268,   342,  -268,
     324,   184,  -268,  -268,   184,  -268,   598,  -268,   442,  -268,
    -268,  -268,  -268,  -268,   334,  -268,  -268,  -268,    31,  -268,
    -268,   367,  -268,  -268,  -268,  -268,  -268,  -268,    19,  -268,
    -268,  -268,  -268,   343,   242,  -268,  -268,  -268,   344,  -268,
    -268,  -268,  -268,  -268,  -268,   394,   297,  -268,  -268,    46,
    -268,  -268,  -268,  -268,   347,   349,  -268,   350,   353,  -268,
     101,  -268,  -268,  -268,  -268,    10,   154,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,   346,   355,   172,  -268,   277,
     384,  -268,  -268,   358,   360,    21,  -268,  -268,  -268,  -268,
      32,   245,   394,   357,  -268,  -268,   324,  -268,  -268,  -268,
     394,  -268,   394,   130,  -268,  -268,  -268,  -268,  -268,  -268,
     442,   357,   394,  -268,    49,   188,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,    49,    39,  -268,  -268,  -268,
      59,  -268,  -268,  -268
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   336,   337,     0,     0,     3,     4,     6,     2,     1,
       5,     8,     0,     0,     9,   340,    16,    11,     0,    12,
      14,    17,    10,    13,     0,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    25,    23,    21,    24,    22,     0,
      20,    15,    53,     0,     0,    27,    37,    54,     0,    57,
       0,    58,    60,    62,     7,    41,     0,    38,    56,    55,
       0,     0,    40,     0,    42,    43,     0,    48,    50,    52,
     198,     0,   199,   200,   201,   202,   203,   211,   204,   205,
     206,   207,   208,   209,   210,    28,    29,    33,    31,    32,
      36,   325,   325,    59,    61,    39,    44,     0,     0,     0,
      34,    30,   325,     0,   329,     0,   124,     0,   326,   333,
       0,    45,    49,    51,    35,     0,    68,    67,     0,   177,
       0,     0,   190,   186,   189,   178,     0,     0,   179,   182,
     185,     0,    71,     0,   188,   187,    73,   331,   332,   330,
       0,     0,   142,   143,     0,   139,     0,     0,   190,     0,
     189,   220,   220,   132,   125,   218,   131,    65,   192,   133,
     335,   334,   327,     0,    46,    47,     0,   191,   184,   183,
     181,   180,     0,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,   191,   325,     0,     0,     0,     0,   325,
       0,     0,   221,   222,   325,     0,   127,   224,   219,     0,
     260,   170,   261,   322,   323,   324,   171,   172,   162,   161,
     163,   159,   156,   157,   158,   166,   167,   164,   165,     0,
     341,   342,   168,   325,   325,     0,   102,   325,    72,    77,
      76,    75,    74,   328,   142,   143,     0,     0,   325,   256,
       0,     0,   229,     0,   218,   263,   259,     0,   230,   233,
     235,   237,   239,   241,   245,   246,   248,   249,     0,   243,
     244,   247,   144,   150,   151,   146,   147,   149,   145,   197,
       0,   303,   305,     0,     0,   121,     0,    93,    97,    98,
     129,   325,   321,     0,   314,   315,   320,   317,   141,     0,
     306,     0,   251,     0,     0,    85,    86,    92,   299,   325,
       0,   325,   159,     0,   226,   228,   227,   279,   281,   280,
     289,   290,   338,     0,   338,   225,   161,    83,     0,    78,
      80,    81,    82,     0,     0,   155,   152,     0,   301,   299,
     299,   299,   104,   300,   100,   299,   299,   111,     0,    70,
      69,     0,   250,   262,   252,   253,     0,     0,     0,   126,
      63,     0,   212,   213,     0,   214,   215,     0,     0,   285,
       0,     0,     0,   196,     0,   140,     0,   310,     0,     0,
     134,   325,     0,   218,    96,   194,     0,     0,   193,     0,
       0,   325,   135,   325,    90,   299,     0,   284,     0,   223,
       0,   325,   339,   136,   325,    66,     0,   175,   160,   173,
     176,   169,   302,   109,     0,   108,   110,   101,   299,   106,
     107,     0,    99,   112,   103,   234,   266,   264,     0,   265,
     267,   268,   242,   231,   236,   238,   240,   286,   287,   258,
     254,   257,   148,   304,   195,     0,     0,   122,   123,   325,
      94,   130,   128,   316,     0,     0,   307,     0,     0,    91,
     325,    87,    89,   282,   291,     0,     0,   293,   129,   129,
      79,   174,   153,   154,   105,     0,     0,     0,   271,   216,
       0,   288,   311,     0,     0,     0,   319,   318,   309,   308,
       0,     0,     0,   295,   297,   292,     0,   137,   138,   113,
       0,   269,     0,   274,   217,   232,   312,   313,    95,    88,
     283,   296,     0,   294,     0,     0,   272,   277,   278,   276,
     273,   275,   298,   117,   118,     0,     0,   115,   119,   270,
       0,   114,   116,   120
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -268,  -268,   456,   225,  -268,  -268,   352,  -268,   462,  -268,
    -268,   450,  -268,  -268,  -268,   397,  -268,  -268,  -268,  -268,
    -268,  -268,   419,  -268,   386,  -268,  -268,  -268,   425,   351,
    -268,  -106,  -268,  -268,   316,  -268,    91,   333,    41,   105,
      54,   123,   268,  -268,  -268,   159,  -268,  -268,  -268,    -5,
    -197,  -175,   -79,  -268,  -268,   404,  -176,  -268,  -103,   152,
    -268,   326,  -268,   163,  -160,   304,   313,  -268,  -151,  -268,
    -189,  -177,  -268,    45,  -268,   -53,  -268,  -268,     7,  -268,
    -268,  -268,  -226,   377,  -149,  -268,  -268,  -268,   345,  -236,
    -268,   177,   173,  -267,  -268,  -268,   206,  -268,  -268,  -268,
    -268,   171,  -268,  -268,  -268,  -268,  -268,  -268,  -268,    44,
      47,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,    50,    58,  -214,  -268,  -268,   169,  -268,   162,
    -268,   103,  -268,  -268,   166,  -168,  -268,   -87,  -268,  -268,
    -268,  -268,    11,   231,   -12,  -268,  -261
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    11,    13,    14,    18,    19,    30,
      31,    32,    44,    45,    85,    86,   114,    56,    57,    63,
      64,   165,    65,    66,    67,    46,    47,    50,    51,   317,
      87,   244,    88,   131,   132,   318,   319,   294,   295,   296,
     276,   277,   116,   408,   225,   226,   412,   413,   504,   516,
     517,   297,   105,   106,   245,   320,   298,   372,   373,   155,
     156,   157,   265,   266,   518,   330,   331,    89,   246,   323,
     213,   214,   215,   398,   399,   158,   134,   159,   135,   354,
     357,   493,   196,   191,   197,   198,   303,   304,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     430,   259,   216,   260,   261,   417,   419,   420,   421,   467,
     468,   510,   511,   306,   307,   481,   308,   361,   309,   310,
     311,   456,   457,   483,   332,   333,   270,   271,   289,   290,
     366,   367,   283,   284,   285,   217,   218,   280,   108,   109,
     140,   162,   219,   391,   220,   221,   222
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   153,   192,   192,   107,   107,    20,   348,   279,   278,
     321,     7,   212,   110,     7,   107,     7,   286,   349,     7,
     267,    15,   322,   117,    15,   102,   498,   450,    15,    16,
      15,    53,     1,     2,    15,    97,   115,   499,     9,   292,
     439,    15,    16,    69,    92,   513,   327,    15,    53,   315,
     133,   344,    69,    15,    52,   513,   137,    15,   263,   264,
     514,   293,    15,    90,    12,   513,    68,    91,   263,   264,
     514,    52,   327,    92,   415,    68,    15,   160,   263,   264,
     514,   328,     1,     2,   384,    21,    69,   161,   342,   293,
      48,   426,    90,   153,     1,     2,    91,   325,   326,    98,
      15,   203,   204,   -26,    24,   374,    43,   328,   111,    68,
     359,   138,    15,    37,   136,   403,   405,   406,     3,   104,
     133,   409,   410,   385,   360,   139,   269,   404,    33,   466,
      17,   172,   482,   275,   103,   173,   107,   107,   371,   293,
     107,   104,   104,    22,   329,   334,   275,   442,   340,   383,
     337,   107,   521,   507,   338,   104,   275,   469,   515,   343,
      34,   275,   230,   232,   -84,   104,  -255,    41,   515,   272,
     104,   452,   281,   287,    35,   291,   402,   299,   515,   523,
    -255,    49,   299,   363,   136,   229,   231,   364,    36,   370,
     262,   268,   437,   371,   464,   279,   278,   416,   104,   282,
     444,   438,   267,   447,    38,   449,   508,   321,   286,   445,
     509,   275,   448,   378,   107,    59,    60,   379,    15,   322,
     104,    39,   387,   188,     1,     2,   325,   326,   345,   469,
      10,   469,   395,    10,   495,    55,   396,   200,   201,   202,
      15,   203,   204,   205,   206,   207,   234,   235,   189,   327,
     190,   188,   397,   434,   236,    25,    15,   435,    54,   474,
      62,   365,   368,   279,   278,    26,   153,   485,   300,   301,
      42,   486,    58,    15,   203,   204,   194,    61,   190,     1,
       2,   208,   237,    94,   328,   491,    27,    15,    28,   492,
     153,   238,    95,     1,     2,    99,    29,   239,   100,   209,
     392,   519,   392,   104,   458,   492,   240,   459,    15,   473,
     113,   400,   401,   388,     1,     2,   188,   223,   224,   522,
     494,  -299,   210,   522,   141,  -299,   163,   104,   142,   143,
     170,   241,     1,     2,   263,   264,   346,   347,   166,   242,
     167,   302,   168,   243,   169,   352,   353,   355,   356,   263,
     264,   171,   272,   462,   463,   487,   488,   193,   193,   281,
     176,   174,   175,   177,   287,   181,   183,   291,   179,   180,
     182,   299,   200,   201,   202,    15,   203,   204,   205,   206,
     207,   234,   235,   184,   186,   185,   187,   199,   227,   236,
     233,   190,   200,   201,   202,    15,   203,   204,   205,   206,
     207,   234,   235,   273,   274,    15,   312,   314,   324,   236,
     341,   351,   358,   350,   381,   362,   208,   237,   375,   376,
     383,   377,   369,   368,   380,   382,   238,   281,   386,   389,
     390,  -178,   239,   393,   209,   407,   208,   237,   299,   411,
     418,   240,   427,   484,   422,   423,   238,   428,   455,   461,
     436,   188,   239,   453,   209,   454,   465,   210,   489,     8,
     470,   240,   476,   164,   477,   478,   241,   471,   479,   400,
     484,   188,   490,   496,   242,   497,   211,   210,   243,   502,
      23,    40,   101,    96,   112,    93,   241,   460,   451,   228,
     512,   480,   178,   475,   440,   339,   211,   414,   243,   200,
     201,   202,    15,   203,   204,   205,   206,   207,   234,   235,
     520,   154,   288,   200,   201,   202,    15,   203,   204,   205,
     206,   207,     1,     2,   441,   432,   500,   313,   335,   195,
     425,   424,   431,   433,   505,   305,   503,   336,   472,   506,
     501,   446,   443,   208,   237,   394,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,     0,   208,     0,   239,
       0,   209,     0,     0,     0,     0,     0,     0,   240,     0,
       0,     0,   429,     0,     0,   209,     0,     0,   188,     0,
       0,     0,     0,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,   241,     0,     0,     0,     0,   210,     0,
       0,     0,     0,   211,     0,   243,   200,   201,   202,    15,
     203,   204,   205,   206,   207,   234,   235,   211,     0,     0,
     144,     0,     0,     0,   145,     0,     0,     0,   146,    70,
     119,     0,   120,   147,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   148,     0,     0,     0,
     208,     0,   123,    72,    73,    74,     0,     0,     0,     0,
       0,   149,     0,   150,    75,     0,     0,     0,   316,    76,
     126,    77,   127,     0,     0,     0,     0,     0,     0,    78,
       0,   128,   129,   151,   152,     0,     0,     0,    79,     0,
      80,   210,     0,     0,     0,    81,   130,    82,    83,    84,
       0,     0,    15,     0,     0,     0,     0,     0,     1,     2,
     177,   200,   201,   202,    15,   203,   204,   205,   206,   207,
       1,     2,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,     0,
       0,     0,     0,     0,     0,   208,     0,    75,     0,     0,
       0,     0,    76,     0,    77,     0,     0,     0,     0,     0,
       0,     0,    78,   209,     0,     0,     0,     0,     0,     0,
       0,    79,     0,    80,     0,     0,     0,     0,    81,     0,
      82,    83,    84,   142,   143,     0,   210,     0,   144,     0,
       0,     0,   145,     0,     0,     0,   146,    70,   119,     0,
     120,   147,     0,     0,     0,   211,     0,     0,     0,     0,
     121,     0,     0,     0,   148,     0,     0,     0,     0,     0,
     123,    72,    73,    74,     0,     0,     0,     0,     0,   149,
       0,   150,    75,     0,     0,     0,   125,    76,   126,    77,
     127,     0,     0,     0,     0,     0,     0,    78,     0,   128,
     129,   151,   152,     0,     0,     0,    79,     0,    80,     1,
       2,     0,     0,    81,   130,    82,    83,    84,     0,     0,
       0,     0,   118,    70,   119,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   123,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,   124,    75,     0,
       0,     0,   125,    76,   126,    77,   127,     0,     0,     0,
       0,     0,     0,    78,     0,   128,   129,     0,     0,     0,
       0,     0,    79,     0,    80,     0,     0,     0,     0,    81,
     130,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
      12,   107,   151,   152,    91,    92,    18,   243,   184,   184,
     199,     0,   163,    92,     3,   102,     5,   185,   244,     8,
     180,    11,   199,   102,    11,     3,     5,     4,    11,    12,
      11,    43,    17,    18,    11,    53,    36,     5,     0,   188,
       4,    11,    12,    55,    56,     6,    41,    11,    60,   198,
     103,     9,    64,    11,    43,     6,    27,    11,    19,    20,
      21,    38,    11,    56,   112,     6,    55,    56,    19,    20,
      21,    60,    41,    85,   341,    64,    11,    49,    19,    20,
      21,    76,    17,    18,   298,    42,    98,    59,   237,    38,
      25,   358,    85,   199,    17,    18,    85,    18,    19,   117,
      11,    12,    13,    47,   114,   281,    50,    76,    97,    98,
     109,    82,    11,    60,   103,   329,   330,   331,   103,   119,
     173,   335,   336,   299,   123,    96,   113,   122,    12,   110,
     113,   113,   122,   110,   112,   117,   223,   224,   117,    38,
     227,   119,   119,   113,   223,   224,   110,   373,   227,   117,
     113,   238,   113,    23,   117,   119,   110,   418,   119,   238,
      64,   110,   174,   175,   113,   119,   109,   115,   119,   181,
     119,   385,   184,   185,    91,   187,   327,   189,   119,   120,
     123,   116,   194,   113,   173,   174,   175,   117,    91,   113,
     179,   180,   369,   117,   408,   371,   371,   346,   119,   110,
     377,   369,   362,   380,    91,   381,    76,   396,   376,   377,
      80,   110,   380,   113,   301,   116,   117,   117,    11,   396,
     119,     3,   301,    87,    17,    18,    18,    19,   240,   490,
       5,   492,   113,     8,   470,    61,   117,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   112,    41,
     114,    87,     7,   113,    25,    18,    11,   117,    47,   436,
      53,   273,   274,   439,   439,    28,   372,   113,    39,    40,
      29,   117,   116,    11,    12,    13,   112,   112,   114,    17,
      18,    52,    53,   113,    76,   113,    49,    11,    51,   117,
     396,    62,   116,    17,    18,   112,    59,    68,    18,    70,
     312,   113,   314,   119,   391,   117,    77,   394,    11,    12,
     113,   323,   324,   302,    17,    18,    87,    19,    20,   516,
     469,   113,    93,   520,     3,   117,     3,   119,    17,    18,
      58,   102,    17,    18,    19,    20,    37,    38,   112,   110,
      88,   112,    88,   114,    78,   107,   108,   105,   106,    19,
      20,    88,   364,    19,    20,   458,   459,   151,   152,   371,
      12,   118,   118,   112,   376,   112,    88,   379,   122,   122,
      43,   383,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   112,    75,   112,   112,   112,     3,    25,
     120,   114,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    33,   112,    11,    75,    75,   122,    25,
     104,   117,   104,   113,    75,   122,    52,    53,   113,   117,
     117,   114,   121,   435,   114,   113,    62,   439,    33,   115,
     112,   114,    68,   113,    70,    95,    52,    53,   450,   102,
     112,    77,   123,   455,   115,   110,    62,   109,   124,     7,
     114,    87,    68,   112,    70,   113,    89,    93,   112,     3,
     117,    77,   115,   111,   115,   115,   102,   123,   115,   481,
     482,    87,   117,   115,   110,   115,   112,    93,   114,   122,
      18,    31,    85,    64,    98,    60,   102,   396,   383,   173,
     502,   450,   141,   439,   371,   227,   112,   338,   114,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     515,   107,   186,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   372,   362,   481,   194,   224,   152,
     357,   354,   361,   364,   490,   190,   486,   224,   435,   492,
     482,   379,   376,    52,    53,   314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    52,    -1,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,   112,    -1,   114,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   112,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    -1,    -1,    -1,    90,    -1,
      92,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    18,
     112,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    66,    -1,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    97,    -1,
      99,   100,   101,    17,    18,    -1,    93,    -1,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    30,    31,    32,    -1,
      34,    35,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      84,    85,    86,    -1,    -1,    -1,    90,    -1,    92,    17,
      18,    -1,    -1,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    17,    18,   103,   126,   127,   128,   267,   127,     0,
     128,   129,   112,   130,   131,    11,    12,   113,   132,   133,
     269,    42,   113,   133,   114,    18,    28,    49,    51,    59,
     134,   135,   136,    12,    64,    91,    91,    60,    91,     3,
     136,   115,    29,    50,   137,   138,   150,   151,    25,   116,
     152,   153,   267,   269,    47,    61,   142,   143,   116,   116,
     117,   112,    53,   144,   145,   147,   148,   149,   267,   269,
      31,    46,    55,    56,    57,    66,    71,    73,    81,    90,
      92,    97,    99,   100,   101,   139,   140,   155,   157,   192,
     203,   267,   269,   153,   113,   116,   147,    53,   117,   112,
      18,   140,     3,   112,   119,   177,   178,   262,   263,   264,
     177,   267,   149,   113,   141,    36,   167,   177,    30,    32,
      34,    44,    48,    54,    65,    70,    72,    74,    83,    84,
      98,   158,   159,   200,   201,   203,   267,    27,    82,    96,
     265,     3,    17,    18,    22,    26,    30,    35,    48,    63,
      65,    85,    86,   156,   180,   184,   185,   186,   200,   202,
      49,    59,   266,     3,   131,   146,   112,    88,    88,    78,
      58,    88,   113,   117,   118,   118,    12,   112,   154,   122,
     122,   112,    43,    88,   112,   112,    75,   112,    87,   112,
     114,   208,   209,   221,   112,   208,   207,   209,   210,   112,
       8,     9,    10,    12,    13,    14,    15,    16,    52,    70,
      93,   112,   193,   195,   196,   197,   227,   260,   261,   267,
     269,   270,   271,    19,    20,   169,   170,     3,   159,   267,
     269,   267,   269,   120,    17,    18,    25,    53,    62,    68,
      77,   102,   110,   114,   156,   179,   193,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   226,
     228,   229,   267,    19,    20,   187,   188,   189,   267,   113,
     251,   252,   269,    33,   112,   110,   165,   166,   176,   181,
     262,   269,   110,   257,   258,   259,   260,   269,   186,   253,
     254,   269,   209,    38,   162,   163,   164,   176,   181,   269,
      39,    40,   112,   211,   212,   213,   238,   239,   241,   243,
     244,   245,    75,   162,    75,   209,    70,   154,   160,   161,
     180,   195,   196,   194,   122,    18,    19,    41,    76,   177,
     190,   191,   249,   250,   177,   190,   191,   113,   117,   167,
     177,   104,   209,   177,     9,   269,    37,    38,   214,   207,
     113,   117,   107,   108,   204,   105,   106,   205,   104,   109,
     123,   242,   122,   113,   117,   269,   255,   256,   269,   121,
     113,   117,   182,   183,   181,   113,   117,   114,   113,   117,
     114,    75,   113,   117,   249,   181,    33,   177,   267,   115,
     112,   268,   269,   113,   268,   113,   117,     7,   198,   199,
     269,   269,   193,   249,   122,   249,   249,    95,   168,   249,
     249,   102,   171,   172,   170,   218,   209,   230,   112,   231,
     232,   233,   115,   110,   216,   217,   218,   123,   109,    67,
     225,   226,   188,   252,   113,   117,   114,   196,   260,     4,
     166,   184,   207,   259,   196,   260,   254,   196,   260,   181,
       4,   164,   249,   112,   113,   124,   246,   247,   262,   262,
     161,     7,    19,    20,   249,    89,   110,   234,   235,   271,
     117,   123,   256,    12,   196,   165,   115,   115,   115,   115,
     163,   240,   122,   248,   269,   113,   117,   183,   183,   112,
     117,   113,   117,   206,   209,   214,   115,   115,     5,     5,
     198,   248,   122,   247,   173,   234,   235,    23,    76,    80,
     236,   237,   269,     6,    21,   119,   174,   175,   189,   113,
     174,   113,   175,   120
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   125,   126,   126,   127,   127,   129,   128,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   137,   137,   138,   139,
     139,   140,   140,   140,   141,   140,   140,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   148,   148,
     149,   149,   149,   150,   150,   151,   151,   151,   152,   152,
     153,   153,   153,   154,   155,   156,   156,   157,   157,   157,
     157,   158,   158,   159,   159,   159,   159,   159,   160,   160,
     161,   161,   161,   161,   162,   162,   163,   163,   163,   164,
     164,   164,   164,   165,   165,   165,   166,   166,   166,   167,
     168,   168,   169,   169,   170,   170,   170,   170,   170,   170,
     170,   171,   171,   173,   172,   174,   174,   175,   175,   175,
     175,   176,   176,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   184,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   186,   187,   187,   188,
     189,   189,   190,   190,   190,   191,   192,   193,   193,   194,
     193,   195,   195,   195,   195,   195,   195,   195,   196,   196,
     197,   197,   197,   198,   198,   199,   199,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   201,
     201,   201,   202,   202,   202,   202,   202,   202,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   208,   209,   210,   210,   211,   211,   212,   213,
     213,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   219,   219,   219,   219,   219,
     220,   221,   222,   222,   223,   224,   224,   225,   225,   226,
     227,   227,   228,   228,   229,   229,   230,   231,   231,   232,
     233,   234,   234,   235,   236,   236,   237,   237,   237,   238,
     238,   238,   240,   239,   241,   242,   242,   242,   242,   243,
     243,   244,   245,   246,   246,   247,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   253,   253,   254,   254,
     255,   255,   256,   256,   257,   258,   258,   259,   259,   259,
     259,   259,   260,   260,   261,   262,   262,   263,   264,   265,
     265,   265,   265,   266,   266,   266,   267,   267,   268,   268,
     269,   270,   271
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     0,     9,     0,     1,
       3,     2,     1,     2,     1,     4,     1,     0,     1,     1,
       2,     2,     2,     2,     2,     2,     0,     1,     3,     1,
       2,     1,     1,     1,     0,     3,     1,     0,     1,     3,
       2,     0,     1,     1,     2,     0,     1,     4,     1,     3,
       1,     3,     1,     0,     1,     3,     3,     2,     1,     3,
       1,     3,     1,     3,     4,     1,     4,     3,     3,     6,
       6,     1,     3,     1,     3,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     0,     1,     1,     3,     5,     3,
       2,     3,     1,     1,     3,     5,     2,     1,     1,     5,
       0,     1,     1,     3,     2,     4,     3,     3,     3,     3,
       3,     0,     1,     0,     6,     1,     2,     1,     1,     1,
       3,     1,     3,     3,     1,     2,     2,     2,     3,     0,
       2,     1,     1,     1,     4,     4,     4,     6,     6,     1,
       4,     3,     1,     1,     3,     3,     3,     1,     3,     1,
       1,     1,     1,     3,     3,     1,     4,     1,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     4,     4,     5,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     3,     1,     1,     1,     3,
       5,     1,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     2,     1,     2,     2,     3,     1,
       1,     3,     4,     1,     3,     2,     3,     1,     3,     0,
       1,     1,     2,     1,     3,     1,     1,     3,     4,     4,
       1,     3,     4,     4,     1,     1,     3,     1,     4,     4,
       1,     1,     1,     1,     1,     0,     1,     2,     4,     0,
       1,     1,     1,     0,     1,     1,     1,     1,     0,     1,
       1,     1,     1
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
#line 413 "asn1p_y.y" /* yacc.c:1646  */
    {
		*(void **)param = (yyvsp[0].a_grammar);
	}
#line 2125 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 3:
#line 416 "asn1p_y.y" /* yacc.c:1646  */
    {
		*(void **)param = (yyvsp[0].a_grammar);
	}
#line 2133 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 4:
#line 422 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_grammar) = asn1p_new();
		checkmem((yyval.a_grammar));
		TQ_ADD(&((yyval.a_grammar)->modules), (yyvsp[0].a_module), mod_next);
	}
#line 2143 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 5:
#line 427 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_grammar) = (yyvsp[-1].a_grammar);
		TQ_ADD(&((yyval.a_grammar)->modules), (yyvsp[0].a_module), mod_next);
	}
#line 2152 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 6:
#line 444 "asn1p_y.y" /* yacc.c:1646  */
    { currentModule = asn1p_module_new(); }
#line 2158 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 7:
#line 449 "asn1p_y.y" /* yacc.c:1646  */
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
#line 2180 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 8:
#line 473 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_oid) = 0; }
#line 2186 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 9:
#line 474 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_oid) = (yyvsp[0].a_oid); }
#line 2192 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 10:
#line 478 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = (yyvsp[-1].a_oid);
	}
#line 2200 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 11:
#line 481 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = 0;
	}
#line 2208 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 12:
#line 487 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = asn1p_oid_new();
		asn1p_oid_add_arc((yyval.a_oid), &(yyvsp[0].a_oid_arc));
		if((yyvsp[0].a_oid_arc).name)
			free((yyvsp[0].a_oid_arc).name);
	}
#line 2219 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 13:
#line 493 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_oid) = (yyvsp[-1].a_oid);
		asn1p_oid_add_arc((yyval.a_oid), &(yyvsp[0].a_oid_arc));
		if((yyvsp[0].a_oid_arc).name)
			free((yyvsp[0].a_oid_arc).name);
	}
#line 2230 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 14:
#line 502 "asn1p_y.y" /* yacc.c:1646  */
    {					/* iso */
		(yyval.a_oid_arc).name = (yyvsp[0].tv_str);
		(yyval.a_oid_arc).number = -1;
	}
#line 2239 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 15:
#line 506 "asn1p_y.y" /* yacc.c:1646  */
    {		/* iso(1) */
		(yyval.a_oid_arc).name = (yyvsp[-3].tv_str);
		(yyval.a_oid_arc).number = (yyvsp[-1].a_int);
	}
#line 2248 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 16:
#line 510 "asn1p_y.y" /* yacc.c:1646  */
    {					/* 1 */
		(yyval.a_oid_arc).name = 0;
		(yyval.a_oid_arc).number = (yyvsp[0].a_int);
	}
#line 2257 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 17:
#line 520 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module_flags) = MSF_NOFLAGS; }
#line 2263 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 18:
#line 521 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = (yyvsp[0].a_module_flags);
	}
#line 2271 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 19:
#line 530 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = (yyvsp[0].a_module_flags);
	}
#line 2279 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 20:
#line 533 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = (yyvsp[-1].a_module_flags) | (yyvsp[0].a_module_flags);
	}
#line 2287 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 21:
#line 542 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_EXPLICIT_TAGS;
	}
#line 2295 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 22:
#line 545 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_IMPLICIT_TAGS;
	}
#line 2303 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 23:
#line 548 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_AUTOMATIC_TAGS;
	}
#line 2311 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 24:
#line 551 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module_flags) = MSF_EXTENSIBILITY_IMPLIED;
	}
#line 2319 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 25:
#line 555 "asn1p_y.y" /* yacc.c:1646  */
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
#line 2339 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 26:
#line 576 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = 0; }
#line 2345 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 27:
#line 577 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = (yyvsp[0].a_module);
	}
#line 2353 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 28:
#line 586 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		AL_IMPORT((yyval.a_module), exports, (yyvsp[-2].a_module), xp_next);
		AL_IMPORT((yyval.a_module), imports, (yyvsp[-1].a_module), xp_next);
		asn1p_module_move_members((yyval.a_module), (yyvsp[0].a_module));

		asn1p_module_free((yyvsp[-2].a_module));
		asn1p_module_free((yyvsp[-1].a_module));
		asn1p_module_free((yyvsp[0].a_module));
	}
#line 2368 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 29:
#line 599 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = (yyvsp[0].a_module);
	}
#line 2376 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 30:
#line 602 "asn1p_y.y" /* yacc.c:1646  */
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
#line 2391 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 31:
#line 619 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[0].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[0].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[0].a_expr));
	}
#line 2403 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 32:
#line 626 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[0].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[0].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[0].a_expr));
	}
#line 2415 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 33:
#line 640 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		assert((yyvsp[0].a_expr)->expr_type != A1TC_INVALID);
		assert((yyvsp[0].a_expr)->meta_type != AMT_INVALID);
		asn1p_module_member_add((yyval.a_module), (yyvsp[0].a_expr));
	}
#line 2427 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 34:
#line 648 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_push_encoding_control(); }
#line 2433 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 35:
#line 649 "asn1p_y.y" /* yacc.c:1646  */
    {
		fprintf(stderr,
			"WARNING: ENCODING-CONTROL %s "
			"specification at %s:%d ignored\n",
			(yyvsp[-1].tv_str), ASN_FILENAME, yylineno);
		free((yyvsp[-1].tv_str));
		(yyval.a_module) = 0;
	}
#line 2446 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 36:
#line 661 "asn1p_y.y" /* yacc.c:1646  */
    {
		return yyerror(param,
			"Attempt to redefine a standard basic string type, "
			"please comment out or remove this type redefinition.");
	}
#line 2456 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 37:
#line 674 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = 0; }
#line 2462 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 39:
#line 678 "asn1p_y.y" /* yacc.c:1646  */
    {
		if(!saved_aid && 0)
			return yyerror(param, "Unterminated IMPORTS FROM, "
					"expected semicolon ';'");
		saved_aid = 0;
		(yyval.a_module) = (yyvsp[-1].a_module);
	}
#line 2474 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 40:
#line 688 "asn1p_y.y" /* yacc.c:1646  */
    {
		return yyerror(param, "Empty IMPORTS list");
	}
#line 2482 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 41:
#line 694 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = asn1p_module_new(); }
#line 2488 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 43:
#line 698 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		TQ_ADD(&((yyval.a_module)->imports), (yyvsp[0].a_xports), xp_next);
	}
#line 2498 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 44:
#line 703 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = (yyvsp[-1].a_module);
		TQ_ADD(&((yyval.a_module)->imports), (yyvsp[0].a_xports), xp_next);
	}
#line 2507 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 45:
#line 710 "asn1p_y.y" /* yacc.c:1646  */
    { memset(&(yyval.a_aid), 0, sizeof((yyval.a_aid))); }
#line 2513 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 46:
#line 711 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_aid).oid = (yyvsp[0].a_oid); }
#line 2519 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 47:
#line 715 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-3].a_xports);
		(yyval.a_xports)->fromModuleName = (yyvsp[-1].tv_str);
		(yyval.a_xports)->identifier = (yyvsp[0].a_aid);
		/* This stupid thing is used for look-back hack. */
		saved_aid = (yyval.a_xports)->identifier.oid ? 0 : &((yyval.a_xports)->identifier);
		checkmem((yyval.a_xports));
	}
#line 2532 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 48:
#line 726 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = asn1p_xports_new();
		checkmem((yyval.a_xports));
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2542 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 49:
#line 731 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-2].a_xports);
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2551 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 50:
#line 738 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	}
#line 2562 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 51:
#line 744 "asn1p_y.y" /* yacc.c:1646  */
    {		/* Completely equivalent to above */
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	}
#line 2573 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 52:
#line 750 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
	}
#line 2584 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 53:
#line 760 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_module) = 0; }
#line 2590 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 54:
#line 761 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_module) = asn1p_module_new();
		checkmem((yyval.a_module));
		if((yyvsp[0].a_xports)) {
			TQ_ADD(&((yyval.a_module)->exports), (yyvsp[0].a_xports), xp_next);
		} else {
			/* "EXPORTS ALL;" */
		}
	}
#line 2604 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 55:
#line 773 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-1].a_xports);
	}
#line 2612 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 56:
#line 776 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = 0;
	}
#line 2620 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 57:
#line 779 "asn1p_y.y" /* yacc.c:1646  */
    {
		/* Empty EXPORTS clause effectively prohibits export. */
		(yyval.a_xports) = asn1p_xports_new();
		checkmem((yyval.a_xports));
	}
#line 2630 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 58:
#line 787 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = asn1p_xports_new();
		assert((yyval.a_xports));
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2640 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 59:
#line 792 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_xports) = (yyvsp[-2].a_xports);
		TQ_ADD(&((yyval.a_xports)->xp_members), (yyvsp[0].a_expr), next);
	}
#line 2649 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 60:
#line 799 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	}
#line 2660 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 61:
#line 805 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	}
#line 2671 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 62:
#line 811 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
		(yyval.a_expr)->expr_type = A1TC_EXPORTVAR;
	}
#line 2682 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 63:
#line 820 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = (yyvsp[-1].a_constr); }
#line 2688 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 64:
#line 823 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->meta_type = AMT_VALUESET;
		(yyval.a_expr)->constraints = (yyvsp[0].a_constr);
	}
#line 2700 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 65:
#line 843 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[0].a_ref);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_TYPEREF;
	}
#line 2712 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 66:
#line 853 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[-3].a_ref);
		(yyval.a_expr)->rhs_pspecs = (yyvsp[-1].a_expr);
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_TYPEREF;
	}
#line 2725 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 67:
#line 873 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		assert((yyval.a_expr)->expr_type);
		assert((yyval.a_expr)->meta_type);
	}
#line 2736 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 68:
#line 879 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		assert((yyval.a_expr)->expr_type == A1TC_CLASSDEF);
		assert((yyval.a_expr)->meta_type == AMT_OBJECTCLASS);
	}
#line 2747 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 69:
#line 895 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-5].tv_str);
		(yyval.a_expr)->lhs_params = (yyvsp[-3].a_plist);
	}
#line 2757 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 70:
#line 901 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		(yyval.a_expr)->Identifier = (yyvsp[-5].tv_str);
		(yyval.a_expr)->lhs_params = (yyvsp[-3].a_plist);
	}
#line 2767 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 71:
#line 909 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_plist) = asn1p_paramlist_new(yylineno);
		checkmem((yyval.a_plist));
		ret = asn1p_paramlist_add_param((yyval.a_plist), (yyvsp[0].a_parg).governor, (yyvsp[0].a_parg).argument);
		checkmem(ret == 0);
		asn1p_ref_free((yyvsp[0].a_parg).governor);
		free((yyvsp[0].a_parg).argument);
	}
#line 2781 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 72:
#line 918 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_plist) = (yyvsp[-2].a_plist);
		ret = asn1p_paramlist_add_param((yyval.a_plist), (yyvsp[0].a_parg).governor, (yyvsp[0].a_parg).argument);
		checkmem(ret == 0);
		asn1p_ref_free((yyvsp[0].a_parg).governor);
		free((yyvsp[0].a_parg).argument);
	}
#line 2794 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 73:
#line 929 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_parg).governor = NULL;
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
	}
#line 2803 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 74:
#line 933 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor, (yyvsp[-2].tv_str), 0);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
		free((yyvsp[-2].tv_str));
	}
#line 2816 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 75:
#line 941 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor, (yyvsp[-2].tv_str), 0);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
		free((yyvsp[-2].tv_str));
	}
#line 2829 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 76:
#line 949 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor,
			ASN_EXPR_TYPE2STR((yyvsp[-2].a_type)), 1);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
	}
#line 2842 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 77:
#line 957 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_parg).governor = asn1p_ref_new(yylineno, currentModule);
		ret = asn1p_ref_add_component((yyval.a_parg).governor,
			ASN_EXPR_TYPE2STR((yyvsp[-2].a_type)), 1);
		checkmem(ret == 0);
		(yyval.a_parg).argument = (yyvsp[0].tv_str);
	}
#line 2855 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 78:
#line 968 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2865 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 79:
#line 973 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2874 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 81:
#line 981 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("?");
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 2887 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 82:
#line 989 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("?");
		(yyval.a_expr)->expr_type = A1TC_REFERENCE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 2900 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 83:
#line 997 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->expr_type = A1TC_VALUESET;
		(yyval.a_expr)->meta_type = AMT_VALUESET;
		(yyval.a_expr)->constraints = (yyvsp[0].a_constr);
	}
#line 2911 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1020 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_expr) = NEW_EXPR(); }
#line 2917 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1021 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_expr) = (yyvsp[0].a_expr); }
#line 2923 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1024 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2933 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1029 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2942 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1033 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-4].a_expr);
		(yyvsp[-1].a_expr)->meta_type = AMT_TYPE;
		(yyvsp[-1].a_expr)->expr_type = ASN_CONSTR_SEQUENCE;
		(yyvsp[-1].a_expr)->marker.flags |= EM_OPTIONAL;
		asn1p_expr_add((yyval.a_expr), (yyvsp[-1].a_expr));
	}
#line 2954 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1043 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyvsp[0].a_marker).flags |= (yyval.a_expr)->marker.flags;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 2966 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1050 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		(yyvsp[0].a_marker).flags |= (yyval.a_expr)->marker.flags;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
		_fixup_anonymous_identifier((yyval.a_expr));
	}
#line 2977 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1056 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->meta_type = (yyvsp[0].a_expr)->meta_type;
		(yyval.a_expr)->expr_type = A1TC_COMPONENTS_OF;
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 2989 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1063 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
	}
#line 2997 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1069 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3007 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1074 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3016 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1078 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-4].a_expr);
		(yyvsp[-1].a_expr)->meta_type = AMT_TYPE;
		(yyvsp[-1].a_expr)->expr_type = ASN_CONSTR_SEQUENCE;
		(yyvsp[-1].a_expr)->marker.flags |= EM_OPTIONAL;
		asn1p_expr_add((yyval.a_expr), (yyvsp[-1].a_expr));
	}
#line 3028 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1088 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		assert((yyval.a_expr)->Identifier == 0);
		(yyval.a_expr)->Identifier = (yyvsp[-1].tv_str);
	}
#line 3038 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1093 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
	}
#line 3046 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1096 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[0].a_expr);
		_fixup_anonymous_identifier((yyval.a_expr));
	}
#line 3055 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1103 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		checkmem((yyval.a_expr));
		(yyval.a_expr)->with_syntax = (yyvsp[0].a_wsynt);
		assert((yyval.a_expr)->expr_type == A1TC_CLASSDEF);
		assert((yyval.a_expr)->meta_type == AMT_OBJECTCLASS);
	}
#line 3067 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1113 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_int) = 0; }
#line 3073 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1114 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_int) = 1; }
#line 3079 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1118 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_CLASSDEF;
		(yyval.a_expr)->meta_type = AMT_OBJECTCLASS;
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3091 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1125 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 3100 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1135 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-1].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_TFS;	/* TypeFieldSpec */
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3113 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1145 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_FTVFS;	/* FixedTypeValueFieldSpec */
		(yyval.a_expr)->unique = (yyvsp[-1].a_int);
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
		asn1p_expr_add((yyval.a_expr), (yyvsp[-2].a_expr));
	}
#line 3127 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1156 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_VTVFS;
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3140 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1166 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_OFS;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3154 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1177 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_VTVSFS;
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3167 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1187 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_FTVSFS;
		asn1p_expr_add((yyval.a_expr), (yyvsp[-1].a_expr));
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3181 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1198 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = (yyvsp[-2].tv_str);
		(yyval.a_expr)->reference = (yyvsp[-1].a_ref);
		(yyval.a_expr)->meta_type = AMT_OBJECTFIELD;
		(yyval.a_expr)->expr_type = A1TC_CLASSFIELD_OSFS;
		(yyval.a_expr)->marker = (yyvsp[0].a_marker);
	}
#line 3195 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1210 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_wsynt) = 0; }
#line 3201 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1211 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = (yyvsp[0].a_wsynt);
	}
#line 3209 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1218 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_enable_with_syntax(); }
#line 3215 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1220 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = (yyvsp[-1].a_wsynt);
	}
#line 3223 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1226 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = asn1p_wsyntx_new();
		TQ_ADD(&((yyval.a_wsynt)->chunks), (yyvsp[0].a_wchunk), next);
	}
#line 3232 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1230 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wsynt) = (yyvsp[-1].a_wsynt);
		TQ_ADD(&((yyval.a_wsynt)->chunks), (yyvsp[0].a_wchunk), next);
	}
#line 3241 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1237 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[0].tv_opaque).buf, 0);
		(yyval.a_wchunk)->type = WC_WHITESPACE;
	}
#line 3250 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1241 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[0].tv_str), 0);
	}
#line 3258 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1244 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromstring((yyvsp[0].a_refcomp).name, 0);
		(yyval.a_wchunk)->type = WC_FIELD;
	}
#line 3267 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1248 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_wchunk) = asn1p_wsyntx_chunk_fromsyntax((yyvsp[-1].a_wsynt));
	}
#line 3275 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1254 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3288 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1262 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->value = (yyvsp[0].a_value);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3302 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1271 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		(yyval.a_expr)->value = (yyvsp[0].a_value);
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3316 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1285 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[0].a_expr);
        (yyval.a_expr)->tag = (yyvsp[-1].a_tag);
    }
#line 3325 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1292 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3350 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1315 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3375 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1338 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3401 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1362 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_int) = asn1p_as_pointer ? EM_INDIRECT : 0;
		asn1p_as_pointer = 0;
	}
#line 3410 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1369 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3431 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1393 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_CHOICE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3442 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1399 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SEQUENCE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3453 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1405 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-1].a_expr);
		assert((yyval.a_expr)->expr_type == A1TC_INVALID);
		(yyval.a_expr)->expr_type = ASN_CONSTR_SET;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3464 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1411 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3479 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1421 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3494 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1431 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = ASN_TYPE_ANY;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3505 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1437 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3522 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1449 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->reference = (yyvsp[0].a_ref);
		(yyval.a_expr)->expr_type = A1TC_INSTANCE;
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3534 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1464 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_UNKNOWN);
		checkmem(ret == 0);
		free((yyvsp[0].tv_str));
	}
#line 3547 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1472 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_CAPITALS);
		free((yyvsp[0].tv_str));
		checkmem(ret == 0);
	}
#line 3560 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1480 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3576 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1491 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3592 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1502 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3616 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1524 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		checkmem((yyval.a_ref));
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].a_refcomp).name, (yyvsp[0].a_refcomp).lex_type);
		free((yyvsp[0].a_refcomp).name);
		checkmem(ret == 0);
	}
#line 3629 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1532 "asn1p_y.y" /* yacc.c:1646  */
    {
		int ret;
		(yyval.a_ref) = (yyvsp[-2].a_ref);
		ret = asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].a_refcomp).name, (yyvsp[0].a_refcomp).lex_type);
		free((yyvsp[0].a_refcomp).name);
		checkmem(ret == 0);
	}
#line 3641 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1545 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_refcomp).lex_type = RLT_AmpUppercase;
		(yyval.a_refcomp).name = (yyvsp[0].tv_str);
	}
#line 3650 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1550 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_refcomp).lex_type = RLT_Amplowercase;
		(yyval.a_refcomp).name = (yyvsp[0].tv_str);
	}
#line 3659 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1559 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_AmpUppercase);
		free((yyvsp[0].tv_str));
	}
#line 3669 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1564 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = (yyval.a_ref);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_AmpUppercase);
		free((yyvsp[0].tv_str));
	}
#line 3679 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1569 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = (yyval.a_ref);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_Amplowercase);
		free((yyvsp[0].tv_str));
	}
#line 3689 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1577 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_CAPITALS);
		free((yyvsp[0].tv_str));
	}
#line 3699 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1600 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		assert((yyval.a_expr)->Identifier == NULL);
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 3711 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1612 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_push_opaque_state(); }
#line 3717 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1612 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_UNPARSED;
	}
#line 3727 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1620 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_NULL;
	}
#line 3737 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1625 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(0);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_FALSE;
	}
#line 3747 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1630 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(1);
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_TRUE;
	}
#line 3757 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1643 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3776 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1661 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
		checkmem((yyval.a_value));
	}
#line 3785 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1665 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_TUPLE;
	}
#line 3795 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1670 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
		(yyval.a_value)->type = ATV_QUADRUPLE;
	}
#line 3805 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1678 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.tv_opaque).len = (yyvsp[0].tv_opaque).len + 1;
		(yyval.tv_opaque).buf = malloc(1 + (yyval.tv_opaque).len + 1);
		checkmem((yyval.tv_opaque).buf);
		(yyval.tv_opaque).buf[0] = '{';
		memcpy((yyval.tv_opaque).buf + 1, (yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len);
		(yyval.tv_opaque).buf[(yyval.tv_opaque).len] = '\0';
		free((yyvsp[0].tv_opaque).buf);
    }
#line 3819 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1687 "asn1p_y.y" /* yacc.c:1646  */
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
#line 3836 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1703 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.tv_opaque).len = strlen((yyvsp[0].tv_str));
        (yyval.tv_opaque).buf = (yyvsp[0].tv_str);
    }
#line 3845 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1709 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_BOOLEAN; }
#line 3851 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1710 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_NULL; }
#line 3857 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1711 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_REAL; }
#line 3863 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1712 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_OCTET_STRING; }
#line 3869 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1713 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_OBJECT_IDENTIFIER; }
#line 3875 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1714 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_RELATIVE_OID; }
#line 3881 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1716 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_EMBEDDED_PDV; }
#line 3887 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1717 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_CHARACTER_STRING; }
#line 3893 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1718 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_UTCTime; }
#line 3899 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1719 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_GeneralizedTime; }
#line 3905 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1728 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_INTEGER; }
#line 3911 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1729 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_ENUMERATED; }
#line 3917 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1730 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_BASIC_BIT_STRING; }
#line 3923 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1734 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = (yyvsp[0].a_type);
		(yyval.a_expr)->meta_type = AMT_TYPE;
	}
#line 3934 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1740 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_INTEGER;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3944 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1745 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_ENUMERATED;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3954 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1750 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3964 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1755 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_expr) = (yyvsp[-1].a_expr);
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3974 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1760 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
        (yyval.a_expr)->expr_type = ASN_BASIC_BIT_STRING;
        (yyval.a_expr)->meta_type = AMT_TYPE;
    }
#line 3985 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1769 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_BMPString; }
#line 3991 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1770 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_GeneralString;
		fprintf(stderr, "WARNING: GeneralString is not fully supported\n");
	}
#line 4000 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1774 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_GraphicString;
		fprintf(stderr, "WARNING: GraphicString is not fully supported\n");
	}
#line 4009 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1778 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_IA5String; }
#line 4015 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1779 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_ISO646String; }
#line 4021 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1780 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_NumericString; }
#line 4027 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1781 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_PrintableString; }
#line 4033 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1782 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_T61String;
		fprintf(stderr, "WARNING: T61String is not fully supported\n");
	}
#line 4042 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1786 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_TeletexString; }
#line 4048 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1787 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_UniversalString; }
#line 4054 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1788 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_UTF8String; }
#line 4060 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1789 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_type) = ASN_STRING_VideotexString;
		fprintf(stderr, "WARNING: VideotexString is not fully supported\n");
	}
#line 4069 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1793 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_VisibleString; }
#line 4075 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1794 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_type) = ASN_STRING_ObjectDescriptor; }
#line 4081 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1806 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = 0; }
#line 4087 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1811 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = 0; }
#line 4093 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1816 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = 0; }
#line 4099 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1822 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[-1].a_constr), 0);
    }
#line 4107 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1829 "asn1p_y.y" /* yacc.c:1646  */
    {
        if((yyvsp[0].a_constr)->type == ACT_CA_SET && (yyvsp[0].a_constr)->el_count == 1) {
            CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[-1].a_constr), (yyvsp[0].a_constr)->elements[0]);
        } else {
            CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_SET, (yyvsp[-1].a_constr), (yyvsp[0].a_constr));
        }
	}
#line 4119 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1843 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_EL_EXT;
	}
#line 4128 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1848 "asn1p_y.y" /* yacc.c:1646  */
    {
       asn1p_constraint_t *ct;
       ct = asn1p_constraint_new(yylineno, currentModule);
       ct->type = ACT_EL_EXT;
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[-2].a_constr), ct);
   }
#line 4139 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1854 "asn1p_y.y" /* yacc.c:1646  */
    {
       asn1p_constraint_t *ct;
       ct = asn1p_constraint_new(yylineno, currentModule);
       ct->type = ACT_EL_EXT;
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[-4].a_constr), ct);
       ct = (yyval.a_constr);
       CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, ct, (yyvsp[0].a_constr));
   }
#line 4152 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1866 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_AEX, (yyvsp[0].a_constr), 0);
	}
#line 4160 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1873 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_UNI, (yyvsp[-2].a_constr), (yyvsp[0].a_constr));
	}
#line 4168 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1880 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_INT, (yyvsp[-2].a_constr), (yyvsp[0].a_constr));
	}
#line 4176 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1888 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_EXC, (yyvsp[-2].a_constr), (yyvsp[0].a_constr));
	}
#line 4184 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1895 "asn1p_y.y" /* yacc.c:1646  */
    {
        int ret;
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        checkmem((yyval.a_constr));
        (yyval.a_constr)->type = ACT_CA_SET;
        ret = asn1p_constraint_insert((yyval.a_constr), (yyvsp[-1].a_constr));
        checkmem(ret == 0);
    }
#line 4197 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1906 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_VALUE;
		(yyval.a_constr)->value = (yyvsp[0].a_value);
	}
#line 4208 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1912 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_TYPE;
		(yyval.a_constr)->containedSubtype = (yyvsp[0].a_value);
	}
#line 4219 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1928 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_FROM, (yyvsp[0].a_constr), 0);
	}
#line 4227 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1933 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_SIZE, (yyvsp[0].a_constr), 0);
	}
#line 4235 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1938 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_PATTERN;
		(yyval.a_constr)->value = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
	}
#line 4245 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1943 "asn1p_y.y" /* yacc.c:1646  */
    {
		asn1p_ref_t *ref;
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_PATTERN;
		ref = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component(ref, (yyvsp[0].tv_str), RLT_lowercase);
		(yyval.a_constr)->value = asn1p_value_fromref(ref, 0);
		free((yyvsp[0].tv_str));
	}
#line 4259 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1955 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = (yyvsp[-1].a_ctype);
		(yyval.a_constr)->range_start = (yyvsp[-2].a_value);
		(yyval.a_constr)->range_stop = (yyvsp[0].a_value);
    }
#line 4271 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1965 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(-123);
		(yyval.a_value)->type = ATV_MIN;
    }
#line 4280 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1972 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint(321);
		(yyval.a_value)->type = ATV_MAX;
    }
#line 4289 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1980 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = _convert_bitstring2binary((yyvsp[0].tv_str), 'B');
		checkmem((yyval.a_value));
		free((yyvsp[0].tv_str));
	}
#line 4299 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1985 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = _convert_bitstring2binary((yyvsp[0].tv_str), 'H');
		checkmem((yyval.a_value));
		free((yyvsp[0].tv_str));
	}
#line 4309 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1993 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromtype((yyvsp[0].a_expr));
		checkmem((yyval.a_value));
		asn1p_expr_free((yyvsp[0].a_expr));
    }
#line 4319 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1999 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromtype((yyvsp[0].a_expr));
		checkmem((yyval.a_value));
		asn1p_expr_free((yyvsp[0].a_expr));
    }
#line 4329 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2011 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CT_WCOMP, (yyvsp[0].a_constr), 0);
	}
#line 4337 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2014 "asn1p_y.y" /* yacc.c:1646  */
    {
        assert((yyvsp[0].a_constr)->type == ACT_CA_CSV);
        (yyvsp[0].a_constr)->type = ACT_CT_WCOMPS;
        (yyval.a_constr) = (yyvsp[0].a_constr);
	}
#line 4347 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2022 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_constr) = (yyvsp[-1].a_constr); }
#line 4353 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2024 "asn1p_y.y" /* yacc.c:1646  */
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
#line 4370 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2037 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        (yyval.a_constr)->type = ACT_CA_CSV;
        asn1p_constraint_insert((yyval.a_constr), (yyvsp[0].a_constr));
    }
#line 4380 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2042 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_constr) = (yyvsp[-2].a_constr);
        asn1p_constraint_insert((yyval.a_constr), (yyvsp[0].a_constr));
	}
#line 4389 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2048 "asn1p_y.y" /* yacc.c:1646  */
    {
        (yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
        checkmem((yyval.a_constr));
        (yyval.a_constr)->type = ACT_EL_VALUE;
        (yyval.a_constr)->value = (yyvsp[-2].a_value);
        if((yyvsp[-1].a_constr)) asn1p_constraint_insert((yyval.a_constr), (yyvsp[-1].a_constr));
        (yyval.a_constr)->presence = (yyvsp[0].a_pres);
    }
#line 4402 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2062 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_pres) = ACPRES_DEFAULT; }
#line 4408 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2063 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_pres) = (yyvsp[0].a_pres); }
#line 4414 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2067 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_pres) = ACPRES_PRESENT;
	}
#line 4422 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2070 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_pres) = ACPRES_ABSENT;
	}
#line 4430 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2073 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_pres) = ACPRES_OPTIONAL;
	}
#line 4438 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2088 "asn1p_y.y" /* yacc.c:1646  */
    { asn1p_lexer_hack_push_opaque_state(); }
#line 4444 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2088 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_CT_CTDBY;
		(yyval.a_constr)->value = asn1p_value_frombuf((yyvsp[0].tv_opaque).buf, (yyvsp[0].tv_opaque).len, 0);
		checkmem((yyval.a_constr)->value);
		(yyval.a_constr)->value->type = ATV_UNPARSED;
	}
#line 4457 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2099 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		(yyval.a_constr)->type = ACT_CT_CTNG;
		(yyval.a_constr)->value = asn1p_value_fromtype((yyvsp[0].a_expr));
		asn1p_expr_free((yyvsp[0].a_expr));
	}
#line 4468 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2108 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_RANGE; }
#line 4474 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2109 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_RLRANGE; }
#line 4480 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2110 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_LLRANGE; }
#line 4486 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2111 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_ctype) = ACT_EL_ULRANGE; }
#line 4492 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2114 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = (yyvsp[0].a_constr);
	}
#line 4500 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2117 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = (yyvsp[0].a_constr);
	}
#line 4508 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2126 "asn1p_y.y" /* yacc.c:1646  */
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
#line 4526 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2142 "asn1p_y.y" /* yacc.c:1646  */
    {
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CRC, (yyvsp[-3].a_constr), (yyvsp[-1].a_constr));
	}
#line 4534 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2148 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_constr) = asn1p_constraint_new(yylineno, currentModule);
		checkmem((yyval.a_constr));
		(yyval.a_constr)->type = ACT_EL_VALUE;
		(yyval.a_constr)->value = asn1p_value_fromref((yyvsp[0].a_ref), 0);
	}
#line 4545 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2154 "asn1p_y.y" /* yacc.c:1646  */
    {
		asn1p_constraint_t *ct;
		ct = asn1p_constraint_new(yylineno, currentModule);
		checkmem(ct);
		ct->type = ACT_EL_VALUE;
		ct->value = asn1p_value_fromref((yyvsp[0].a_ref), 0);
		CONSTRAINT_INSERT((yyval.a_constr), ACT_CA_CSV, (yyvsp[-2].a_constr), ct);
	}
#line 4558 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2168 "asn1p_y.y" /* yacc.c:1646  */
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
#line 4574 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2179 "asn1p_y.y" /* yacc.c:1646  */
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
#line 4591 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2195 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 4599 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2198 "asn1p_y.y" /* yacc.c:1646  */
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
#line 4615 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2218 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_marker).flags = EM_NOMARK;
		(yyval.a_marker).default_value = 0;
	}
#line 4624 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2222 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_marker) = (yyvsp[0].a_marker); }
#line 4630 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2226 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_marker).flags = EM_OPTIONAL | EM_INDIRECT;
		(yyval.a_marker).default_value = 0;
	}
#line 4639 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2230 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_marker).flags = EM_DEFAULT;
		(yyval.a_marker).default_value = (yyvsp[0].a_value);
	}
#line 4648 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2237 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
    }
#line 4658 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2242 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
    }
#line 4667 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2248 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
    }
#line 4679 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2257 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4689 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2262 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4698 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2269 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4711 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2277 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4724 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2287 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4734 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2292 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4743 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2299 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = asn1p_value_fromint((yyvsp[-1].a_int));
	}
#line 4756 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2307 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4769 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2317 "asn1p_y.y" /* yacc.c:1646  */
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
#line 4787 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2332 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4797 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2337 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = (yyvsp[-2].a_expr);
		asn1p_expr_add((yyval.a_expr), (yyvsp[0].a_expr));
	}
#line 4806 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2344 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[0].tv_str);
	}
#line 4818 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2351 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4831 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2359 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->Identifier = (yyvsp[-3].tv_str);
		(yyval.a_expr)->value = (yyvsp[-1].a_value);
	}
#line 4844 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2367 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->expr_type = A1TC_UNIVERVAL;
		(yyval.a_expr)->meta_type = AMT_VALUE;
		(yyval.a_expr)->value = (yyvsp[0].a_value);
	}
#line 4856 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2374 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_expr) = NEW_EXPR();
		checkmem((yyval.a_expr));
		(yyval.a_expr)->Identifier = strdup("...");
		checkmem((yyval.a_expr)->Identifier);
		(yyval.a_expr)->expr_type = A1TC_EXTENSIBLE;
		(yyval.a_expr)->meta_type = AMT_VALUE;
	}
#line 4869 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2385 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
	}
#line 4878 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2389 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromint((yyvsp[0].a_int));
		checkmem((yyval.a_value));
	}
#line 4887 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2396 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromdouble((yyvsp[0].a_dbl));
		checkmem((yyval.a_value));
	}
#line 4896 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2427 "asn1p_y.y" /* yacc.c:1646  */
    { memset(&(yyval.a_tag), 0, sizeof((yyval.a_tag))); }
#line 4902 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2428 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag) = (yyvsp[0].a_tag); }
#line 4908 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2432 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_tag) = (yyvsp[-1].a_tag);
		(yyval.a_tag).tag_mode = (yyvsp[0].a_tag).tag_mode;
	}
#line 4917 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2439 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_tag) = (yyvsp[-2].a_tag);
		(yyval.a_tag).tag_value = (yyvsp[-1].a_int);
	}
#line 4926 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2445 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_CONTEXT_SPECIFIC; }
#line 4932 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2446 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_UNIVERSAL; }
#line 4938 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2447 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_APPLICATION; }
#line 4944 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2448 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_class = TC_PRIVATE; }
#line 4950 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2452 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_mode = TM_DEFAULT; }
#line 4956 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2453 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_mode = TM_IMPLICIT; }
#line 4962 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2454 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.a_tag).tag_mode = TM_EXPLICIT; }
#line 4968 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2458 "asn1p_y.y" /* yacc.c:1646  */
    {
		checkmem((yyvsp[0].tv_str));
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 4977 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2462 "asn1p_y.y" /* yacc.c:1646  */
    {
		checkmem((yyvsp[0].tv_str));
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 4986 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2470 "asn1p_y.y" /* yacc.c:1646  */
    { (yyval.tv_str) = 0; }
#line 4992 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2471 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 5000 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2477 "asn1p_y.y" /* yacc.c:1646  */
    {
		checkmem((yyvsp[0].tv_str));
		(yyval.tv_str) = (yyvsp[0].tv_str);
	}
#line 5009 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2484 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_ref) = asn1p_ref_new(yylineno, currentModule);
		asn1p_ref_add_component((yyval.a_ref), (yyvsp[0].tv_str), RLT_lowercase);
		free((yyvsp[0].tv_str));
    }
#line 5019 "asn1p_y.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2491 "asn1p_y.y" /* yacc.c:1646  */
    {
		(yyval.a_value) = asn1p_value_fromref((yyvsp[0].a_ref), 0);
    }
#line 5027 "asn1p_y.c" /* yacc.c:1646  */
    break;


#line 5031 "asn1p_y.c" /* yacc.c:1646  */
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
#line 2495 "asn1p_y.y" /* yacc.c:1906  */



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

