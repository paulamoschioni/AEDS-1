#include <stdio.h>
#include <stdlib.h>

void faixasEtarias ()
{
    // Declarando variaveis
    int id, i, i1 = 0, i11 = 0, i21 = 0, i31 = 0;
    float soma1 = 0, soma11 = 0, soma21 = 0,soma31  = 0;
    float peso, media1, media11, media21, media31;

    // Criando grande laco
    for (i = 1; i <= 15; i++)
    {
      ///recebendo variaveis
        printf("PESSOA %d: \n",i);
        printf("Peso: ");
        scanf("%f",&peso);
        printf("Idade: ");
        scanf("%d",&id);

      ///condicionais para idades
         if (1 <= id && id <= 10)
         {
             i1++;
             soma1 += peso;
         }
         else if (11 <= id && id <= 20)
         {
             i11++;
             soma11 += peso;
         }
         else if (21 <= id && id <= 30)
         {
             i21++;
             soma21 += peso;
         }
         else
         {
             i31++;
             soma31 += peso;
         }

    }

      // Calculando media de acordo com a idade
      media1 = (float) soma1 / i1;
      printf("Media de 1-10: %.2f\n",media1);

      media11 = (float) soma11 / i11;
      printf("Media de 11-20: %.2f\n",media11);

      media21 = (float) soma21 / i21;
      printf("Media de 21-30: %.2f\n",media21);

      media31 = (float) soma31 / i31;
      printf("Media de 31+: %.2f\n",media31);
}

int main ()
{
    faixasEtarias();

    return 0;
}
