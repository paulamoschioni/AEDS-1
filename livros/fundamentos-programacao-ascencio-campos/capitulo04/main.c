#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando numeros
    int num1, num2;

    //Recebendo numeros
    printf ("Digite o primeiro numero:");
    scanf ("%d",&num1);
    printf ("Digite o segundo numero:");
    scanf ("%d",&num2);

    // Determinando os maiores
    if (num1 > num2)
    {
        printf("O maior numero e: %d\n",num1);
    }

    else if (num2 > num1)
    {
        printf ("O maior numero e: %d\n",num2);
    }
    else if (num1 = num2)
    {
        printf ("Os dois numeros sao iguais");
    }

    return 0;
}
