/*
Desenvolva um programa para converter um valor de temperatura na escala Celsius para o equivalente na escala Fahrenheit.
Seu programa deverá:
Solicitar o valor da temperatura na escala Celsius.
Converter para a escala Fahrenheit utilizando a fórmula:
𝐹=9/5×𝐶+32
Imprimir o resultado na tela do computador utilizando uma mensagem no formato:
Uma temperatura de ____ graus Celsius equivale a ____ graus Fahrenheit.

Observação: utilize valores de ponto flutuante para todas as grandezas envolvidas.
*/


#include <stdio.h>
#include <math.h>

int main()
{

  float celsius,fahrenheit;
  printf("Digite a temperatura em Celsius: ");
  scanf("%f",&celsius);
  fahrenheit= (9/5)*celsius+32;
  printf("os graus %2.f em celsius representa %2.f em fahrenheit",celsius,fahrenheit);

}
