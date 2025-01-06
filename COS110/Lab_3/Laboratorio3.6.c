 // Programa C para demonstrar a formatacao e a
 // manipulacao de caracteres (tipo char).
 //
 #include <stdio.h>
 //
 int main()
 {
 char ch1, ch2, ch3, ch4;
 unsigned int num;
 //
 ch1 = 'B'; // Caractere em formato tradicional
 ch2 = 66; // caractere em formato decimal
 ch3 = '\102'; // caractere em formato octal
 ch4 = '\x42'; // caractere em formato hexadecimal
 //
 printf("ch1 = %c, ch2 = %c, ch3 = %c, ch4 = %c\n",ch1, ch2, ch3, ch4); // melhore a saída
printf("ch1 + 2 = %c, ch1 + 2 = %i\n ", ch1+2,(int) ch1+2); // comente o porque do “(int)” antes de
 // ch1
 // int antes de ch1 é utilizado para transformar ch1 em inteiro. 
 printf("\nEntre valor inteiro entre 0 e 255 : ");
 scanf("%i", &num);
 //le um valor em decimal
 printf("\n valor lido corresponde ao caractere = %c", (char)num);
 //escreve em caractere. 
 return 0;
}