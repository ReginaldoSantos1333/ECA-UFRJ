#include <stdio.h>

int main () {

int rep; //variavel para repeticao for
float num, media, total; //variaveis do tipo float para x,00 
total = 0; // variavel total é quem vai receber os numeros digitados pelo user

printf("\n\nSeja bem vindo ao programa de 20 medias!"); //apresentacao

for (rep = 1; rep<=20; rep++) { //3 condicoes, onde começar, até onde ir, e quanto somar
printf("\n\nDigite aqui seus numeros (20 numeros)!:  "); 
scanf("%f", &num); //recebe os numeros do usuario
total = total + num; //total recebe a soma dos numeros pelo usuario
}

media = total/20; //calculo da media dos numeros digitados pelo usuario

printf("\n\n Sua media e´igual a: %.2f", media); //mostrar na tela


  return 0;
}