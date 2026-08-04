#include <stdio.h>
#include <stdlib.h>

/*questao 02*/

int main()
{
    // Declarando as variaveis
    int num1, num2, cond1, cond2, adicao;

    // Recebendo as variaveis
    //printf ("Digite o primeiro numero: ");
    scanf ("%d",&num1);
   //printf ("Digite o segundo numero: ");
    scanf ("%d",&num2);


    // Soma
    adicao = num1 + num2;



    // Condicional
    if (adicao >= 10)
    {
        cond1 = adicao + 5;
        printf ("%d\n", cond1);
    }
    else
    {
        cond2 = adicao + 7;
        printf ("%d\n", cond2);
    }


    return 0;
}
