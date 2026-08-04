#include <stdio.h>
#include <stdlib.h>

int main()
{
   char   tipo,   // tipo
          ref;    // Refrigeracao
   float  imp,    // Impostos
          add;    // Valor adicional
   int    preco,  // Preco sem impostos
          pc,     // Preco de custo com impostos
          desc;   // Desconto

    // Recebendo variaveis
    printf ("Digite o tipo e a refrigeracao: ");
    scanf (" %c %c",&tipo,&ref);
    printf ("Digite o preco: ");
    scanf (" %c %c",&tipo,&ref);


    // Codicional do valor adicional
       if (ref == 'N')
       {
           if (tipo == 'A')
           {
               if (preco < 15)
               {
                   add = 2;
               }
               else if (preco >= 15)
               {
                   add = 5;
               }
           }
        else if (tipo == 'L')
           {
               if (preco < 10)
               {
                   add = 1.5;
               }
               else if (preco >= 10)
               {
                   add = 2.5;
               }
           }

             else if (tipo == 'V')
           {
               if (preco < 30)
               {
                   add = 3;
               }
               else if (preco >= 30)
               {
                   add = 2.5;
               }
           }
       }

       else if (ref == 'S')
      {
          if (tipo == 'A')
          {
              add = 8;
          }

        else if (tipo == 'L')
           {
               add = 0;
           }

             else if (tipo == 'V')
           {
               add = 0;
           }
       }
       printf ("Valor adicional: %.2f\n",add);














    return 0;
}
