/* Generated by re2c 0.14.3 */
#line 1 "lexer.l"
//--------------------------------------------------------- ./scanner.l

#include <php.h>
#include "lexer.h"
#include "ext/pcre/php_pcre.h"
#include "php_aop.h"

int scan(scanner_state *s, scanner_token *t) {

	// char *cursor = s->start;
	int r=SCANNER_RETCODE_IMPOSSIBLE;
	char *q=s->start;//keep initial start

#define YYCTYPE char
#define YYCURSOR (s->start)
#define YYLIMIT (s->end)
#define YYMARKER (s->marker)

	while(SCANNER_RETCODE_IMPOSSIBLE == r) {
	
		
#line 25 "lexer.c"
		{
			YYCTYPE yych;

			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy17;
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case '"':
			case '#':
			case '%':
			case '&':
			case '\'':
			case ')':
			case '+':
			case ',':
			case '.':
			case '/':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '}':
			case '~':	goto yy19;
			case '\t':
			case ' ':
			case '$':	goto yy15;
			case '!':	goto yy13;
			case '(':	goto yy3;
			case '-':	goto yy5;
			case ':':	goto yy6;
			case 'p':	goto yy9;
			case 'r':	goto yy7;
			case 's':	goto yy10;
			case 'w':	goto yy8;
			case '|':	goto yy11;
			default:	goto yy14;
			}
yy2:
#line 92 "lexer.l"
			{
                        t->str_val = estrndup(q,YYCURSOR - q);
                        t->TOKEN = TOKEN_TEXT;
                        return 0;
                }
#line 106 "lexer.c"
yy3:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case ')':	goto yy94;
			default:	goto yy4;
			}
yy4:
#line 103 "lexer.l"
			{ r = SCANNER_RETCODE_ERR; break; }
#line 116 "lexer.c"
yy5:
			yych = *++YYCURSOR;
			switch (yych) {
			case '>':	goto yy92;
			default:	goto yy4;
			}
yy6:
			yych = *++YYCURSOR;
			switch (yych) {
			case ':':	goto yy90;
			default:	goto yy4;
			}
yy7:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy86;
			default:	goto yy23;
			}
yy8:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'r':	goto yy81;
			default:	goto yy23;
			}
yy9:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'r':	goto yy60;
			case 'u':	goto yy61;
			default:	goto yy23;
			}
yy10:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy54;
			default:	goto yy23;
			}
yy11:
			++YYCURSOR;
#line 68 "lexer.l"
			{
                        t->TOKEN = TOKEN_OR;
                        return 0;
                }
#line 161 "lexer.c"
yy13:
			yych = *(YYMARKER = ++YYCURSOR);
			switch (yych) {
			case 'p':	goto yy26;
			case 's':	goto yy24;
			default:	goto yy4;
			}
yy14:
			yych = *++YYCURSOR;
			goto yy23;
yy15:
			++YYCURSOR;
			yych = *YYCURSOR;
			goto yy21;
yy16:
#line 97 "lexer.l"
			{ 
                        t->TOKEN = TOKEN_SPACE;
                        return 0; 
                }
#line 182 "lexer.c"
yy17:
			++YYCURSOR;
#line 101 "lexer.l"
			{ r = SCANNER_RETCODE_EOF; break; }
#line 187 "lexer.c"
yy19:
			yych = *++YYCURSOR;
			goto yy4;
yy20:
			++YYCURSOR;
			yych = *YYCURSOR;
yy21:
			switch (yych) {
			case '\t':
			case ' ':
			case '$':	goto yy20;
			default:	goto yy16;
			}
yy22:
			++YYCURSOR;
			yych = *YYCURSOR;
yy23:
			switch (yych) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy2;
			default:	goto yy22;
			}
yy24:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy48;
			default:	goto yy25;
			}
yy25:
			YYCURSOR = YYMARKER;
			goto yy4;
yy26:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'r':	goto yy28;
			case 'u':	goto yy27;
			default:	goto yy25;
			}
yy27:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'b':	goto yy43;
			default:	goto yy25;
			}
yy28:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'i':	goto yy29;
			case 'o':	goto yy30;
			default:	goto yy25;
			}
yy29:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'v':	goto yy38;
			default:	goto yy25;
			}
yy30:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy31;
			default:	goto yy25;
			}
yy31:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy32;
			default:	goto yy25;
			}
yy32:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'c':	goto yy33;
			default:	goto yy25;
			}
yy33:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy34;
			default:	goto yy25;
			}
yy34:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy35;
			default:	goto yy25;
			}
yy35:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'd':	goto yy36;
			default:	goto yy25;
			}
yy36:
			++YYCURSOR;
#line 77 "lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PUBLIC | ZEND_ACC_PRIVATE;
                        return 0;
                }
#line 349 "lexer.c"
yy38:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'a':	goto yy39;
			default:	goto yy25;
			}
yy39:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy40;
			default:	goto yy25;
			}
yy40:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy41;
			default:	goto yy25;
			}
yy41:
			++YYCURSOR;
#line 82 "lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PUBLIC | ZEND_ACC_PROTECTED;
                        return 0;
                }
#line 376 "lexer.c"
yy43:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'l':	goto yy44;
			default:	goto yy25;
			}
yy44:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'i':	goto yy45;
			default:	goto yy25;
			}
yy45:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'c':	goto yy46;
			default:	goto yy25;
			}
yy46:
			++YYCURSOR;
#line 72 "lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PROTECTED | ZEND_ACC_PRIVATE;
                        return 0;
                }
#line 403 "lexer.c"
yy48:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'a':	goto yy49;
			default:	goto yy25;
			}
yy49:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy50;
			default:	goto yy25;
			}
yy50:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'i':	goto yy51;
			default:	goto yy25;
			}
yy51:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'c':	goto yy52;
			default:	goto yy25;
			}
yy52:
			++YYCURSOR;
#line 87 "lexer.l"
			{
                        t->TOKEN = TOKEN_STATIC;
                        t->int_val = 0;
                        return 0;
                }
#line 436 "lexer.c"
yy54:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'a':	goto yy55;
			default:	goto yy23;
			}
yy55:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy56;
			default:	goto yy23;
			}
yy56:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'i':	goto yy57;
			default:	goto yy23;
			}
yy57:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'c':	goto yy58;
			default:	goto yy23;
			}
yy58:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy59;
			default:	goto yy22;
			}
yy59:
#line 63 "lexer.l"
			{
                        t->TOKEN = TOKEN_STATIC;
                        t->int_val = 1;
                        return 0;
                }
#line 535 "lexer.c"
yy60:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'i':	goto yy68;
			case 'o':	goto yy67;
			default:	goto yy23;
			}
yy61:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'b':	goto yy62;
			default:	goto yy23;
			}
yy62:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'l':	goto yy63;
			default:	goto yy23;
			}
yy63:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'i':	goto yy64;
			default:	goto yy23;
			}
yy64:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'c':	goto yy65;
			default:	goto yy23;
			}
yy65:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy66;
			default:	goto yy22;
			}
yy66:
#line 48 "lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PUBLIC;
                        return 0;
                }
#line 641 "lexer.c"
yy67:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy74;
			default:	goto yy23;
			}
yy68:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'v':	goto yy69;
			default:	goto yy23;
			}
yy69:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'a':	goto yy70;
			default:	goto yy23;
			}
yy70:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy71;
			default:	goto yy23;
			}
yy71:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy72;
			default:	goto yy23;
			}
yy72:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy73;
			default:	goto yy22;
			}
yy73:
#line 58 "lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PRIVATE;
                        return 0;
                }
#line 746 "lexer.c"
yy74:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy75;
			default:	goto yy23;
			}
yy75:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'c':	goto yy76;
			default:	goto yy23;
			}
yy76:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy77;
			default:	goto yy23;
			}
yy77:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy78;
			default:	goto yy23;
			}
yy78:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'd':	goto yy79;
			default:	goto yy23;
			}
yy79:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy80;
			default:	goto yy22;
			}
yy80:
#line 53 "lexer.l"
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PROTECTED;
                        return 0;
                }
#line 851 "lexer.c"
yy81:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'i':	goto yy82;
			default:	goto yy23;
			}
yy82:
			yych = *++YYCURSOR;
			switch (yych) {
			case 't':	goto yy83;
			default:	goto yy23;
			}
yy83:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'e':	goto yy84;
			default:	goto yy23;
			}
yy84:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy85;
			default:	goto yy22;
			}
yy85:
#line 43 "lexer.l"
			{
                        t->TOKEN = TOKEN_PROPERTY;
                        t->int_val = AOP_KIND_WRITE;
                        return 0;
                }
#line 944 "lexer.c"
yy86:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'a':	goto yy87;
			default:	goto yy23;
			}
yy87:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'd':	goto yy88;
			default:	goto yy23;
			}
yy88:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 0x00:
			case 0x01:
			case 0x02:
			case 0x03:
			case 0x04:
			case 0x05:
			case 0x06:
			case 0x07:
			case 0x08:
			case '\t':
			case '\n':
			case '\v':
			case '\f':
			case '\r':
			case 0x0E:
			case 0x0F:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1D:
			case 0x1E:
			case 0x1F:
			case ' ':
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case ']':
			case '^':
			case '`':
			case '{':
			case '|':
			case '}':
			case '~':	goto yy89;
			default:	goto yy22;
			}
yy89:
#line 38 "lexer.l"
			{
                        t->TOKEN = TOKEN_PROPERTY;
                        t->int_val = AOP_KIND_READ;
                        return 0;
                }
#line 1031 "lexer.c"
yy90:
			++YYCURSOR;
#line 34 "lexer.l"
			{
                        t->TOKEN = TOKEN_CLASS;
			return 0;
		}
#line 1039 "lexer.c"
yy92:
			++YYCURSOR;
#line 30 "lexer.l"
			{
                        t->TOKEN = TOKEN_CLASS;
			return 0;
		}
#line 1047 "lexer.c"
yy94:
			++YYCURSOR;
#line 26 "lexer.l"
			{
                        t->TOKEN = TOKEN_FUNCTION;
			return 0;
		}
#line 1055 "lexer.c"
		}
#line 104 "lexer.l"

	}
	return r;
}
