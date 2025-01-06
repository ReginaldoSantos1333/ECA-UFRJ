 #include <stdio.h>
 int main()
 {
   //declaração das variaveis 
 int n, vet[1000], c, d, t;
 //escreve na tela pedindo a quantidade de elem. para o usuario
 printf("Entre nro de elementos\n");
 scanf("%d", &n);

 //pede para o usuario os elementos do vetor
 printf("Entre %d inteiros\n", n);
 for (c = 0; c < n; c++)
 {
 scanf("%d", &vet[c]);
 }

// d recebe as posições dos elementos 
 for (c = 1 ; c <= n - 1; c++) {
 d = c;
 while ( d > 0 && vet[d-1] < vet[d]) { // enquanto o valor de D é acima de 0, ele organiza as posições as comparando com o valor dos elementos.
 t = vet[d];
 vet[d] = vet[d-1];
 vet[d-1] = t;
 d--;
 }
 }
 
 //escreve na tela a lista já organizada em ordem crescente
 printf("Lista ordenada em ordem crescente:\n");
 for (c = 0; c <= n - 1; c++) {
 printf("%d\n", vet[c]);
 }
 return 0;
 }