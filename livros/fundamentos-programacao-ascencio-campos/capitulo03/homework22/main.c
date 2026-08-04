#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    int salmin, //Salario minimo
        kws, // Quantidade de KW consumida por residencia
        valor_kw,// Valor de cada kw
        valor_rs, // Valor em reias a ser pago pela residencia
        valor_desc; // Valor com desconto

    //Recebendo valores
    printf ("Digite o valor do salario minimo:");
    scanf ("%d",&salmin);
    printf ("Digite a quatidade de KW:");
    scanf ("%d",&kws);


    //Calculando o valor de cada quilowatt
    valor_kw = salmin/5;
    printf ("O valor de cada kw eh: %d\n",valor_kw);

    //calculando o valor a ser pago por essa residencia
    valor_rs = kws * valor_kw;
    printf ("O valor que a residencia pagara eh; %d\n",valor_rs);


    //Calculando o valor a ser pago com desconto
    valor_desc = 0.75*valor_rs;
    printf ("O valor com desconto e: %d\n",valor_desc);
    return 0;
}
