// Escreva um programa em C que solicite que o usuário forneça dois números inteiros e imprima o resultado da soma, subtração, multiplicação e divisão inteira desses números.

#include <stdio.h>

int main(){

int num1,num2;
printf("Digíte um número inteiro: ");
scanf("%d", &num1);
printf("Digíte um outro número inteiro: ");
scanf("%d", &num2);

printf("A soma é: %d \n", (num1+num2));
printf("A subtração é: %d \n", (num1-num2));
printf ("A multiplicação é: %d \n", (num1*num2));
printf("A divisão é: %d \n", (num1/num2));

return 0;
  }