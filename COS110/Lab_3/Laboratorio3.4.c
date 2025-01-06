#include <stdio.h>
#include <float.h>

int main () {

float n1;
double d;
long double ld = 10000000000000000;
FLT_MIN;
FLT_MAX;
DBL_MIN;
DBL_MAX;

d = 1000000000000000000;
n1 = 1000000000000000000;

printf("%e", d);
printf("\n%E", d);
printf("\n%e", d);
printf("\n%E", d);

printf("\n%2.f", n1);
printf("\n%3.f", n1);
printf("\n%5.f", d);
printf("\n%3.f", d);



  return 0; 
}