#include <stdio.h>
#include <stdlib.h>

int tabelaMultiplicao(int num)
{
    // Declarando variaveis
    int i, j, mult = 1;

    // Criando grande laco
    for (i = 1; i <= num; i++)
    {
      for (j = 1; j <= num; j++)
      {
         mult = i * j;
         printf("%4d ",mult);
      }
      printf("\n");
    }
        return mult;

}

int main()
{
    // Declarando variaveis
    int num, resultado;

    // Recebendo num
    printf("Numero: ");
    scanf("%d",&num);

    // Acionando funcao
    while (1 <= num || num <= 9)
     {
        resultado = tabelaMultiplicao(num);
     }

     return 0;
}
