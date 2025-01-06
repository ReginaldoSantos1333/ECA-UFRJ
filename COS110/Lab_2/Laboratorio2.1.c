#include <stdio.h>

int main () 
{
int salario;
float reajuste;

printf("\n\nHouve um reajuste para todos os salarios do sistema");

printf("\n\nDigite o seu salario para saber o novo valor:");
scanf("%i", &salario);

reajuste = salario*1.15;

printf("\n\nO seu salario liquido sera´ %f",reajuste);

  return 0;
}