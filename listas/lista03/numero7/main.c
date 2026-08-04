#include <stdio.h>
#include <stdlib.h>

char funcaoPN ()
{
   // Declarando variaveis
   char faixa;
   int num;

   // Recebendo um numero
   //printf("Numero: ");
   scanf("%d",&num);

   //P ou N?
   if (num < 0)
   {
      faixa = 'N';
   }
   else if (num > 0)
   {
      faixa = 'P';
   }
   else if (num == 0)
   {
       faixa = 'N';
   }
  return faixa;
}

int main()
{
   // Declarando variaveis
   int N,        // N numeros a serem verificados
   i;
   char resultado;


   // Recebendo N
   scanf("%d",&N);
   // Criando grande laco
   for (i = 1; i <= N; i++)
   {
       /*Acionando funcao*/
       resultado = funcaoPN();

       /*Imprimindo SIM ou NAO*/
       if (resultado == 'P')
       {
           printf("SIM\n");
       }
       else if (resultado == 'N')
       {
           printf("NAO\n");
       }
   }

   return 0;
   }
