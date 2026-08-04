#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int p_unit,     // Preco unitario
        i,          // Contador que equivale ao produto numero i
        custoE,     // Custo de estocagem
        q_barato = 0,
        q_normal = 0,
        q_caro = 0;



    float imp,        // Impostos
          soma_extras = 0,
          maior_preco ,// Maior preco final, variavel a ser atualizada
          menor_preco,// Menor preco final, variavel a ser atualizada
          soma_imp = 0,
          media_extras,
          p_final;

    char refri,     // Refrigercao (S ou N)
         cat;       // Categoria

    // Criando grande laco
    for (i = 1; i <= 12; i++)
    {/*recebendo valores*/
     printf("Preco unitario: ");
     scanf ("%d",&p_unit);
     printf("Refrigeracao: ");
     scanf (" %c",&refri);
     printf("Categoria: ");
     scanf (" %c",&cat);

     /* condicional para custo de estocagem*/
     if (p_unit < 20)
     {
         if (cat == 'A')
         {
             custoE = 2;
         }
         else if (cat == 'L')
         {
             custoE = 3;
         }
         else if (cat == 'V')
         {
             custoE = 4;
         }
     }

      if (20 <= p_unit && p_unit <= 50)
     {
         if (refri == 'S')
         {
             custoE = 6;
         }

         else
         {
             custoE = 0;
         }
     }

     if (50 < p_unit)
     {
         if (refri == 'S')
         {
            if (cat == 'A')
            {
             custoE = 5;
            }
            else if (cat == 'L')
            {
             custoE = 2;
            }
            else if (cat == 'V')
            {
             custoE = 4;
            }
         }

         else
         {
            if (cat == 'A' || cat == 'V')
            {
             custoE = 0;
            }
            else if (cat == 'L')
            {
             custoE = 1;
         }
     }
     printf("Custo de estocagem: %d\n",custoE);


     /*imposto*/
     if (cat == 'A' && refri == 'S')
     {
      imp = 0.04  * p_unit;
      printf("Impostos : %.2f\n",imp);
     }
     else
     {
      imp = 0.02  * p_unit;
      printf("Impostos : %.2f\n",imp);
     }


     /*preco final*/
     p_final = p_unit + custoE + imp;
     printf ("Preco final: %.2f\n",p_final);

     /*acumular valores*/
     soma_extras += imp;
     soma_extras += custoE;

     /*maior preco*/
     if (i == 1)
     {
         maior_preco = p_final;
         menor_preco = p_final;
     }
     else
     {
        if (p_final > maior_preco)
        {
            maior_preco = p_final;
        }

        if (p_final < menor_preco)
        {
            menor_preco = p_final;
        }
     }

     /*acumulando imp*/
     soma_imp += imp;

     /* classificacao*/
     if (p_final < 20)
     {
         printf("barato");
         q_barato ++;
     }

     else if (20 <= p_final && p_final <=100)
     {
         printf("normal");
         q_normal ++;
     }
      else if (100 < p_final)
     {
         printf("caro");
         q_caro ++;
     }

  }
   // Fora do laco
   media_extras = soma_extras / 12;
   printf("media extras: %.2f\n",media_extras);
   printf("Maior preco: %.2f\n",maior_preco);
   printf("menor preco: %2f\n",menor_preco);


return 0;
}





