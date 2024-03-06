/*
Desenvolva um programa para calcular o IMC (Índice de Massa Corporal) de uma pessoa. 
Seu programa deverá:
Solicitar o peso da pessoa (em quilogramas).
Solicitar a altura da pessoa (em metros).
Calcular o IMC pela fórmula:  𝐼𝑀𝐶=𝑝𝑒𝑠𝑜/〖𝑎𝑙𝑡𝑢𝑟𝑎〗^2 
Imprimir o resultado na tela do computador utilizando uma mensagem no formato:
O IMC de uma pessoa com peso __ kg e altura __ m é igual a ___.
*/

#include <stdio.h>
#include <math.h>

int main()
{
int peso;
float altura;
float imc;

printf("peso:\n");
scanf("%d",&peso);

printf("Altura: \n");
scanf("%f",&altura);

imc= peso/(altura*altura);

printf(" O IMC de uma pessoa com peso %d kg ",peso);
printf("e a altura é %.2f m é igual a %.2f",altura,imc);

return 0;
}
