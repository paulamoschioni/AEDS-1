#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
     int    ang,    // Angulo
            voltas;

    // Recebendo valores
    printf ("Digite o valor do angulo: ");
    scanf ("%d",&ang);


    // Calculando o quadrante para angulos com + de 360 graus (+ 1 volta)
    if (360 < ang || ang <= -360)
    {
        voltas =  ang / 360;
        ang = ang % 360;
    }
    else
    {
        voltas = 0;
    }


    // antihorairo oiu horario
    if (ang > 0)
    {
    printf ("Sentido horario: ");
    }
    else if (ang < 0)
    {
    printf ("Sentido antihorario: ");
    }


    // em cima do eixo
    if ( ang == 90 || ang == 180 || ang == 270 || ang ==360 || ang == 0 || ang == -360 || ang == -270 || ang == -180 || ang == -90)
    {
        printf ("Esta em cima do eixo");
    }




    // quadrante
    if (0 < ang && ang <90  || -360 < ang && ang < -270)
    {
        printf ("1 quadrante");
    }
    else if (90 < ang && ang < 180 || -270 < ang && ang < -180)
    {
        printf ("2 quadrante");
    }
    else if (180 < ang && ang < 270  || -180 < ang && ang < -90)
    {
        printf ("3 quadrante");
    }
    else if (270 < ang && ang < 360  || -90 < ang && ang < 0)
    {
        printf ("4 quadrante");
    }


    return 0;
}
