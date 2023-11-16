imprimir ("-------PRUEBA DECLARACION VARIABLES------");
var a12;
imprimir (a12);

var num1 = 1;
imprimir (num1);

var v12 = "Hola";
imprimir (v12);

var v2 = -2;
imprimir (v2);

var p3 = 3 + 1;
imprimir (p3);

var z5 = num1 - v2;
imprimir (z5);

var v6 = 6 * v2;
imprimir (v6);

var v7 = z5 / 2;
imprimir (v7);

imprimir ("-------PRUEBA CONDICIONALES------");

var v8 = 9;
sii (v8 < 10) 4 + 10; fin
imprimir (v8);

var prueba1 = 11;
sii (prueba1 > 10) prueba1 = 20; fin
imprimir (prueba1);

var prueba2 = 11;
sii (prueba2 > 10) prueba2 = 5 + prueba1 ; fin
imprimir (prueba2);

var prueba3 = 10;
sii (prueba3 >= 10) prueba3 = 20 - prueba2 no prueba3 = 30 + prueba2; fin
imprimir (prueba3);

imprimir ("-------PRUEBA MIENTRAS------");

var v9 = 0;
mientras(v9 < 8) v9 = v9 + 1;
imprimir (v9);

var pa1 = 0;
mientras(pa1 <= 8) pa1 = pa1 + 1;
imprimir (pa1);

imprimir ("-------PRUEBA POR------");

var pruebafor1 = 0;
var i1;
por(i1 = 0; i1 < 40) pruebafor1 = pruebafor1 + 1;
imprimir (pruebafor1);

var pruebafor2 = 0;
var i2;
por(i2 = 0; i2 <= 40) pruebafor2 = pruebafor2 + 1;
imprimir (pruebafor2);

imprimir ("-------PRUEBA FUNCIONES------");

funcion suma1() var a3 = 4 + 1; retorno a3;finFun
imprimir (a3);

funcion fun2(var v1 var v2);finFun
imprimir (fun2);

funcion fun0() var z1 = a3 + 1; retorno z1; finFun
imprimir (z1);

funcion fun7(var v1 var v2);finFun
fun7(9 2);
imprimir (fun7);

imprimir ("-------PRUEBA ERRORES------");

intentar 1/0; atrapar imprimir("No se puede dividir por cero"); fin
intentar; atrapar imprimir (8); fin