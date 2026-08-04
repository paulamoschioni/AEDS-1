#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  // Declarando variaveis
  float base,// Base retangulo
      alt, //Altura do retangulo
      per, //Perimetro
      area, // Area
      diag; // Diagonal


  // Recebendo numeros
  //printf ("Digite o valor da base do retangulo:");
  scanf ("%f",&base);
  //printf ("Digite o valor da altura do retangulo:");
  scanf ("%f",&alt);


  // Calculando perimetro
  per = (2 * base) + (2 * alt);
  printf ("Perimetro: %.2f\n",per);


  // Calculando a area
  area = alt * base;
  printf ("Area: %.2f\n",area);


  // Calculando a diagonal
  diag = sqrt(alt*alt + base*base);
  printf ("Diagonal: %.2f\n",diag);


    return 0;
}
