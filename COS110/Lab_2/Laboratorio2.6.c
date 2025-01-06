#include <stdio.h>

int main () {

float p;
float vp;
float t;
float vf;
float ppp;

printf("\n\nPrograma para mostrar quanto custa cada produto igual!");

printf("\n\nQuantos produtos iguais foram comprados? ");
scanf("%f", &p);

printf("\n\nQual foi o valor pago? ");
scanf("%f", &vp);

printf("\n\nQuanto de troco foi entregue ? ");
scanf("%f", &t);

vf = vp - t;
ppp = vf/p;

printf("\n\nO valor de cada produto igual comprado e´igual a: %f ", ppp);

  return 0; 
}