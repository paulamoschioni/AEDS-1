#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    // Declaranod variaveis
    int a, b, c, delta, x1, x2;

    // Recebendo valores
    printf ("Digite o valor de a: ");
    scanf ("%d",&a);
    printf ("Digite o valor de b: ");
    scanf ("%d",&b);
    printf ("Digite o valor de c: ");
    scanf ("%d",&c);


    // Calculos
    delta = (b * b)*(-4*a*c);

    // Codicionais
    if (delta < 0)
    {
        printf ("Nao existe raiz real.\n");
    }
    else if (delta = 0)
    {
        printf ("Existe uma raiz real: %d\n",x1);
        x1 = (-b)/ 2 * a;
    }
    else if (delta > 0)
    {
        printf ("Existem duas raizes reais: %d e %d\n",x1,x2);
        x1 =  (-b + sqrt(delta))/ 2*a;
        x2 =  (-b - sqrt(delta))/ 2*a;
    }

    return 0;
}
