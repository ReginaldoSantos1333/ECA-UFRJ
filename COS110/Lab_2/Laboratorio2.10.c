#include <stdio.h>

int main () {


int i; 
int v[3],maior,menor,iguais,s,j;

maior = v[0];


for (i = 0; i < 3; i++) {
printf("\n\nDigite numeros: ");
scanf("\n\n%i", &v[i]);
if (maior < v[i]){
maior = v[i];
}
}
menor = v[0];
for (i = 0; i < 3; i++) {
if (menor > v[i] ){
menor = v[i];
}
}

iguais = v[0];
for (i = 0; i < 3; i++) {
if (iguais == v[i]) {
  s++;
}
}

 if ( s == 3) {
    printf("\n\nTODOS IGUAIS!");
 }
else 
{  
printf("\n\nMaior :  %i", maior);

printf("\nMenor :  %i", menor);
}
 
  return 0; 
}