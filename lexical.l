%{
#include "semantic.tab.h"
%}

identiVar v[0-9]+
float -?[0-9]+\.[0-9]*
int -?[0-9]+ 
string \"[^(\n|\")]*\"
identiFuncion fun[0-9]+
param \(("var v"[0-9]+" "?)*\)
argumento \[("v"[0-9]+" "?)*\]
%%
\;                              {return BIN;}
"var"                           {return VAR;}
{identiVar}                 {yylval.sval = strdup(yytext); return IVR;}
{string}                        {yylval.sval = strdup(yytext); return STR;}
{float}                         {yylval.fval = atof(yytext); return FLO;}
{int}                           {yylval.ival = atoi(yytext); return INT;}
=			                    {return IGU;}
\+			                    {return MAS;}
\*			                    {return MUL;}
\-			                    {return RES;}
\/			                    {return DIV;}
"<"                             {return MEN;}
"<="                            {return MEI;}
">"                             {return MAY;}
">="                            {return MAI;}
"=="                            {return EQU;}
"/="                            {return DIF;}
"sii"                           {return SII;}
"("                             {return PIZ;}
")"                             {return PDE;}
"fin"                           {return FIN;}
"no"                            {return NOO;}
"hasta"                         {return HAS;}
"funcion"                       {return FUN;}
{identiFuncion}                 {yylval.sval = strdup(yytext); return IFU;}
{param}                         {return PAR;}
{argumento}                     {return ARG;}
"atras"                          {return ATR;}
"buscar"                          {return BUS;}
"funcEnd"                       {return FUE;}
"capturar"                       {return CAP;}
"print"                         {return PRINT;}
[ \t\n]			       	        {/* ignorar espacios */}
.			                    {printf("Error léxico: %s\n", yytext);}
%%
int yywrap(){return 1;}
