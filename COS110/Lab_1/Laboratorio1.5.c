#include <stdio.h>


int main () {

int n1,n2,soma,lim; 

printf("Digite o 1° numero:  ");
scanf("%i", &n1);
printf("Digite o 2° numero:  ");
scanf("%i", &n2);
printf("Qual o limite ? ");
scanf("%i", &lim);

soma = n1 + n2; 

if ( soma > lim) {
  printf("Soma > limite");
}
else if ( soma == lim) {
  printf("Soma = limite ");
}
else if ( soma < lim ) {
  printf("Soma < limite");
}


  return 0; 
}