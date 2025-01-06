 #include <stdio.h>
 int main()
 {
 
 //declarando as variaveis
 int i,j,a,b,elemento,aux,c;

//pede o numero de elementos para o usuario
 printf("Digite o nro de elementos: ");
 scanf("%i", &a);
if (a > 30 || a <= 0 ) {
  printf("ERROR!");
  return 0;
}
//declarando o vetor
int v[a];

//recebe os elementos
for (i = 0; i < a; i ++ ) {
  printf("Digite os elementos ");
  scanf("%i", &v[i]);
}

for ( i = 0; i < a; i ++  ) {
  for ( j = i + 1 ; j < a; j ++  ) {
  if ( v[i] > v[j] ) {
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
  }
}
}

printf("Qual elemento deseja buscar ? ");
scanf("%i", &elemento);

for ( i = 0; i < a; i ++ ) {
  if ( v[i] == elemento) {
    printf("ENCONTRADO : %i ", elemento);
    break;
  }
}


for ( i = 0; i < a; i ++  ) {
printf("\n%i", v[i]);
}



//buscalinear


 return 0;
 }