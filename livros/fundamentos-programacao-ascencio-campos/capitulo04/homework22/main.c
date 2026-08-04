#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variavies
    int   sal_base,     // Salario de base
          sal_liq,      // Salario liquido
          temposerv,    // Tempo de servico de um funcionario
          imp,          // Impostos
          grat;         // Gratificacao
    char  cat;          // Categoria

    // Recebendo valores
        printf ("Digite o sal base e o tempo de servico: ");
        scanf ("%d%d",&sal_base,&temposerv);

    // Calculando os impostos
        if (200 < sal_base)
        {
            imp = 0;
        }
         else if (200 <= sal_base && sal_base <= 450)
        {
            imp = 0.03;
        }
        else if (450 < sal_base && sal_base < 700)
        {
            imp = 0.08;
        }
        else if (sal_base >= 700)
        {
            imp = 0.12;
        }

        printf ("Impostos: %d\n",imp);


        // Calculando a gratificacao
        if (sal_base > 500)
        {
            if (temposerv <= 3)
            {
                grat = 20;
            }
            else if (temposerv > 3)
            {
                grat = 30;
            }
        }
        else if (sal_base <= 500)
        {
           if (temposerv < 3)
            {
                grat = 23;
            }
            else if (3 >= temposerv && temposerv < 6)
            {
                grat = 35;
            }
            else if ( temposerv >= 6)
            {
                grat = 33;
            }

       // Calculando salario liquido
       sal_liq = sal_base - imp + grat;
       printf ("Salario liquido: %d\n",sal_liq);


     // Categoria
     if (350 <= sal_liq)
     {
         cat = 'A';
     }
    else if (350 <= sal_liq && sal_liq <= 600)
    {
        cat = 'B';
    }
    else if (sal_liq > 600)
    {
        cat = 'C';
    }










        }

        return 0;
}
