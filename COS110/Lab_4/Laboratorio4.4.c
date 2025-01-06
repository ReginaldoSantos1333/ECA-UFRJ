#define Linhas 2
#define Colunas 2

#include <stdio.h>

int main(void) {
int i,j, s,menu=0;
float soma;
printf("Digite o tamanho de M: ");
scanf("%i", &s);

int matriz[s][s];
int matriztrans[s][s];
int matrizsoma[s][s];

//PRENCHIMENTO MATRIZ
for ( i = 0; i < s; i ++  ) {
  for ( j = 0; j < s; j ++  ){
  scanf("%i", &matriz[i][j]);
  }
}

//ESCREVER MATRIZ
for ( i = 0; i < s; i ++  ) {
  printf(" |");
  for ( j = 0; j < s; j ++  ){
  printf("\t%i |", matriz[i][j]);
  }
  printf("\n");
}

printf("Digite o numero 1 para transposta ou 2 para soma da diagonal ");
scanf("%i", &menu);



switch(menu) {
  case 1: 
    for ( i = 0; i < s; i ++  ) {
      for ( j = 0; j < s; j ++  ){
        matriztrans[i][j] = matriz[j][i];
  }
}



//ESCREVER MATRIZ
for ( i = 0; i < s; i ++  ) {
  printf(" |");
  for ( j = 0; j < s; j ++  ){
  printf("\t%i |", matriztrans[i][j]);
  }
  printf("\n");
}
break;

case 2: 
//calcular a diagonal
  for ( i = 0; i < s; i ++  ) {
      for ( j = 0; j < s; j ++  ){
        matrizsoma[i][j] =  matriz[i][j] + matriz [i][j];
        if ( i == j ) {
          soma += (matrizsoma[i][j]);
        }
    }
} 

}
// soma das diagonais
printf("Soma das diagonais = %f",soma);
  return 0;
}