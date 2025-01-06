#include <stdio.h>

 int main() {
 
 int i,n,m,g=0,d=0,j;

  printf("Digite dois valores de 1 a 100 :  ");
 scanf("%i", &n);
  
 if (n > 100) {
   printf("ERROR!");
 }
 int v[n];
for ( i = 0; i < n; i ++ ) {
printf("Digite os valores :  ");
scanf("%i", &v[i]);
 }


for ( i = 0; i < n; i ++ ) {
  printf("\nElemento %i = %i", g, v[i]);
  g++;

  if ( v[i] == v[i+1]) {
    d++;
  }
  }


printf("\n\nElementos duplicados = %i", d);
 

return 0;
}
