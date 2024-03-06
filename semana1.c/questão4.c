/*
-calcule a hipotenusa de um triângulo retângulo, a partir dos valores dos catetos.
formula: hipotenusa= raiz quadrada de (cateto1² + cateto2²)

*/

#include <stdio.h>
#include <math.h>
int main ()
{
  float cateto1,cateto2,hipotenusa;

  printf("Digite o valor do cateto 1: ");
  scanf("%f",&cateto1);
  printf("Digite o valor do cateto 2: ");
  scanf("%f",&cateto2);

  hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
  printf("Um triangulo retângulo com lados %.2f e %.2f, tem uma hipotenusa de %.2f", cateto1, cateto1, hipotenusa);

}