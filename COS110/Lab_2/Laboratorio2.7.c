#include <stdio.h>

int main () {

float den,m,vol;

printf("Digite a massa e o volume do Elemento, respectivamente: ");
scanf("%f%f", &m,&vol);

den = m/vol;

printf("A densidade absoluta do Elemento inserido é: %f ", den);


return 0; 
}