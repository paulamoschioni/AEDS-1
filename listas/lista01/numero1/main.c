#include <stdio.h>
#include <stdlib.h>
 /*questao 01*/

int main()
{
    // Declarando variaveis
    int num1, num2;

    // Recebendo valores
    //printf ("Digite o numero 1: ");
    scanf ("%d",&num1);
    //printf ("Digite o numero 2: ");
    scanf ("%d",&num2);


    // Condicionais
    if (num1 > num2)
    {
        printf ("%d\n",num1);
    }
    else
    {
        printf ("%d\n",num2);
    }


        return 0;
}
