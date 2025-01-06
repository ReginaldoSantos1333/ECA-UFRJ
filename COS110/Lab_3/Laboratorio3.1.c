#include <stdio.h>


int main () {

int s,p;
float n1,n2;
float d;
printf("Digite o primeiro N°:  ");
scanf("%f", &n1);

printf("Digite o segundo N°:  ");
scanf("%f", &n2);

s = n1 + n2;
p = n1 * n2;
d = n1/n2;

printf("Soma = %i ", s); 

printf("\nProduto =  %i ", p);

printf("\nDivisao = %f", d);

  return 0; 
}