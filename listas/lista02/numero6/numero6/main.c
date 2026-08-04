#include <stdio.h>
#include <stdlib.h>

int main()
{
    int den,        // Denominandor
        i,          // Contador
        num;        // Numero que a pessoa digita
    float S = 0,        // Soma, e um valor acumulador
        fracao = 0;     // Valor do 1/2 , 1/3

    // Recebendo valor
     scanf ("%d",&num);

    // Laco

    for (i = 1; i <= num; i++)
    {
    fracao = (float) 1 / i;
    S += fracao;

    }
    printf("%.2f",S);

















    return 0;
}
