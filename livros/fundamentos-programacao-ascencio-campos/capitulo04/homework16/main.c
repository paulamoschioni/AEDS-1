#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Declarando valores
   float patual,    // Preco atual
         novop,     // Novo preco
         vmedia;    // Venda media mensal do produto


   // Recebendo valores
   printf ("Digite o preco atual do produto: ");
   scanf ("%f",&patual);
   printf ("Digite a venda media mensal do produto: ");
   scanf ("%f",&vmedia);


   // Condicionais
   if (vmedia < 500 && patual < 30)
   {
       novop = 1.1 * patual;
   }
   else if (vmedia >= 500 && vmedia < 1200 && patual >= 30 && patual <= 80)
   {
       novop = 1.15 * patual;
   }
   else if ( vmedia >= 1200 &&  patual >= 80)
   {
       novop = 0.8 * patual;
   }

   printf ("Novo preco: %.2f\n",novop);


    return 0;
}
