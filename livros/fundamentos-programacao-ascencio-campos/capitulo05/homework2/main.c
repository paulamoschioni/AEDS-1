#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Decalarando variaveis
   int num, deno=0,N;
   float fat, E=0;


   // Recebendo valores
   printf ("Escreva um numero: ");
   scanf ("%d",&N);

   //while
   while (deno <= num)
   {
       //calcular fatorial
       fat = 1;
       deno = num;

       while (num > 1)
       {
           fat = fat*num;
           num-- ;
       }

       E = E + 1/fat;
       deno++;
   }










    return 0;
}
