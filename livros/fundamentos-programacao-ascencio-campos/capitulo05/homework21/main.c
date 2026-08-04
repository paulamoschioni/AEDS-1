#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Declarando variaveis
  int qtde,     // Quantidade de numeros na sequencia
      num,      // Numero
      somaN,    // Acumulador de soma dos numeros
      somaNP,
      i,
      contP ,
      contI,
      maior,
      menor;
  float  mediaN,mediaNP, porcI;

printf("Numero: ")
    // Criando grande laco
    while (num != 30000)
    {
        somaN = 0;
        somaNP = 0;
        contP = 0;
        contI = 0;

        /*recebendo dados*/
        printf("Quantidade: ");
        scanf("%d",&qtde);

        for (i = 1; i <= qtde; i++)
        {
            printf("Numero: ");
            scanf("%d",&num);
            somaN += num;

            /*par?*/
            if (num % 2 == 0)
            {
            contP ++;
            somaNP += num;
            }
            else
            {
            contI++;
            }


        /*definindo o maior e o menor*/
        if (i == 1)
        {
         maior = num;
         menor = num;
        }
        else if (i != 1)
        {
          if (maior < num)
          {
          maior = num;
          }
          if (menor > num)
          {
          menor = num;
          }

          *medias*/
    mediaN = (float) somaN / qtde;
    printf("Media dos numeros: %.1f\n",mediaN);
    mediaNP = (float) somaNP / contP;
    printf("Media dos numeros: %.1f\n",mediaNP);

    /*porcentgame impares*/
    porcI = (contI *100)/qtde;

    /*maior e menor*/
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
        }


    }



return 0;
}
