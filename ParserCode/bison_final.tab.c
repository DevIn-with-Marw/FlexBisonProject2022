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
#line 1 "bison_final.y"

    #define YYLTYPE_IS_DECLARED 1 /* alert the parser that we have our own definition */
    #include "Flex_Bison_header.h"

    int numWinNumbers = 0;
    int numPrizeCateg = 0;


#line 80 "bison_final.tab.c"

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

#include "bison_final.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_gameId = 3,                     /* gameId  */
  YYSYMBOL_drawId = 4,                     /* drawId  */
  YYSYMBOL_drawTime = 5,                   /* drawTime  */
  YYSYMBOL_status = 6,                     /* status  */
  YYSYMBOL_drawBreak = 7,                  /* drawBreak  */
  YYSYMBOL_visualDraw = 8,                 /* visualDraw  */
  YYSYMBOL_pricePoints = 9,                /* pricePoints  */
  YYSYMBOL_amount = 10,                    /* amount  */
  YYSYMBOL_wagerStatistics = 11,           /* wagerStatistics  */
  YYSYMBOL_columns = 12,                   /* columns  */
  YYSYMBOL_wagers = 13,                    /* wagers  */
  YYSYMBOL_addOn = 14,                     /* addOn  */
  YYSYMBOL_prizeCategories = 15,           /* prizeCategories  */
  YYSYMBOL_winningNumbers = 16,            /* winningNumbers  */
  YYSYMBOL_list = 17,                      /* list  */
  YYSYMBOL_bonus = 18,                     /* bonus  */
  YYSYMBOL_id = 19,                        /* id  */
  YYSYMBOL_divident = 20,                  /* divident  */
  YYSYMBOL_winners = 21,                   /* winners  */
  YYSYMBOL_distributed = 22,               /* distributed  */
  YYSYMBOL_jackpot = 23,                   /* jackpot  */
  YYSYMBOL_categoryType = 24,              /* categoryType  */
  YYSYMBOL_fixed = 25,                     /* fixed  */
  YYSYMBOL_gameType = 26,                  /* gameType  */
  YYSYMBOL_minimumDistributed = 27,        /* minimumDistributed  */
  YYSYMBOL_last = 28,                      /* last  */
  YYSYMBOL_active = 29,                    /* active  */
  YYSYMBOL_totalPages = 30,                /* totalPages  */
  YYSYMBOL_totalElements = 31,             /* totalElements  */
  YYSYMBOL_numberOfElements = 32,          /* numberOfElements  */
  YYSYMBOL_size = 33,                      /* size  */
  YYSYMBOL_number = 34,                    /* number  */
  YYSYMBOL_content = 35,                   /* content  */
  YYSYMBOL_first = 36,                     /* first  */
  YYSYMBOL_sort = 37,                      /* sort  */
  YYSYMBOL_direction = 38,                 /* direction  */
  YYSYMBOL_property = 39,                  /* property  */
  YYSYMBOL_ignoreCase = 40,                /* ignoreCase  */
  YYSYMBOL_nullHandling = 41,              /* nullHandling  */
  YYSYMBOL_descending = 42,                /* descending  */
  YYSYMBOL_ascending = 43,                 /* ascending  */
  YYSYMBOL_POS_INTR = 44,                  /* POS_INTR  */
  YYSYMBOL_POS_INT28 = 45,                 /* POS_INT28  */
  YYSYMBOL_POS_INT = 46,                   /* POS_INT  */
  YYSYMBOL_STRING = 47,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 48,                   /* BOOLEAN  */
  YYSYMBOL_PROPERTY_STRING = 49,           /* PROPERTY_STRING  */
  YYSYMBOL_GAMEID_VALUE = 50,              /* GAMEID_VALUE  */
  YYSYMBOL_WIN_POS_INT = 51,               /* WIN_POS_INT  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* ':'  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_1_ = 58,                     /* '1'  */
  YYSYMBOL_59_0_ = 59,                     /* '0'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_jfile = 61,                     /* jfile  */
  YYSYMBOL_jfile1 = 62,                    /* jfile1  */
  YYSYMBOL_jfile2 = 63,                    /* jfile2  */
  YYSYMBOL_last_field = 64,                /* last_field  */
  YYSYMBOL_active_field = 65,              /* active_field  */
  YYSYMBOL_gameid_field = 66,              /* gameid_field  */
  YYSYMBOL_drawid_field = 67,              /* drawid_field  */
  YYSYMBOL_drawtime_field = 68,            /* drawtime_field  */
  YYSYMBOL_status_field = 69,              /* status_field  */
  YYSYMBOL_drawbreak_field = 70,           /* drawbreak_field  */
  YYSYMBOL_visualdraw_field = 71,          /* visualdraw_field  */
  YYSYMBOL_pricepoints_field = 72,         /* pricepoints_field  */
  YYSYMBOL_amountfield = 73,               /* amountfield  */
  YYSYMBOL_win_num_field = 74,             /* win_num_field  */
  YYSYMBOL_75_1 = 75,                      /* $@1  */
  YYSYMBOL_bonus_field = 76,               /* bonus_field  */
  YYSYMBOL_list_field = 77,                /* list_field  */
  YYSYMBOL_posintArray = 78,               /* posintArray  */
  YYSYMBOL_secintArray = 79,               /* secintArray  */
  YYSYMBOL_wagerstat_field = 80,           /* wagerstat_field  */
  YYSYMBOL_columns_field = 81,             /* columns_field  */
  YYSYMBOL_wagers_field = 82,              /* wagers_field  */
  YYSYMBOL_addon_field = 83,               /* addon_field  */
  YYSYMBOL_prizecat_field = 84,            /* prizecat_field  */
  YYSYMBOL_jsonArray = 85,                 /* jsonArray  */
  YYSYMBOL_secjsonArray = 86,              /* secjsonArray  */
  YYSYMBOL_generaljsonArray = 87,          /* generaljsonArray  */
  YYSYMBOL_generaljsonArray2 = 88,         /* generaljsonArray2  */
  YYSYMBOL_jsonObj = 89,                   /* jsonObj  */
  YYSYMBOL_id1_field = 90,                 /* id1_field  */
  YYSYMBOL_id2_field = 91,                 /* id2_field  */
  YYSYMBOL_divident_field = 92,            /* divident_field  */
  YYSYMBOL_winners_field = 93,             /* winners_field  */
  YYSYMBOL_distributed_field = 94,         /* distributed_field  */
  YYSYMBOL_jackpot_field = 95,             /* jackpot_field  */
  YYSYMBOL_fixed_field = 96,               /* fixed_field  */
  YYSYMBOL_categorytype_field = 97,        /* categorytype_field  */
  YYSYMBOL_gametype_field = 98,            /* gametype_field  */
  YYSYMBOL_mindistr_field = 99,            /* mindistr_field  */
  YYSYMBOL_tpages_field = 100,             /* tpages_field  */
  YYSYMBOL_telements_field = 101,          /* telements_field  */
  YYSYMBOL_numofelements_field = 102,      /* numofelements_field  */
  YYSYMBOL_size_field = 103,               /* size_field  */
  YYSYMBOL_number_field = 104,             /* number_field  */
  YYSYMBOL_content_field = 105,            /* content_field  */
  YYSYMBOL_lastb_field = 106,              /* lastb_field  */
  YYSYMBOL_first_field = 107,              /* first_field  */
  YYSYMBOL_jsonArray2 = 108,               /* jsonArray2  */
  YYSYMBOL_secjsonArray2 = 109,            /* secjsonArray2  */
  YYSYMBOL_jsonObj2 = 110,                 /* jsonObj2  */
  YYSYMBOL_sort_field = 111,               /* sort_field  */
  YYSYMBOL_sortArray = 112,                /* sortArray  */
  YYSYMBOL_direction_field = 113,          /* direction_field  */
  YYSYMBOL_property_field = 114,           /* property_field  */
  YYSYMBOL_ignorecase_field = 115,         /* ignorecase_field  */
  YYSYMBOL_nullhandling_field = 116,       /* nullhandling_field  */
  YYSYMBOL_descending_field = 117,         /* descending_field  */
  YYSYMBOL_ascending_field = 118           /* ascending_field  */
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
typedef yytype_int16 yy_state_t;

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  318

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
       2,     2,     2,     2,    53,     2,     2,     2,    59,    58,
       2,     2,     2,     2,     2,     2,     2,     2,    55,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    54,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    68,    68,    68,    70,    71,    73,    74,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    85,    86,
      87,    89,    90,    91,    92,    95,    96,    97,    98,   100,
     101,   102,   103,   105,   106,   107,   108,   109,   110,   111,
     113,   114,   115,   116,   116,   116,   119,   120,   123,   124,
     126,   128,   129,   130,   131,   133,   135,   137,   139,   140,
     144,   145,   147,   148,   149,   150,   151,   153,   154,   156,
     159,   160,   161,   164,   165,   168,   170,   171,   172,   173,
     174,   175,   176,   177,   178
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
  "\"end of file\"", "error", "\"invalid token\"", "gameId", "drawId",
  "drawTime", "status", "drawBreak", "visualDraw", "pricePoints", "amount",
  "wagerStatistics", "columns", "wagers", "addOn", "prizeCategories",
  "winningNumbers", "list", "bonus", "id", "divident", "winners",
  "distributed", "jackpot", "categoryType", "fixed", "gameType",
  "minimumDistributed", "last", "active", "totalPages", "totalElements",
  "numberOfElements", "size", "number", "content", "first", "sort",
  "direction", "property", "ignoreCase", "nullHandling", "descending",
  "ascending", "POS_INTR", "POS_INT28", "POS_INT", "STRING", "BOOLEAN",
  "PROPERTY_STRING", "GAMEID_VALUE", "WIN_POS_INT", "'{'", "','", "'}'",
  "':'", "'['", "']'", "'1'", "'0'", "$accept", "jfile", "jfile1",
  "jfile2", "last_field", "active_field", "gameid_field", "drawid_field",
  "drawtime_field", "status_field", "drawbreak_field", "visualdraw_field",
  "pricepoints_field", "amountfield", "win_num_field", "$@1",
  "bonus_field", "list_field", "posintArray", "secintArray",
  "wagerstat_field", "columns_field", "wagers_field", "addon_field",
  "prizecat_field", "jsonArray", "secjsonArray", "generaljsonArray",
  "generaljsonArray2", "jsonObj", "id1_field", "id2_field",
  "divident_field", "winners_field", "distributed_field", "jackpot_field",
  "fixed_field", "categorytype_field", "gametype_field", "mindistr_field",
  "tpages_field", "telements_field", "numofelements_field", "size_field",
  "number_field", "content_field", "lastb_field", "first_field",
  "jsonArray2", "secjsonArray2", "jsonObj2", "sort_field", "sortArray",
  "direction_field", "property_field", "ignorecase_field",
  "nullhandling_field", "descending_field", "ascending_field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-272)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,   -23,    31,  -272,  -272,    -9,    -8,   -17,   -16,  -272,
     -11,    -7,     4,    18,    47,  -272,   -46,  -272,    -3,    -1,
       1,    -2,     2,     5,  -272,   -30,     3,  -272,     8,    28,
     -20,    56,   -11,  -272,    47,  -272,     6,     9,  -272,  -272,
      10,    11,    12,    13,    14,    17,    40,    24,    66,  -272,
     -11,    56,  -272,    19,    20,  -272,    21,    22,  -272,    25,
      29,    48,    26,    73,    66,  -272,    27,    30,  -272,    32,
      33,    35,    38,    44,    42,    78,    73,  -272,    36,    37,
    -272,    39,    43,    45,    41,    57,    46,    87,    78,    49,
      50,    51,  -272,    52,    53,    55,    61,    54,    62,    67,
      63,    93,    87,    58,    59,  -272,  -272,    60,    64,  -272,
      65,    68,    69,    71,    75,    70,    85,    72,   107,    93,
    -272,    74,    77,  -272,    76,    79,   115,    80,    81,    83,
     -34,    86,    82,  -272,    84,    88,    89,   112,   112,  -272,
    -272,    90,    91,  -272,    94,  -272,   120,    92,    95,    96,
      98,    99,  -272,    97,  -272,   100,   121,   121,  -272,   102,
     101,   103,   105,   108,  -272,   106,   109,   110,   104,   111,
     114,  -272,   125,   131,   113,   116,  -272,  -272,  -272,   117,
     118,   122,   119,   123,   124,   127,   128,   108,   143,   130,
     126,   -22,   129,  -272,   -36,   142,   142,   132,   133,   135,
     134,  -272,   136,   138,  -272,   140,   137,   149,  -272,  -272,
     141,   144,   145,  -272,   108,   153,   154,   152,  -272,   -22,
    -272,   146,   139,   155,   155,  -272,  -272,   147,   148,  -272,
    -272,  -272,  -272,   150,   151,   156,   160,   159,   -38,   162,
     162,  -272,   157,   161,  -272,  -272,  -272,  -272,   158,   163,
     164,   165,  -272,   166,   184,   184,   -43,  -272,  -272,   167,
     170,   171,   -25,   -19,   -18,  -272,   174,   183,   183,    -4,
    -272,    -4,  -272,    -4,  -272,  -272,   172,   173,   175,   176,
     177,   178,   168,   179,   180,   188,   187,   187,    -4,    -4,
      -4,  -272,  -272,  -272,  -272,   185,   181,   182,  -272,  -272,
    -272,   -14,   193,   193,  -272,  -272,   186,   189,   190,   191,
     206,  -272,  -272,   192,   194,   195,  -272,  -272
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     6,     0,    67,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     4,     0,     0,
       0,     0,     0,    71,     0,    62,     0,     0,     9,     8,
       0,     0,     0,    74,     0,     0,     0,     0,     0,    70,
       0,     0,    63,     0,     0,    10,     0,     0,    73,     0,
       0,     0,     0,     0,     0,    68,     0,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    69,     0,     0,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,    80,
      79,     0,     0,    66,     0,    15,     0,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,     0,    81,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,    75,     7,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,    32,     0,
       0,    83,     0,     0,    24,    23,     0,     0,    49,    48,
       0,     0,     0,    30,     0,     0,     0,     0,    77,     0,
      21,     0,     0,     0,     0,    31,    26,     0,     0,    84,
      22,    19,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    52,    51,    54,    53,     0,     0,
       0,     0,    25,     0,     0,     0,     0,    28,    55,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
      38,     0,    37,     0,    36,    56,     0,     0,     0,    45,
      44,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    34,    33,    57,     0,     0,     0,    42,    41,
      40,     0,     0,     0,    59,    58,     0,     0,     0,     0,
       0,    47,    60,     0,     0,     0,    46,    61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,  -272,  -272,  -272,  -272,   209,   169,   196,   197,
      15,   198,   199,  -272,  -272,  -272,  -272,  -272,  -272,   -49,
     200,  -272,  -272,  -272,   201,  -272,   -32,  -272,  -271,   202,
    -272,  -272,   203,   -10,   -52,    -6,   -15,   -42,   -57,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   204,
       0,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     7,    19,    23,    41,    57,    70,
      82,    94,   111,   135,   128,   162,   183,   154,   171,   206,
     166,   200,   228,   243,   148,   164,   197,   257,   282,   198,
     185,   186,   211,   234,   249,   260,   277,   296,   307,   314,
      21,    37,    67,   108,   125,     8,    54,    91,    17,    42,
      43,    79,    97,   104,   122,   142,   160,   180,   203
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     283,   262,   284,   263,   264,     5,    14,   244,   245,   208,
      15,    24,     6,   139,   265,   140,    25,   298,   299,   300,
     246,   247,   209,    32,   204,     1,    38,    33,   269,   205,
      39,     9,   270,    18,   271,   273,    12,    13,   272,   274,
     279,    14,   280,   281,   304,   305,    10,    11,    20,    16,
      22,    29,    26,    27,    35,    34,    28,    30,    31,    36,
      40,    45,    46,    52,    48,    47,    50,    51,    53,    49,
      55,    56,    68,    61,    60,    63,    62,    65,    64,    69,
      66,    78,    72,    73,    77,    81,    75,    74,    76,    80,
      85,    84,    92,    90,    86,    93,    87,    89,    88,   103,
     107,    96,   110,    95,    99,    98,   101,   100,   102,   109,
     106,   105,   114,   113,   121,   115,   123,   116,   120,   124,
     117,   118,   119,   127,   126,   134,   141,   147,   143,   130,
     131,   132,   165,   133,   137,   136,   138,   153,   152,   144,
     159,   146,   145,   182,   151,   150,   158,   155,   156,   157,
     184,   178,   161,   179,   169,   199,   163,   168,   172,   170,
     173,   175,   210,   176,   177,   181,   187,   227,   188,   202,
     230,   190,   189,   242,   192,   191,   233,   193,   201,   194,
     195,   196,   225,   232,   248,   207,   214,   216,   250,   213,
     215,   217,   218,   219,   220,   221,   222,   223,   224,   226,
     229,   237,   236,   231,   239,   238,   241,   259,   276,   240,
     258,   295,   251,   253,   235,   252,   254,   255,   275,   306,
      59,   256,   266,   267,   268,   291,   286,   285,   287,   288,
     289,   290,   294,   313,   302,   303,   292,   293,   312,   317,
     301,   309,   310,    44,   311,   297,   308,   315,   316,   261,
       0,     0,     0,   278,    58,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212
};

static const yytype_int16 yycheck[] =
{
     271,    44,   273,    46,    47,    28,    52,    45,    46,    45,
      10,    57,    35,    47,    57,    49,    16,   288,   289,   290,
      58,    59,    58,    53,    46,    52,    46,    57,    53,    51,
      50,     0,    57,    29,    53,    53,    53,    53,    57,    57,
      44,    52,    46,    47,    58,    59,    55,    55,    30,    56,
       3,    53,    55,    54,    46,    52,    55,    55,    53,    31,
       4,    55,    53,    46,    53,    55,    53,    53,    28,    57,
      46,     5,    46,    53,    55,    53,    55,    48,    53,     6,
      32,    37,    55,    53,    46,     7,    53,    55,    53,    47,
      53,    55,    46,    36,    55,     8,    53,    56,    53,    38,
      33,    52,     9,    88,    53,    55,    53,    55,    53,    46,
      48,    57,    53,    55,    39,    55,    46,    53,    47,    34,
      55,    53,    53,    16,    52,    10,    40,    15,    46,    55,
      53,    55,    11,    54,    53,    55,    53,    17,    44,    55,
      41,    52,    54,    18,    53,    55,    48,    55,    53,    53,
      19,    47,    55,    42,    53,    12,    56,    55,    53,    56,
      52,    55,    20,    54,    54,    51,    53,    13,    52,    43,
     219,    53,    55,    14,    55,    53,    21,    54,    48,    55,
      53,    53,   214,    44,    22,    56,    53,    53,   240,    57,
      55,    55,    54,    53,    57,    46,    55,    53,    53,    46,
      48,    53,    55,    57,    53,    55,    46,    23,    25,    53,
      44,    24,    55,    55,   224,    54,    53,    53,    44,    26,
      51,    56,    55,    53,    53,    57,    53,    55,    53,    53,
      53,    53,    44,    27,    53,    53,    57,    57,    47,    44,
      55,    55,    53,    34,    54,   287,   303,    55,    54,   255,
      -1,    -1,    -1,   268,    50,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,    61,    62,    63,    28,    35,    64,   105,     0,
      55,    55,    53,    53,    52,   110,    56,   108,    29,    65,
      30,   100,     3,    66,    57,   110,    55,    54,    55,    53,
      55,    53,    53,    57,    52,    46,    31,   101,    46,    50,
       4,    67,   109,   110,    66,    55,    53,    55,    53,    57,
      53,    53,    46,    28,   106,    46,     5,    68,   109,    67,
      55,    53,    55,    53,    53,    48,    32,   102,    46,     6,
      69,    68,    55,    53,    55,    53,    53,    46,    37,   111,
      47,     7,    70,    69,    55,    53,    55,    53,    53,    56,
      36,   107,    46,     8,    71,    70,    52,   112,    55,    53,
      55,    53,    53,    38,   113,    57,    48,    33,   103,    46,
       9,    72,    71,    55,    53,    55,    53,    55,    53,    53,
      47,    39,   114,    46,    34,   104,    52,    16,    74,    72,
      55,    53,    55,    54,    10,    73,    55,    53,    53,    47,
      49,    40,   115,    46,    55,    54,    52,    15,    84,    84,
      55,    53,    44,    17,    77,    55,    53,    53,    48,    41,
     116,    55,    75,    56,    85,    11,    80,    80,    55,    53,
      56,    78,    53,    52,    89,    55,    54,    54,    47,    42,
     117,    51,    18,    76,    19,    90,    91,    53,    52,    55,
      53,    53,    55,    54,    55,    53,    53,    86,    89,    12,
      81,    48,    43,   118,    46,    51,    79,    56,    45,    58,
      20,    92,    92,    57,    53,    55,    53,    55,    54,    53,
      57,    46,    55,    53,    53,    86,    46,    13,    82,    48,
      79,    57,    44,    21,    93,    93,    55,    53,    55,    53,
      53,    46,    14,    83,    45,    46,    58,    59,    22,    94,
      94,    55,    54,    55,    53,    53,    56,    87,    44,    23,
      95,    95,    44,    46,    47,    57,    55,    53,    53,    53,
      57,    53,    57,    53,    57,    44,    25,    96,    96,    44,
      46,    47,    88,    88,    88,    55,    53,    53,    53,    53,
      53,    57,    57,    57,    44,    24,    97,    97,    88,    88,
      88,    55,    53,    53,    58,    59,    26,    98,    98,    55,
      53,    54,    47,    27,    99,    55,    54,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    63,    64,    65,    66,    66,
      67,    68,    69,    70,    71,    72,    73,    75,    74,    76,
      77,    78,    79,    79,    79,    80,    81,    82,    83,    84,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    89,    89,    90,    91,
      92,    93,    93,    93,    93,    94,    95,    96,    97,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   108,   108,   109,   109,   110,   111,   112,   113,   114,
     114,   115,   116,   117,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     5,    19,     3,    21,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     0,     8,     5,
       3,     5,     3,     1,     1,     9,     3,     3,     3,     3,
       5,     3,     1,     5,     5,     5,     3,     3,     3,     2,
       3,     3,     3,     1,     1,     1,    19,    17,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     2,     3,     1,    21,     5,    13,     3,     3,
       3,     3,     3,     3,     3
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
  YYLTYPE *yylloc;
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 9: /* gameid_field: gameId ':' POS_INT  */
#line 77 "bison_final.y"
                             {lyyerror((yylsp[0]), "Invalid game id value");}
#line 1791 "bison_final.tab.c"
    break;

  case 17: /* $@1: %empty  */
#line 85 "bison_final.y"
                                                      {lowerNumInstances( "Count of parsed numbers: " , &numWinNumbers , 5); numWinNumbers = 0;}
#line 1797 "bison_final.tab.c"
    break;

  case 21: /* posintArray: '[' WIN_POS_INT ',' secintArray ']'  */
#line 89 "bison_final.y"
                                                 {checkNumInstances( "Count of parsed numbers: " , &numWinNumbers , 5);}
#line 1803 "bison_final.tab.c"
    break;

  case 22: /* secintArray: WIN_POS_INT ',' secintArray  */
#line 90 "bison_final.y"
                                          {checkNumInstances( "Count of parsed numbers: " , &numWinNumbers , 5);}
#line 1809 "bison_final.tab.c"
    break;

  case 23: /* secintArray: WIN_POS_INT  */
#line 91 "bison_final.y"
                          {checkNumInstances( "Count of parsed numbers: " , &numWinNumbers , 5);}
#line 1815 "bison_final.tab.c"
    break;

  case 24: /* secintArray: POS_INT  */
#line 92 "bison_final.y"
                      {lyyerror((yylsp[0]), "Value out of allowed range (1-45)");}
#line 1821 "bison_final.tab.c"
    break;

  case 29: /* prizecat_field: prizeCategories ':' jsonArray  */
#line 100 "bison_final.y"
                                                   {lowerNumInstances( "Count of parsed json objects: " , &numPrizeCateg , 8); numPrizeCateg = 0;}
#line 1827 "bison_final.tab.c"
    break;

  case 30: /* jsonArray: '[' jsonObj ',' secjsonArray ']'  */
#line 101 "bison_final.y"
                                             {checkNumInstances( "Count of parsed json objects: " , &numPrizeCateg , 8);}
#line 1833 "bison_final.tab.c"
    break;

  case 31: /* secjsonArray: jsonObj ',' secjsonArray  */
#line 102 "bison_final.y"
                                       {checkNumInstances( "Count of parsed json objects: " , &numPrizeCateg , 8);}
#line 1839 "bison_final.tab.c"
    break;

  case 32: /* secjsonArray: jsonObj  */
#line 103 "bison_final.y"
                       {checkNumInstances( "Count of parsed json objects: " , &numPrizeCateg , 8);}
#line 1845 "bison_final.tab.c"
    break;

  case 80: /* property_field: property ':' STRING  */
#line 174 "bison_final.y"
                                      {lyyerror((yylsp[0]), "Invalid property field-name");}
#line 1851 "bison_final.tab.c"
    break;


#line 1855 "bison_final.tab.c"

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
  *++yylsp = yyloc;

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
          = {yyssp, yytoken, &yylloc};
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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
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

#line 180 "bison_final.y"


// Color functions 
void red () {
  printf("\033[1;31m");
}
void black () {
  printf("\033[1;30m");
}
void reset () {
  printf("\033[0m");
}


void yyerror(const char * msg){

    printf("\n"); for(int i=0 ; i<yylloc.first_column; i++) printf(" ");
    red(); for(int i=yylloc.first_column ; i<yylloc.last_column; i++) printf("^"); reset();

    red(); printf("\nERROR DETECTED:"); reset();
    printf(" [ %s ] in line: %d, at columns: %d:%d \n", msg, yylloc.first_line, yylloc.first_column, yylloc.last_column);

    black();printf("-- JSON parsing failed --\n");reset();
    exit(1); 
}

void lyyerror(YYLTYPE t, const char *s){
    
        printf("\n"); for(int i=0 ; i<t.first_column; i++) printf(" ");
        red(); for(int i=t.first_column ; i<t.last_column; i++) printf("^"); reset();

        red(); printf("\nERROR DETECTED:"); reset();
        printf(" [ %s ] in line: %d, at columns: %d:%d \n", s, t.first_line, t.first_column, t.last_column);
        
        black();printf("-- JSON parsing failed --\n");reset();
        exit(1);        
}


void checkNumInstances(const char * msg, int* currentinstance, const int maxInstances){
  (*currentinstance)++;
  if (*currentinstance > maxInstances ) {
    printf("\n"); for(int i=0 ; i<yylloc.first_column; i++) printf(" ");
    red(); for(int i=yylloc.first_column ; i<yylloc.last_column; i++) printf("^"); reset();
    
    printf("\n"); for(int i=0 ; i<yylloc.first_column; i++) printf(" ");
    red(); for(int i=yylloc.first_column ; i<yylloc.last_column; i++) printf("^"); reset();

    red(); printf("\nERROR DETECTED:"); reset();
    printf(" [ %s %d -- ( Allowed number of instances is : %d) ] in line: %d\n", msg, *currentinstance, maxInstances , yylloc.first_line);

    black();printf("-- JSON parsing failed --\n");reset();
    exit(1); 
  }
}
void lowerNumInstances(const char * msg, int* currentinstance, const int maxInstances){
  if (*currentinstance < maxInstances ) {
    printf("\n"); for(int i=0 ; i<yylloc.first_column; i++) printf(" ");
    red(); for(int i=yylloc.first_column ; i<yylloc.last_column; i++) printf("^"); reset();

    red(); printf("\nERROR DETECTED:"); reset();
    printf(" [ %s %d -- ( Allowed number of instances is : %d) ] in line: %d\n", msg, *currentinstance, maxInstances , yylloc.first_line);

    black();printf("-- JSON parsing failed --\n");reset();
    exit(1); 
  }
}


int main ( int argc, char **argv  ) {
   if ( argc > 1 ){ 
        yyin = fopen( argv[1], "rb" );
    }
   else{
         perror("No argument has been given");
         exit(1);
   }
   
    if(!yyparse()) black(),printf("\n-- SUCCESS: JSON parse worked --\n"),reset();
    return 0;
}   
