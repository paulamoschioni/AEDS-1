#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int L,      // L primeiros numeros
        n1 = 1,     //
        n2 = 1,
        n3 ,
        i;


    // Recebendo
    scanf("%d",&L);

    if (i == 1 || i == 2)
    {
        printf("1 ");
    }

    for (i = 3 ; i <= L; i++)
    {

     n3 = n1 + n2;
    printf("%d ",n3);

    // atualizando
     n1 = n2;
     n2 = n3;
    }






    return 0;
}
