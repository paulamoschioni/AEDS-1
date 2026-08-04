#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarar variaveis
    int numerador, denominador;
    double deci;


    // Recebendo valores
    //printf ("Digite o valor do numerador: ");
    scanf ("%d",&numerador);
    //printf ("Digite o valor do denominador: ");
    scanf ("%d",&denominador);



    // Transformando em numero decimal
    deci = (double)numerador / denominador;
    printf ("%lf\n",deci);
    return 0;
}
