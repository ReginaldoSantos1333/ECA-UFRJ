
#include <stdio.h>

int main () {

//menus
int menu=0;
//tamanho das matrizes
int a,b,c;
//contadores
int cont=0;
int cont2=0;

printf(
  "Digite o tamanho desejado de dimensoes: \n[1] Dimensao, \n[2] Dimensoes, \n[3] Dimensoes\n");
scanf("%i", &menu);
if ( menu < 1 ) {
  printf("ERROR!");
}
else if (menu > 3) {
  printf("ERROR!");
}

//recebe o valor da matriz
switch (menu) {

  case 1 : 
printf("Digite o tamanho desejado para 1 Dim:  ");
scanf("%i", &a);
//limita a quantidade de elementos da matriz
if ( a > 6 ) {
  printf("ERROR! LIMIT REACHED!");
  return 0;
}
break;

  case 2:
printf("Digite o tamanho desejado para 1 Dim:  ");
scanf("%i", &a);

printf("Digite o tamanho desejado para 2 Dim:  ");
scanf("%i", &b);
//limita a quantidade de elementos da matriz
if ( a > 6 || b > 6 ) {
  printf("ERROR! LIMIT REACHED!");
    return 0;
}
break;

  case 3:
printf("Digite o tamanho desejado para 1 Dim:  ");
scanf("%i", &a);

printf("Digite o tamanho desejado para 2 Dim:  ");
scanf("%i", &b);

printf("Digite o tamanho desejado para 3 Dim:  ");
scanf("%i", &c);

//limita a quantidade de elementos da matriz
if ( a > 6 || b > 6 || c > 6 ) {
  printf("ERROR! LIMIT REACHED!");
    return 0;
}
break;
}

if (menu == 1 ) {
  int m[a];
for ( int i = 0; i < a; i ++ ) {
  printf("Digite o Elemento %d ", cont );
scanf("%i", &m[i]);
cont++;
}

for ( int i = 0; i < a; i ++ ) {
  printf("%i", m[i]);
}


}
else if ( menu == 2) {
  int m[a][b];

for ( int i = 0; i < a; i ++ ) {
  for ( int j = 0; j < b; j ++ ) {
    printf("Digite os Elementos ");
          scanf("%i", &m[i][j]);
  }
}


for ( int i = 0; i < a; i ++ ) {
  printf("|");
  for ( int j = 0; j < b; j ++ ) {
          printf(" %i |", m[i][j]);
  }
  printf(" \n");
}

}
else if ( menu == 3) {
  int m[a][b][c]; 


//recebe valores da matriz
for ( int i = 0; i < a; i ++ ) {
  for ( int j = 0; j < b; j ++ ) {
    for ( int k = 0; k < c; k ++ ) {
    printf("Digite os Elementos ");
    scanf("%i", &m[i][j][k]);
    }
  }
}
//escreve a matriz na tela 
for ( int i = 0; i < a; i ++ ) {
  for ( int j = 0; j < b; j ++ ) {
    for ( int k = 0; k < c; k ++ ) {
    printf("\nLinha %i Coluna %i Profundidade %i = Valor:%i", i,j,k,m[i][j][k]);
  }
}
}
}




return 0; 
}