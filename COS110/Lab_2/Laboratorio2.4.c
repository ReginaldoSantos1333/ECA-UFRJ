#include <stdio.h>

int main () {

float com,sal,total;

printf("Quanto foi o total vendido ? :  ");
scanf("%f", &total);

com = 0.17;
sal = 1200;
total = total * com;
sal = sal + total;

printf("Seu salario bruto é:  %2.f ", sal);


}