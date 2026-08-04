#include <stdio.h>
#include <stdlib.h>

int main()
{//Declarando as variaveis
    int num1, num2, num3, num4;

    //Recebendo os 3 numeros em ordem crescente
    printf ("Digite tres numeros em ordem crescente: ");
    scanf ("%d%d%d",&num1,&num2,&num3);

    //Recebendo um numero fora de ordem
    printf ("Digite um numero fora de ordem: ");
    scanf ("%d",&num4);

    //Mostrando em ordem descrecente
    if (num4 > num3)
    {
        printf ("A ordem decrescente e: %d,%d,%d,%d\n",num4,num3,num2,num1);
    }

    else if (num4 > num2 && num3 > num4)
    {
        printf ("A ordem decrescente e: %d,%d,%d,%d\n",num3,num4,num2,num1);
    }

    else if (num4 > num1 && num2 > num4)
    {
        printf ("A ordem decrescente e: %d,%d,%d,%d\n",num3,num4,num2,num1);
    }

    else if (num1 > num4)
    {
        printf ("A ordem decrescente e: %d,%d,%d,%d\n",num3,num2,num1,num4);
    }

        return 0;
}
