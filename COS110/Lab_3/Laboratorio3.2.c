#include <stdio.h>


int main () {

int s,p,c;
float n1,n2;
float d;
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
if (c == 2 ) {
  p = n1 * n2;
  printf(" Produto e igual a:  %i", p);
}
if ( c == 3) {
  d = n1/n2;
  printf("Divisao e igual a:  %f ", d);
}




  return 0; 
}