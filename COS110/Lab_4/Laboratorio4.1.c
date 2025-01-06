 #include <stdio.h>

 int main() {
 
 int i,n,j,aux;

 printf("Digite um valor de 1 a 100:  ");
 scanf("%i", &n);
 if (n > 100) {
   printf("ERROR!");
 }

int v[n];

for ( i = 0; i < n; i ++ ) {
  printf("Digite os valores do vetor ");
  scanf("%i", &v[i]);
}

while ( i != 0 ) {   //inverte a ordem do vetor
  i --;
  printf("%i", v[i]);
}


return 0;
}