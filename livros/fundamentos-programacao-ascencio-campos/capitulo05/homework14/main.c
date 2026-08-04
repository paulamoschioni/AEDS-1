#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    float  div,      // Divida
           acu_div = 0,  // Acumumlador de
           total,
           v_parcela = 0;// Valor da parcela
    int    q_parcela,// Quantidade de parcelas
           v_juros = 0,  // Valor do juros
           juros,
           i;


    // Recebendo valor da divida inicial
    printf("Digite o valor da divida inicial: ");
    scanf("%f",&div);


    printf("VALOR DA DIVIDA:\t\tVALOR DO JUROS:\t\tQTDE DE PARCELAS:\t\tVALOR PARCELA: ");
    if (i == 1)
    {
        total = div;
        v_parcela = div;
        q_parcela = 1;

        printf("\nR$%.2f\t\t\t%d\t\t\t%d\t\t\t\tR$%.2f\n",div,0,q_parcela,v_parcela);
    }
    q_parcela+=2;
    juros+=10;


   // Grande laco
   for (i = 1; i <= 4; i++)
   {
      /*calculando juros*/
      v_juros = (div * juros)/100;
      /*calculando total*/
      total = v_juros + div;
      /*calculando parcela*/
      v_parcela = total / q_parcela;

      juros+=5;
      q_parcela+=3;

      /*atualizando valor divida*/
      div = total;
      /*printando*/
      printf("\nR$%.2f\t\t\t%d\t\t\t%d\t\t\t\tR$%.2f\n",div,v_juros,q_parcela,v_parcela);
   }




    return 0;
}
