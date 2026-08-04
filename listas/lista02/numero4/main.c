#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Declaração de variáveis
    int den=0, num ,N;
    float fat, E=0;

    // Receber número de parcelas N
   // printf("N: ");
    scanf("%d",&N);

    while (den <= N)
    {
        // Calcula fatorial
        fat = 1;
        num = den;
        while (num > 1)
        {
            fat = fat * num;
            num--;
        }

        E = E + 1/fat;

        den++;
    }

    // Mostra resultado
    printf("%.2f\n",E);

    return 0;
}
