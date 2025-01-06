 #include <stdio.h>

 int main() {
 
int soma1 = 22, cont1 = 5;
double media1 = (double) soma1 / cont1;

int soma2 = 22, cont2 = 5;
double media2 = soma2 / (double) cont2; // transformando um dos componentes da media em double, o resultado é mais preciso 

int soma3 = 22, cont3 = 5; 
double media3 = soma3 / cont3;

int soma4 = 22, cont4 = 5;
double media4 = (double) (soma4 / cont4); // transformando a operação em double, ou a variavel "media", escreve um resultado menos preciso

printf("%f\n%f\n%f\n%f", media1,media2,media3,media4);
return 0;
}