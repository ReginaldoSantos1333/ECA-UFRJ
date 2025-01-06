#include <stdio.h>

int main () {

int i,s=0,p=0,t,n,j;
float m=0;
printf("Quantos números deseja digitar ? : ");
scanf("%i", &t);

int v[t];

for ( i=0;i<t;i++) {
  printf("Digite os números:  ");
  scanf("%i", &v[i]);
}
p = v[0];

  for ( i=0;i<t;i++) {
  s = s + v[i];
  }
   for ( i=1;i<t;i++) {
  p = p * v[i];
  }

m = s/t;

printf("Soma :  %i, Media:  %3.f, Produto:  %i", s,m,p);




}