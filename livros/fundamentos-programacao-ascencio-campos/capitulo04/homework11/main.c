#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int horai, // Hora de inicio do jogo
        mini,  // Minuto de inicio do jogo
        mind,  // Minuto de duracao
        horad, // hora de duracao
        horaf, // Hora final
        minf;   // Minuto final


    // Recebendo valores
    printf ("DIGITE O HORARIO INICIAL:\n");
    printf ("Hora: ");
    scanf ("%d",&horai);
    printf ("Minuto: ");
    scanf ("%d",&mini);

    printf ("DIGITE O HORARIO FINAL:\n");
    printf ("Hora: ");
    scanf ("%d",&horaf);
    printf ("Minuto: ");
    scanf ("%d",&minf);


    // Condicionais
    if (mini > minf)
    {
        minf = minf + 60;
        horaf = horaf - 1;
    }


    else if (horai > horaf)
    {
        horaf = horaf + 24;
    }



    // Calculo da duracao
    horad = horaf - horai;
    mind = minf- mini;
    printf ("A duracao do jogo foi de: %dh%d\n",horad,mind);
        return 0;
}
