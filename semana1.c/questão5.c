
/*
-calcule a área de um circulo
solicitar o raio, e usar formula area=pi*raio^2
*/

#include <stdio.h>
#include <math.h>
int main ()
{
  float raio,area;
  printf("Qual o raio do circulo? ");
  scanf("%f",&raio);
  area=3.14*pow(raio,2);
  printf("Um circulo com um raio %f tem a área de %f",raio,area);
}
