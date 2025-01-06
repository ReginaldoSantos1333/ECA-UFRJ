#include <stdio.h> 

int main () {

int n;
float negativos=0;
int i;
int qn;

printf("Quantos numeros deseja ?");
scanf("%i", &n);

int v[n];

for ( i =0; i < n; i ++) {
  printf("Digite seus numeros: ");
  scanf("%i", &v[i]);

  if (v[i] < 0) {
    negativos = negativos + v[i];
    qn++;
  }
}

negativos = negativos/qn;

printf("%2.f ", negativos);


  return 0;

}