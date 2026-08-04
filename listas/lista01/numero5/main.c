#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definindo variaveis
    float diaria,   // Valor normal da diaria
          diariaP,  // Diaria promocional
          total80,  // Total arrecadado com 80% de lotacao
          total50,  // Total arrecadado com 50% de lotacao
          dif;      // Diferenca

    // Recebendo valores

    scanf ("%f",&diaria);


    // Calculando o valor da diaria promocional
    diariaP = 0.75*(diaria);
    printf ("Valor promocional: %.2f\n",diariaP);


    // Calculando o total arrecadado com 80% de ocupacao com diaria promocional
    total80 = 64*(diariaP);
    printf ("Promocional com 80%% ocupado: %.2f\n",total80);


    // Calculando o total arrecadado com 50% de ocupacao com diaria normal
    total50 = 40*(diaria);
    printf ("Normal com 50%% ocupado: %.2f\n",total50);


    // Calculando a diferenca entre esses dois valores
    dif = total80 - total50;
    printf ("Difereca entre os valores: %.2f\n",dif);




    return 0;
}
