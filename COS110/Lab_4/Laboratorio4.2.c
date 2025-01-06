 #include <stdio.h>

 int main() {
 
 int i,n,j,aux, auy,m,g=0,y;

  printf("Digite dois valores de 1 a 100 :  ");
 scanf("%i", &n);
  printf("Digite dois valores de 1 a 100 :  ");
 scanf("%i", &m);

 if (n > 100) {
   printf("ERROR!");
 }
 
 if (m > 100) {
   printf("ERROR!");
 }
g = n  + m;
int v[n];
int b[m];
int h[g];
for ( i = 0; i < n; i ++ ) {
  printf("Digite os valores do vetor 1 ");//recebe os valores do vet 1 
  scanf("%i", &v[i]);
 
}
for ( j = 0; j < m; j ++ ) {
  printf("Digite os valores do vetor 2 "); //recebe os valores do vet 2
  scanf("%i", &b[j]);

}

aux = 0;

for ( i = 0; i < n; i ++ ) {        //ordena vet 1
  for ( j = i+1; j < n; j ++ ) {
    if ( v[i] > v[j]) {
      aux = v[i];
      v[i] = v[j];
      v[j] = aux;
    }
  }
}

auy = 0;

for ( i = 0; i < m; i ++ ) {          //ordena vet 2
  for ( j = i+1; j < m; j ++ ) {
    if ( b[i] > b[j]) {
      auy = b[i];
      b[i] = b[j];
      b[j] = auy;
    }
  }
}

  
  for ( i = 0; i < g; i ++ ) {      //escreve vet 2
      printf("%d", h[i]);   //escreve vet 2
  }
  
return 0;
}