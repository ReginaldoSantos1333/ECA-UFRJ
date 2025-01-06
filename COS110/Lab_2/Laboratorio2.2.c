#include <stdio.h>

int main () {

int base;
int altura;
int area;
int perimetro;

printf("\n\nCalculador de areas e perimetros retangulares!");

printf("\n\nDigite o valor da base do retangulo:");
scanf("%i", &base);

printf("\n\nDigite o valor da altura do retangulo:");
scanf("%i", &altura);

perimetro = 2 * base + 2 * altura;
area = base * altura;

printf("\n\nO perimetro do retangulo informado e´: %i", perimetro);

printf("\n\nA area do retangulo informado e´: %i", area);


  return 0;
}