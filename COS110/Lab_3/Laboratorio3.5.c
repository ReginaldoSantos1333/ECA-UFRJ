// Programa C para demonstrar a diferença 
// entre os especificadores de formato %i and %d
// e exercitar saída em octal e hexadecimal.
//biblioteca principal stdio
 #include <stdio.h>
 //escopo principal do programa
 int main()
 {
 int a, b, c;
 //variaveis declaradas
 printf("Entre valor de a em formato decimal:");
 scanf("%d", &a);
 //le o numero em decimal
 printf("Entre valor de b em formato octal: ");
 scanf("%i", &b);
 //le o numero em octal
 printf("\nEntre valor de c em formato hexa: ");
 scanf("%i", &c);
 //le o numero em hexadecimal
 printf("\na = %i, b = %i, c = %i", a, b, c);
 printf("\na = %o, b = %o, c = %o", a, b, c);
 printf("\na = %X, b = %X, c = %X", a, b, c);
 //escreve na tela os resultados
 return 0;
 }
