%{
#include "sspascal.tab.h"
%}

%option noyywrap
%option caseless

LITERA		[A-Za-z_]
CIFRA		[0-9A-Fa-f]
CIFRA_ZEC	[0-9]
IDENTIFICATOR	{LITERA}({LITERA}|{CIFRA_ZEC})*
NR_BAZA10	{CIFRA_ZEC}+
EXPON		(E|e)("+"?|"-"){CIFRA_ZEC}{1,2}
NR_REAL		{NR_BAZA10}"."{NR_BAZA10}{EXPON}?
DELIMIT_1	[;.,:]
OPERATOR_1	[+*/()<>=]|"-"|"["|"]"
COMENT		"{"[^}]*"}"
SIR_CAR		["][^\n"]*["]
CARACTER	"'"[^\n]"'"

%%

[ \t\n]
{COMENT}

{NR_REAL}		{return CONST;}
{SIR_CAR}		{return CONST;}
{CARACTER}		{return CONST;}
{IDENTIFICATOR} {return VAR;}
symbol		{return SYMBOL;}
word 		{return WORD;}
incepem		{return BEGINN;}
gata		{return GATA;}
end 		{return END;}
start		{return START;}
else		{return ELSE;}
if			{return IF;}
while		{return WHILE;}
scoate		{return PRINT;}
baga		{return READ;}
program		{return PROGRAM;}

symbol		{return CHAR;}
number		{return INTEGER;}
word		{return STRING;}

"<-"		{return ATRIB;}
"!="		{return NE;}
"<="		{return LE;}
">="		{return GE;}
"=="		{return E;}
"<<"		{return SL;}
">>"		{return SG;}
div		{return DIV;}
mod		{return MOD;}
or		{return OR;}
and		{return AND;}
not		{return NOT;}

{IDENTIFICATOR}	{return ID;}
{NR_BAZA10}	{
	yylval.p_val = yytext;
	return CONST_INT;
		}
{NR_REAL}	{
	yylval.p_val = yytext;
	return CONST_REAL;
		}
{CARACTER}	{
	yylval.p_val = yytext;
	return CONST_CAR;
		}
{SIR_CAR}	{return CONST_SIR;}

{DELIMIT_1}	{return yytext[0];}
{OPERATOR_1}	{return yytext[0];}

%%

