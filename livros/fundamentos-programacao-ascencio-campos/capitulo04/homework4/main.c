#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variaveis
    int num1, num2, num3;

    //Recebendo 3 numeros
    printf ("Digite o primeiro numero:");
    scanf ("%d",&num1);
    printf ("Digite o segundo numero:");
    scanf ("%d",&num2);
    printf ("Digite o terceiro numero:");
    scanf ("%d",&num3);

    // Organizando em condicionais para deteminar a ordem crescente
    if (num1 < num2 && num1 < num3)
    {
        if (num2 < num3)
            printf ("A ordem crescente e: %d,%d,%d\n",num1, num2, num3);
        else
            printf ("A ordem crescente e: %d,%d,%d\n",num1, num3, num2);
    }


    else if (num2 < num1 && num2 < num3)
    {
        if (num1 < num3)
        printf ("A ordem crescete e : %d,%d,%d\n", num2, num1, num3);
        else
        printf ("A ordem crescente e: %d,%d,%d\n",num2, num3, num1);
    }



    else if (num3 < num1 && num3 < num2)
    {
        if (num1 < num2)
        printf ("A ordem crescete e : %d,%d,%d\n", num3, num1, num2);
        else
        printf ("A ordem crescete e : %d,%d,%d\n", num3, num2, num1);
    }
    return 0;
}
