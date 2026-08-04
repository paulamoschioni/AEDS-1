#include <stdio.h>
#include <stdlib.h>

int main()
{
     // Declarando variaveis
    long int N,      // Sequencia de  valores
             num,    // um numero aleatorio da sequencia
             numP = 0,   // Numero de positivos
             num0 = 0,   // Numero de 0
             numN = 0,   // Numero de negativos
             i;      // Contador
     double     pP,         // Porcentagem dos positivos
             pN,
             p0;

    // Recebendo valores
    //printf ("N: ");
    scanf ("%ld",&N);

    // Fazendo repeticao para verificar os numeros (varredura)
    for (i = 1; i <= N; i++)
   {
       scanf("%ld",&num);

          if (num == 0)
        {
        num0++;
        }
          else if (num < 0)
        {
        numN++;
        }
          else
        {
        numP++;
        }

    }

    pP = (float) (numP * 100)/N;
    pN = (numN * 100)/N;
    p0 = (num0 * 100)/N;


    printf ("%.0lf%% POSITIVOS\n",pP);
     printf ("%.0lf%% NEGATIVOS\n",pN);
     printf ("%.0lf%% ZEROS\n",p0);
    return 0;
}
