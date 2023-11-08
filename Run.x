
rm semantic.tab.* lex.yy.c Vick.exe

bison -d semantic.y
flex lexical.l
gcc semantic.tab.c lex.yy.c -lfl -o Vick.exe

./Vick.exe  Prueba.x