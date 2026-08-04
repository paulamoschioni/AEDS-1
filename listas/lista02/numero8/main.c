#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int L,      // Imprimira valores menores que
        n1 = 1,
        n2 = 1,
        n3;


    // Recebendo valores
    scanf("%d",&L);
    printf("1 1 ");

    // Laco para sequencia de fibonatti
    n3 = n1 + n2;

    while (n3 < L)
    {
        n3 = n1 + n2;

        // atualizando
        n1 = n2;
        n2 = n3;

         printf("%d ",n3);


    }


    return 0;
}
