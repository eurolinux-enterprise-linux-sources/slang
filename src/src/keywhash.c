/* Perfect hash generated by command line:
 * ./perfhash 11
 */
#ifndef SLCONST
#define SLCONST const
#endif
#define MIN_HASH_VALUE	2
#define MAX_HASH_VALUE	133
#define MIN_KEYWORD_LEN 2
#define MAX_KEYWORD_LEN 11

static SLCONST unsigned char Keyword_Hash_Table [256] =
{
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134,  55, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
   11,  22,  33,  44,  55, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134,   0,   0, 134,   0, 134, 134, 134,   0, 134,   0,   0, 134, 134,   0, 
  134, 134,   0,   0,   0,   0, 134, 134,   0, 134, 134, 134, 134, 134, 134,   0, 
  134,  11,   0,   0,  55,   0,  17,   0,  46,  13, 134,   0,  22,  11,  11,   0, 
   37, 134,   0,  22,   0,  55,   0,   0,  44,   0, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 
  134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134
};

static unsigned char keyword_hash (char *s, unsigned int len)
{
   unsigned int sum;

   sum = len;
   while (len)
     {
	len--;
	sum += (unsigned int) Keyword_Hash_Table [(unsigned char)s[len]];
     }
   return sum;
}

typedef SLCONST struct
{
   SLFUTURE_CONST char *name;
   unsigned int type;
}
Keyword_Table_Type;

static Keyword_Table_Type Keyword_Table [/* 132 */] =
{
   {"or",	OR_TOKEN},
   {"try",	TRY_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"EXIT_BLOCK",	EXITBLK_TOKEN},
   {"ERROR_BLOCK",	ERRBLK_TOKEN},
   {NULL,0},
   {NULL,0},
   {"not",	NOT_TOKEN},
   {NULL,0},
   {"break",	BREAK_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"for",	FOR_TOKEN},
   {"_for",	_FOR_TOKEN},
   {"USER_BLOCK0",	USRBLK0_TOKEN},
   {NULL,0},
   {"forever",	FOREVER_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"if",	IF_TOKEN},
   {"USER_BLOCK1",	USRBLK1_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"case",	CASE_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"USER_BLOCK2",	USRBLK2_TOKEN},
   {NULL,0},
   {"ifnot",	IFNOT_TOKEN},
   {"xor",	BXOR_TOKEN},
   {"else",	ELSE_TOKEN},
   {NULL,0},
   {"orelse",	ORELSE_TOKEN},
   {"throw",	THROW_TOKEN},
   {"static",	STATIC_TOKEN},
   {"__tmp",	TMP_TOKEN},
   {NULL,0},
   {"USER_BLOCK3",	USRBLK3_TOKEN},
   {NULL,0},
   {"do",	DO_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"then",	THEN_TOKEN},
   {"catch",	CATCH_TOKEN},
   {"loop",	LOOP_TOKEN},
   {NULL,0},
   {"variable",	VARIABLE_TOKEN},
   {"USER_BLOCK4",	USRBLK4_TOKEN},
   {NULL,0},
   {"private",	PRIVATE_TOKEN},
   {"mod",	MOD_TOKEN},
   {NULL,0},
   {"shr",	SHR_TOKEN},
   {"return",	RETURN_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"pop",	POP_TOKEN},
   {NULL,0},
   {NULL,0},
   {"and",	AND_TOKEN},
   {"foreach",	FOREACH_TOKEN},
   {NULL,0},
   {"struct",	STRUCT_TOKEN},
   {NULL,0},
   {NULL,0},
   {"while",	WHILE_TOKEN},
   {"switch",	SWITCH_TOKEN},
   {"!if",	IFNOT_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"shl",	SHL_TOKEN},
   {"exch",	EXCH_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"continue",	CONT_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"define",	DEFINE_TOKEN},
   {"finally",	FINALLY_TOKEN},
   {NULL,0},
   {NULL,0},
   {"using",	USING_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"typedef",	TYPEDEF_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"andelse",	ANDELSE_TOKEN},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {NULL,0},
   {"public",	PUBLIC_TOKEN},
};

static Keyword_Table_Type *is_keyword (char *str, unsigned int len)
{
   unsigned int hash;
   SLCONST char *name;
   Keyword_Table_Type *kw;

   if ((len < MIN_KEYWORD_LEN)
       || (len > MAX_KEYWORD_LEN))
     return NULL;

   hash = keyword_hash (str, len);
   if ((hash > MAX_HASH_VALUE) || (hash < MIN_HASH_VALUE))
     return NULL;

   kw = &Keyword_Table[hash - MIN_HASH_VALUE];
   if ((NULL != (name = kw->name))
       && (*str == *name)
       && (0 == strcmp (str, name)))
     return kw;
   return NULL;
}
