#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Declarando variaveis
   int id,              // Idade
       p,               // Peso
       cont_18 = 0,     // Contador para jogadores com menos de 18 anos
       soma_id = 0,     // Soma das idades (acumulador)
       iJ,          // Contador para NUMERO DE JOGADORES
       cont_80,
       iT = 1;          // Contador para numero de TIMES

   float media_id,      // Media das idades
         h,             // Altura
         soma_h = 0,    // Soma das alturas
         media_h = 0,   // Media das alturas
         porc_80;       // Porcentagem dos jogadores com MAIS de 80Kg entre TODOS


    // Criando o grande laco
    while (iT <= 5)
    {
        printf("TIME %d:\n ",iT);

        soma_id = 0; /*zerando soma das idades para nao acumular*/

    /*contabilizando idades inferiores a 18*/
     for (iJ = 1; iJ <= 11; iJ++)
     {
         printf("PESO: ");
         scanf("%d",&p);
         printf("IDADE: ");
         scanf("%d",&id);
         printf("ALTURA: ");
         scanf("%f",&h);

        if (id < 18)
        {
        cont_18++;
        }

     /*colocando no acumulador de soma  de idades*/
     soma_id += id;

     /*colocando no acumulador a soma das alturas*/
     soma_h += h;

       if (p > 80)
       {
        cont_80++;
       }

     }
      /*calculando media das idades DE CADA TIME*/
     media_id = soma_id / 11;
     printf("Media de idades do time %d: %.2f\n",iT,media_id);


    iT++;
    }
        media_h = soma_h / 55;
        printf("Media geral das idades: %.2f\n",media_h);

        porc_80 = (float)(cont_80*100) / 55;
        printf("Porcentagem de pesos acima de 80: %.2f%%",porc_80);

    return 0;
}
