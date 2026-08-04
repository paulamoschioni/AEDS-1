#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    //Declarando variaveis
    float catop, // Cateto oposto
          catad, // Cateto adjacente
          hip; // Hipotenusa


    //Recebendo valores
    //printf ("Digite o valor do cateto oposto: ");
    scanf ("%f",&catop);
    //printf ("Digite o valor do cateto adjacente: ");
    scanf ("%f",&catad);

    // Calculando a hipotenusa
    hip = sqrt(catop*catop + catad*catad);
    printf ("Hipotenusa: %.2f\n", hip);

    return 0;
}
