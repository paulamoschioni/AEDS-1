#include <stdio.h>
#include <stdlib.h>

void receberInfo10 ()
{
  // Declarando variaveis
  int id, i, somaId = 0, i90 = 0, i10 = 0, i19 = 0;
  float peso, alt, mediaId,  porc10;

   // Criando grande laco
   for (i = 1; i <= 10; i++)
   {
       /* recebendo dados*/
       printf("PESSOA %d\n",i);

       printf("Idade: ");
       scanf("%d",&id);
       printf("Peso: ");
       scanf("%f",&peso);
       printf("Altura: ");
       scanf("%f",&alt);

       /*acumulando idades*/
       somaId += id;

       /*condicionais*/
        if (90 < peso && alt < 1.5)
       {
           i90++;
       }
        if (10 <= id && id <= 30)
       {
           i10;
       }
       if (1.9 < alt)
       {
           i19++;
       }
    }
    mediaId = (float) somaId / 10;
    printf("Media idades: %.2f\n",mediaId);

    printf("Qtde de pessoas entr 10 e 30 anos com mais de 1.90 de altura : %d\n",i90);

    porc10 = (100 * i10)/ i19;
    printf("porcentagem : %.2f\n",porc10);
}

int main()
{
    receberInfo10();

    return 0;
}
