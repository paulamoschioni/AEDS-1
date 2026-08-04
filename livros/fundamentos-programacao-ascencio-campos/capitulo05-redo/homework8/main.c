#include <stdio.h>
#include <stdlib.h>

void grandeFuncao()
{
   // Declarando variaveis
   int id, i, i50 = 0, iInf = 0, somaInf = 0,iR = 0, iA = 0;
   float peso, alt, mediaInf, porcA;
   char olhos, cab;

   // Criando grande laco para 6 pessoas
   while (i <= 6)
   { /*recebendo variaveis*/
       printf("PESSOA %d\n: ",i);

       printf("Cor dos cabelos: ");
       scanf(" %c",&cab);
       printf("Cor dos olhos: ");
       scanf(" %c",&olhos);
       printf("Idade: ");
       scanf("%d",&id);
       printf("Peso: ");
       scanf("%f",&peso);
       printf("Altura: ");
       scanf("%f",&alt);

       /*Condicionais*/
       if (50 <= id && peso <= 60)
       {
         i50++;
       }
       if (alt < 1.50)
       {
         iInf++;
         somaInf += id;
       }
       if (olhos == 'A')
       {
           iA++;
       }
       if (cab == 'R' && olhos != 'A')
       {
           iR++;
       }

   i++;
   }
   // Calculando extras
   mediaInf = (float) somaInf / iInf;
   printf("Media idades com menos de 1.50 de altura: %.2f\n",mediaInf);

   porcA = (100 * iA)/6;
   printf("A porcentgem de pessoas com olhos azuis e: %.2f\n",porcA);

   printf("Quantidade de pessoas ruivas sem olhos azuis: %d\n",iR);

   }




int main()
{

    grandeFuncao();

    return 0;
}
