#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* header*/

int main()
{
   //Declarando as variaveis
   int tesc, //tamanho escada
       altura, //altura em que deseja pregar o quadro
       dist; // distancia que a escada deve estar da parede


    //Pegando as variaveis
    printf ("Digite o tamanho da escada:");
    scanf ("%d",&tesc);
    printf ("Digite a altura que deseja pregar o quadro:");
    scanf ("%d",&altura);


   //Calculando a distancia da escada
    dist = pow(tesc,2) - pow(altura,2);
    dist = sqrt(dist);

   //Mostrar a distacia
   printf ("A distancia da escada ate a parede e: %d\n",dist);
    return 0;
}
