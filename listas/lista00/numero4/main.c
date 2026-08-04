#include <stdio.h>
#include <stdlib.h>


int main()
{

    //Declarando as variaveis
   double r, // Raio do circulo
          per,  // Perimetro
          area; // Area


    //Recebendo valor
    //printf ("Digite o valor do raio do circulo: ");
    scanf ("%lf",&r);


    // Calculando perimetro
    per = (2 * 3.14159 *r);
    printf ("Perimetro: %.2lf\n",per);


    //Calculando area
    area = (3.14159 *r*r);
    printf ("Area: %.2lf\n",area);

    return 0;
}
