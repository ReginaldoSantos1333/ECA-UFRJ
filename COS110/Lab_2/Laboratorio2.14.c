#include <stdio.h> 

int main () {

int n,negativos=0,i;
printf("Quantos numeros deseja ?");
scanf("%i", &n);

int v[n];

for ( i =0; i < n; i ++) {
  printf("Digite seus numeros: ");
  scanf("%i", &v[i]);

  if (v[i] < 0) {
    negativos = negativos + v[i];
  }
}

printf("%i ", negativos);


  return 0;

}