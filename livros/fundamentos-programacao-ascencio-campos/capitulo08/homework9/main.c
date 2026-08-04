#include <stdio.h>
#include <stdlib.h>
// Declarando variaveis globais
int maior, menor;


void maiorMenor ()
{
   // Declarando variaveis
   int num, i;

    for (i = 1; i <= 5; i++)
    { /*Recebendo valores*/
       printf("Digite o %d numero: ",i);
       scanf("%d",&num);

      /*Inicializando valores no inicio do laco*/
      if (i == 1)
      {
       maior = num;
       menor = num;
      }
      else
      {
        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
      }
    }

}

int main ()
{
    // Declarando variaveis
    int resultado;

    // Acionando funcao
   maiorMenor();
    printf("Maior: %d\n Menor: %d\n",maior, menor
           );
    return 0;
}
