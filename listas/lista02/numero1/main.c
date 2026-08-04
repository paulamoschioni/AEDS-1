#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    long int N,      // Sequencia de  valores
             num,    // um numero aleatorio da sequencia
             numP = 0,   // Numero de positivos
             num0 = 0,   // Numero de 0
             numN = 0,    // Numero de negativos
             i;      // Contador


    // Recebendo valores
    printf ("N: ");
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


   printf("%ld POSITIVOS\n", numP);
    printf("%ld NEGATIVOS\n", numN);
    printf("%ld ZEROS\n", num0);

return 0;
}
