%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
void yyerror(char *s);
extern FILE *yyin;

#define MAX_SYMBOLS 256

typedef struct {
    char *name;
    float value;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void setSymbolValue(char *name, float value) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value;
    symbolCount++;
}

float getSymbolValue(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return symbolTable[i].value;
        }
    }
    printf("Variable no definida: %s\n", name);
    return 0.0;
}
%}

%union {
    int ival;
    float fval;
    char *sval;
}

%token <sval> IVR STR IFU
%token <ival> INT
%token <fval> FLO
%token BIN VAR IGU MAS MUL RES DIV MEN MEI MAY MAI EQU DIF SII PIZ PDE FIN NOO HAS FUN PAR RTN ITR FUE ATP ARG PRINT

%type <fval> value
%type <fval> operation
%type <fval> printSentence

%%

program   : 
            | sentence 
            | decfun   
            | program sentence 
            | program decfun 

sentence    : decvar
            | asigvar 
            | initvar 
            | operation BIN 
            | sii
            | hasta
            | err 
            | callfuncion  
            | printSentence

decvar        : VAR IVR BIN 

initvar        : VAR IVR IGU INT BIN { setSymbolValue($2, (float)$4); }
            | VAR IVR IGU FLO BIN { setSymbolValue($2, $4); }
            | VAR IVR IGU operation BIN { setSymbolValue($2, (float)$4); }
            | VAR IVR IGU STR

asigvar     : IVR IGU value BIN { setSymbolValue($1, $3); }
            | IVR IGU operation BIN
            | IVR IGU callfuncion

value        : INT { $$ = (float)$1; }
               | FLO { $$ = $1; }
            | IVR { $$ = getSymbolValue($1); }

operation     : value MAS value { $$ = $1 + $3; }
            | value RES value { $$ = $1 - $3; }
            | value MUL value { $$ = $1 * $3; }
            | value DIV value { $$ = $1 / $3; }

callfuncion : IFU ARG BIN 

sii        : SII PIZ condition PDE program FIN 
            | SII PIZ condition PDE program NOO program FIN 

hasta         : HAS PIZ condition PDE program FIN 

condition    : value MEN value 
            | value MEI value 
            | value MAY value 
            | value MAI value 
            | value EQU value 
            | value DIF value 

decfun        : FUN IFU PAR program atras FUE 

atras         : RTN value BIN 
            | RTN operation BIN 

err         : ITR program ATP program FIN 

printSentence : PRINT value BIN { printf("%f\n", $2); }

%%

void yyerror(char *s){
    printf("Error Sintáctico: %s\n", s);
}

int main(int argc, char **argv){
    printf("Inicio del programa: \n");
    if(argc>1)
        yyin=fopen(argv[1],"rt");
    else
        yyin=stdin;
    yyparse();
    return 0;
}