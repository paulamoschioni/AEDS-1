#include <stdio.h>
#include <stdlib.h>

int main()
{
 // Declarando variaveis
float salmin,  // Salario minimo
       qtdeK,   // Quantidade de kwts
       valorK,  // Valor de um kwt
       valorRS, // Valor em reais a ser pago
       valorD;  // Valor depois do desconto


 // Recebendo valores
 //printf ("Digite o valor do salario minimo:");
 scanf ("%f",&salmin);
 //printf ("Digite o valor da quantidade de Kilowatts utilizados na residencia:");
 scanf ("%f",&qtdeK);


 // Calculando o valor de cada kilowatt
 valorK = salmin/700;
 printf ("O valor do kW: %.2f\n", valorK);

 // Calculando o valor em reais a ser pago
 valorRS = qtdeK*valorK;
 printf ("O valor a pagar: %.2f\n", valorRS);

 // Calculando o novo valor a ser pago com um desconto de 10
 valorD = valorRS * 0.9;
 printf ("Valor com desconto: %.2f\n", valorD);

    return 0;
}
