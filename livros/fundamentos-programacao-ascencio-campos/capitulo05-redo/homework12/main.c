#include <stdio.h>
#include <stdlib.h>

void numeroPrimo ()
{
    // Declarando variaveis
    int num, i, j, primo, iP = 0;

    // Criando grande laco
    for (i = 1; i <= 10; i++)
    {
        /*recebendo variaveis*/
        printf("digite o %d numero: ",i);
        scanf("%d",&num);

        /*condicional para numero primo*/
        primo = 1;  // Assumindo que todos numeros sao inicialmente primos

        if (num >= 2)
        {
           for (j = 2; j < num; j++)
           {
            if (num % j == 0)
            {primo = 0;}
           }
        }
        else
        {
           primo = 0;
        }

        if (primo == 1)
            {iP++;}

    }
    printf("Quantidade de numeros primos: %d\n",iP);
}

int main ()
{
    numeroPrimo();
    return 0;
}
