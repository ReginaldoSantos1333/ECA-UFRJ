#include <stdio.h>
 int main()
 {
   //declaracao de variaveis a serem utilizadas
 int vet[100], n, c, d, posicao, aux;
//pede para o usuario o numero de elementos desejado
 printf("Entre nro de elementos\n");
 scanf("%d", &n);

 printf("Entre %d inteiros\n", n);
//le os valores que o usuario digitar 
 for ( c = 0 ; c < n ; c++ )
 scanf("%d", &vet[c]);

 for ( c = 0 ; c < ( n - 1 ) ; c++ ) // organiza as posições 
 {
 posicao = c;

 for ( d = c + 1 ; d < n ; d++ ) // compara as posições com os elementos, os organizando
 {
 if ( vet[posicao] < vet[d] ) // troca a ordem como crescente ou decrescente dependendo do sinal de desigualdade
 posicao = d;
 }
 if ( posicao != c ) // se a posição for diferente do elemento
 {
 aux = vet[c];  //auxiliar armazena o vetor
 vet[c] = vet[posicao]; // o vetor original recebe o a posição
 vet[posicao] = aux; // o vetor posição recebe o conteudo do vetor original
 }
 }

 printf("Lista ordenada em ordem crescente:\n");
//escreve na tela a lista já ordenada
 for ( c = 0 ; c < n ; c++ )
 printf("%d\n", vet[c]);

 return 0;
 }