#include <stdio.h>
#include <stdlib.h>
/*
1. Fazer um programa para receber um número inteiro de segundos do usuário e imprimir
a quantidade correspondente em horas, minutos e segundos.
*/
int main(){

  int horas,minutos,segundos,resto;

  printf("Digite os segundos: ", segundos);
  scanf("%d",&segundos);

  horas = segundos / 3600;
  resto = segundos % 3600;
  minutos = resto / 60;
  segundos = resto % 60;
  printf("%i horas, %i minutos, %i segundos\n", horas,minutos,segundos);
  printf("%i horas, %i minutos, %i segundos\n", horas,minutos,segundos);


  return 0;
}