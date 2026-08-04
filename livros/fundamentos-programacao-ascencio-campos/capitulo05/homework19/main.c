#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int m, n, iN, proxN, i, soma;

    printf("M,N: ");
    scanf("%d%d",&m,&n);

    // Criando grande laco
     while (m < n)
    {
        soma = 0;
      /* definir quantos numeros sao*/
      iN =(n - m) - 1;

      /* definir quais numeros sao e guardando eles em soma*/
      for (i = 1; i <= iN; i++)
      {
        proxN = m + i;
        soma += proxN;
      }
    printf("Soma: %d\n",soma);

    /*novo valor*/
    printf("M,N: ");
    scanf("%d%d",&m,&n);

    }
    return 0;
}
