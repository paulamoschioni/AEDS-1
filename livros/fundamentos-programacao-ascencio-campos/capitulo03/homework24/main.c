#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    float horas, //Hora completas
        conversao, //conersao para minutos
        m; // Minutos
    int h; // Horas inteiras

    //Recebendo valores
    printf ("digite o valor das horas:");
    scanf ("%f",&horas);

    //calculando horas digitais em minutos
    h = (int)horas;
    m = horas - h;
    conversao = (h*60) + (m*100);
    printf ("Conversao e: %.1f\n",conversao);

    return 0;
}
