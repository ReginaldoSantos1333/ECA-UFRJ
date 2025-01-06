#include <stdio.h>

int main () { 

int idade;
int ano;
int mes;
int dias;
int resultado;

printf("\nQuantos anos voce tem ? ");
scanf("%i", &idade);

printf("\nQual mes ? ");
scanf("%i", &ano);

printf("\nQual ano ? ");
scanf("%i", &mes);

printf("\nQual dia ? ");
scanf("%i", &dias);

resultado = 365 * idade;

printf("\n\nVoce tem %i dias de vida!!!", resultado);
  return 0;
}