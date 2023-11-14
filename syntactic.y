/** Seccion de definicones**/
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
    char *valueS;
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

void setSymbolValue2(char *name, float value, float value2) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value + value2;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value + value2;
    symbolCount++;
}

void setSymbolValueC(char *name, char *valueS) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].valueS = valueS;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].valueS = valueS;
    symbolCount++;
}

void create(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = 0;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = 0;
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

%token <sval> IVR STR
%token <ival> INT
%token <fval> FLO
%token PYC VAR IGU MAS MUL RES DIV MEN MEI MAY MAI EQU DIF SII PIZ PDE FIN NOO HAS FUN PAR RTN ITR FUE ATP ARG PRINT POR

%type <fval> value
%type <fval> initvar
%type <fval> operation
%type <fval> condition
%type <fval> printSentence
/** Sección de reglas**/
%%

program   : 
            | sentence 
            | decfun   
            | program sentence 
            | program decfun 

sentence    : decvar
            | asigvar 
            | initvar 
            | operation PYC 
            | sii
            | hasta
            | for
            | err 
            | callfuncion  
            | printSentence

decvar      : VAR IVR PYC {  create($2); }

initvar     : VAR IVR IGU INT PYC { setSymbolValue($2, (float)$4); 
                                    $$ = $4;
                                  }
            | VAR IVR IGU FLO PYC { setSymbolValue($2, $4); 
                                    $$ = $4;  
                                  }
            | VAR IVR IGU operation PYC { setSymbolValue($2, (float)$4); }
            | VAR IVR IGU STR PYC { setSymbolValueC($2, $4); }
            | VAR IVR IGU value { setSymbolValue($2, $4); }

asigvar     : IVR IGU value PYC { setSymbolValue($1, $3); }
            | IVR IGU operation PYC { setSymbolValue($1, (float)$3); }
            | IVR IGU callfuncion

value       : INT { $$ = (float)$1; }
            | FLO { $$ = $1; }
            | IVR { $$ = getSymbolValue($1); }

operation   : value MAS value { $$ = $1 + $3; }
            | value RES value { $$ = $1 - $3; }
            | value MUL value { $$ = $1 * $3; }
            | value DIV value {if($3 == 0)
                                    $$ = 0;
                                else
                                    $$ = $1/$3;
                              }

callfuncion : IVR PIZ PDE PYC { create($1); }
            | IVR PIZ INT INT PDE PYC { setSymbolValue2($1, (float)$3, (float)$4); }

sii         : SII PIZ condition PDE operation PYC FIN {if($3 == 0)
                                                        printf("Entra al if: %f\n", $5);
                                                      }
            | SII PIZ condition PDE IVR IGU value PYC FIN {if($3 == 0)
                                                            setSymbolValue($5, $7);
                                                          }
            | SII PIZ condition PDE IVR IGU operation PYC FIN {if($3 == 0)
                                                                setSymbolValue($5, $7);
                                                              }
            | SII PIZ condition PDE IVR IGU value NOO IVR IGU value PYC FIN {if($3 == 0)
                                                                                setSymbolValue($5, $7);
                                                                            else
                                                                                setSymbolValue($9, $11);
                                                                            }
            | SII PIZ condition PDE IVR IGU operation NOO IVR IGU operation PYC FIN {if($3 == 0)
                                                                                        setSymbolValue($5, $7);
                                                                                    else
                                                                                        setSymbolValue($9, $11);
                                                                                    }

hasta       : HAS PIZ value MEN value PDE IVR IGU operation PYC {while($3 < $5){
                                                                    $3 += 1;
                                                                    printf("%f\n", $3);
                                                                    setSymbolValue($7, $3);
                                                                 }  
                                                                }

condition   : value MEN value {if($1 < $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value MEI value {if($1 <= $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value MAY value {if($1 > $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value MAI value {if($1 >= $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value EQU value {if($1 == $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }
            | value DIF value {if($1 != $3)
                                    $$ = 0;
                                else
                                    $$ = 1;
                              }

decfun      : FUN IVR PAR PYC FUE{  create($2); }
            | FUN IVR PAR return FUE {  create($2); }
            | FUN IVR PAR decvar return FUE {  create($2); }
            | FUN IVR PAR initvar return FUE {  create($2); }
            | FUN IVR PAR asigvar return FUE {  create($2); }
            | FUN IVR PAR operation return FUE {  create($2); }

return      : RTN IVR PYC 
            | RTN operation PYC 

err         : ITR program ATP program FIN
            | ITR PYC ATP printSentence FIN 

for         : POR PIZ VAR IVR IGU INT PYC condition PDE IVR IGU operation PYC {int i;
                                                                                setSymbolValue($4, (float)$6); 
                                                                                for(i = $6; i <= 5; i++){
                                                                                    setSymbolValue($10, i);
                                                                                }
                                                                              }
            | POR PIZ initvar condition PDE asigvar {int i;
                                                     for(i = $3; i <= 5; i++){
                                                         printf("pasa");
                                                     }
                                                    }

printSentence : PRINT PIZ value PDE PYC { printf("%f\n", $3); }
              | PRINT PIZ STR PDE PYC { printf("%s\n", $3); }
%%
/**Seccion de codigo de usuario**/
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