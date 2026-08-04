#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variáveis
    int num,        // Numero inteiro maior que 1
        i,
        dividiu = 0; // Contador do numero de vezes que dividiu



    // Grande laço

    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
         /*numero e divisivel por 1 e por ele mesmo ou mais?*/
        if (num % i == 0)
        {
         dividiu
         ++;
        }


    }

       /*primo ou nao?*/
        if (dividiu > 2)
        {
          printf("NAO PRIMO");
        }
        else if (dividiu == 2)
        {
            printf ("PRIMO");
        }










    return 0;
}
