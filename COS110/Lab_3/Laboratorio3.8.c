
#include <stdio.h>

 int main()
 {
 char a = 0x5 << 4 ; // mascara aplicada.
 char b = 0x20 << 1;
 char c;
 //
 if ( a & b ) { // OP 1 - AND
 printf("OP 1 – Cond. verdadeira ; c = %i\n", c );
 }
 if ( a | b ) { // OP 2 - OR
 printf("OP 2 – Cond. verdadeira\n" );
 }
 /* Trocando os valores de a e b */
 a = 0x0 < 2;
 b = 0x10  << 2;
 c = a & b;
 if ( a & b ) {
 printf("OP 3 – Cond. verdadeira ; c = %X\n", c );
 }
 else {
 printf("OP 3 – Cond. falsa ; c = %X\n", c );
 }
 //
 if ( ~(a & b) ) {
 printf("OP 4 – Cond. verdadeira\n" );
 }
 return 0;
 }

 //a diferença dos operadores bit a bit, para os operadores lógicos, é que o segundo citado possui valor booleano ( ou seja, verdadeiro ou falso ), já os operadores bit a bit não. 

