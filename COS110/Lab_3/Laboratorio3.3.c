#include <stdio.h>


int main () {

int s,p,c,r;
float n1,n2;
float d;

do {

printf("Digite o primeiro N°:  ");
scanf("%f", &n1);

printf("Digite o segundo N°:  ");
scanf("%f", &n2);

printf(" [1] soma, [2] produto, [3] divisao ? ");
scanf("%i", &c);

if (c == 1 ) {
  s = n1 + n2;
  printf("Soma e igual a :  %i", s);
}
else if (c == 2 ) {
  p = n1 * n2;
  printf(" Produto e igual a:  %i", p);
}
else if ( c == 3) {
  d = n1/n2;
  printf("Divisao e igual a:  %f ", d);
}
else if ( c > 3) {
  printf(" \n\nERROR! Valor nao encontrado!");
}
printf("\n\nDeseja continuar ? [1] Sim ");
scanf("%i",&r);
 }  while ( r == 1 );




  return 0; 
}