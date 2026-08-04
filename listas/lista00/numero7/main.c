#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   //Declarando as variaveis
   int R, //Razao
       a1, // Primeiro termo
       a5; // Quinto termo

   //Recebendo valores
   //printf ("Digite a razao: ");
   scanf ("%d",&R);

   //printf ("Digite o primeiro termo: ");
   scanf ("%d",&a1);


   //Calculando o quinto termo
   a5 = (pow(R,4))* a1;
   printf ("%d\n",a5);


    return 0;
}
