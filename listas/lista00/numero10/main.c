#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Declarando variaveis

    int     min,   // Minutos
            hora, // Horas agora
            tmin;   // Tempo em minutos


    // Recebendo valor
    //printf ("Digite as horas e min: ");
    scanf ("%d%d",&hora,&min);


    // Calcular quantos minutos se passaram desde o inicio do dia
    tmin = (hora*60) + (min);
    printf ("%d\n",tmin);

    return 0;
}
