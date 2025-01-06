#include <stdio.h>

int main () {

int maior,igual,r,n1,n2;

do {
printf("Digite um par:  ");
scanf("%i%i", &n1,&n2);

if ( n1 == n2) {
printf("IGUAIS!");
}
else if ( n1 < n2 ){
  maior = n2;
  printf("\nMaior é : %i", n2);
}

else if( n1 > n2 ){
  maior = n1;
  printf("\nMaior é : %i", n1);
}


  
printf("\n\nDeseja sair do programa ?: Não [0]");
scanf("%i", &r);
} while (r == 0);
  return 0; 
}