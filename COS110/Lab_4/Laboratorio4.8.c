#include <stdio.h>
int main()
{
 int c, primeiro, ultimo, meio, n, consulta, vet[100],search,achei=0;

 //recebe o numero de elementos 
 printf("Entre nro de elementos\n");
 scanf("%d",&n);

//preenche o vetor
 printf("Entre %d inteiros\n", n);
 for (c = 0; c < n; c++)
 scanf("%d",&vet[c]);

// executa uma busca 
 printf("Entre valor a procurar\n");
 scanf("%d", &consulta);

//otimizacao de busca
 primeiro = 0; // recebe a posição 0
 ultimo = n - 1; // recebe a posição do ultimo elemento do vetor 
 meio = (primeiro+ultimo)/2; // recebe a posicao do meio do vetor 

// acontece enquanto a primeira posição for menor ou igual a ultima
 while (primeiro <= ultimo && achei == 0) {


//se o numero do meio for menor que o numero buscado, ele começa a buscar a partir dai
 if (vet[meio] < consulta)
 primeiro = meio + 1;

//se o vetor do meio for igual ao numero buscado ele escreve o resultado
 else if (vet[meio] == consulta) {
 printf("%d encontrado na posicao %d.\n",consulta, meio+1);
 achei = 1;
 }
 else
 ultimo = meio - 1;
 meio = (primeiro + ultimo)/2;
 }

// se o elemento buscado estiver fora dos limites, o programa escreve o erro
 if (primeiro > ultimo) 
 printf("Nao encontrado! %d nao esta na lista.\n", consulta);
 

 return 0;
}