#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Decalrando variaveis
    int salmin,      // Salario minimo
        n_horas,     // Numero de horas trabalhadas no mes
        sal_bruto,   // Salario bruto
        sal_liq,     // Salario liquido
        grat,        // Gratificacao
        aux_ali;     // Auxilio alimentar
  char  cat,         // Categoria
        turno;       // Turno de trabalho
  float imp,         // Impostos
        cf;          // Coeficiente de trabalho


    // Recebendo valores
        printf ("Digite a categoria e o turno: ");
        scanf(" %c %c",&cat,&turno);
        printf ("Digite o salario minimo e o numero de horas trabalhadas:  ");
        scanf("%c%d%c%d",&salmin,&n_horas);


    // Calcular o coeficiente de trabalho
    if (turno == 'M' || turno == 'm')
        {
            cf = salmin * 0.1;
        }
    else if (turno == 'V' || turno == 'v')
        {
            cf = salmin * 0.15;
        }
    else if (turno == 'N' || turno == 'n')
        {
            cf = salmin * 0.12;
        }
    printf ("Coeficiente de trabalho: %.2f\n",cf);


    // Calculando salario bruto
        sal_bruto = n_horas * cf;
        printf ("O salario bruto e: %d\n",sal_bruto);



    // Coeficiente de trabalho
        if (cat == 'O' || cat == 'o')
        {
            if (salmin >= 300)
            {
                imp = 0.05;
            }
            else if (salmin < 300)
            {
                imp = 0.03;
            }
        }

        else if (cat == 'G' || cat == 'g')
        {
            if (salmin >= 400)
            {
                imp = 0.06;
            }
            else if (salmin > 400)
            {
                imp = 0.04;
            }
        }
           printf ("O coeficiente de salario e: %f\n",cf);

     // Gratificacao
     if (turno == 'N' || turno == 'n'  &&  n_horas > 80)
     {
         grat = 50;
     }
      else
      {
          grat = 30;
      }
      printf ("Gratificacao: %d\n",grat);


      // Auxilio alimentacao
      if (cat == 'O' ||   cf <= 25)
      {
          aux_ali = 1/3 *(sal_bruto);
      }
      else
      {
          aux_ali = 0.5 * (sal_bruto);
      }



    // Salario liquido
      sal_liq = sal_bruto + grat + aux_ali;
      printf ("salario liquido: %d\n",sal_liq);


      // Classificacao
      if (sal_liq < 350)
      {
          printf("Mal remunerado");
      }
    else if (350 <= sal_liq && sal_liq <= 600)
      {
          printf("Normal");
      }
    else if (sal_liq > 600)
      {
          printf("Bem remunerado");
      }









































    return 0;
}
