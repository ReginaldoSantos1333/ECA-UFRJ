 #include <stdio.h>

 int main()
 {
 int a = 5;
 int b = 20;
 int c;
 //Declara as variáveis e as submete a um teste condicional
if ( a && b ) { // OP 1 - AND ( se somente se os dois forem verdade)
 printf("OP 1 – Cond. verdadeira ; c = %i\n", c );
 }
 if ( a || b ) { // OP 2 - OR ( acontece se um OU outro for verdade)
 printf("OP 2 – Cond. verdadeira\n" );
 }
 /* Trocando os valores de a e b */
 a = 0;
 b = 10;
 c = a && b;
 if ( a && b ) {
 printf("OP 3 – Cond. verdadeira ; c = %i\n", c );
 }
 else {
printf("OP 3 – Cond. falsa ; c = %i\n", c );
 }
 //acontece se a E b não forem verdade
if ( !(a && b) ) {
printf("OP 4 – Cond. verdadeira\n" );
}
return 0;
}