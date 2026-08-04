#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variaveis
    int num, //numero
    r; // resto


    //Recebendo numero
    printf ("Digite um numero:");
    scanf ("%d",&num);

    //Calculando
    r = (num/2);

    //Condicoes
    if (r=0)
    {
        printf ("O numero e par\n");
    }

 else
    {
        printf ("O numero e impar\n");
    }
    return 0;
}
