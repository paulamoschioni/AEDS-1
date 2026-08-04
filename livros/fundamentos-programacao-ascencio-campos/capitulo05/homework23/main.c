#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    float salmin,     // Salario minimo
          valor_pago, // Valor a ser peago pelo cliente
          valor_1K,   // Valor 1 kwt = 1/8 salmin
          q_kwts,     // quantidade kwts
          acu_vp = 0; // Acumulador de valor


     int  tipo_C,     // Tipo de consumidor 1,2,3
          cont500 = 0,
          i = 1;      // Contador para consumidores

    // Recebendo valores iniciais
    printf("Salario minimo: ");
    scanf("%f",&salmin);
    printf("Quantidade de kwts: ");
    scanf("%f",&q_kwts);
    printf("Tipo de consumidor: ");
    scanf("%d",&q_kwts);

    valor_1K = (float) salmin / 8;
    printf("1 Kwt: %.2f\n",valor_1K);

  // Criando grande laco
    while (q_kwts > 0)
    {
    /*valor pago*/
    switch (tipo_C)
    {
    case 1:
    valor_pago =  (float)(0.05 *(valor_1K * q_kwts)) + (valor_1K * q_kwts);
    break;
    case 2:
    valor_pago = (float)(0.1 *(valor_1K * q_kwts)) + (valor_1K * q_kwts);
    break;
    case 3:
    valor_pago = (float)(0.15 *(valor_1K * q_kwts)) + (valor_1K * q_kwts);
    break;
    }
    printf("Valor a ser pago: %.2f\n",valor_pago);

    acu_vp += valor_pago;

    if (500 <= valor_pago && valor_pago <= 1000)
    {
    cont500++;
    }

    printf("Quantidade de kwts: ");
    scanf("%f",&q_kwts);
    printf("Tipo de consumidor: ");
    scanf("%d",&q_kwts);

  }
       printf("Faturamento total: %.2f\n",acu_vp);
       printf("Total de pss entre 500 e 1000: %d\n",cont500);



    return 0;
}
