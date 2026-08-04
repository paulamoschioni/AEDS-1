#include <stdio.h>
#include <stdlib.h>

int main ()
{
   // Declarando variaveis
   int anoat, ano;
   float porc, sal;
   // Recebendo valores
   printf ("Digite o ano atual: ");
   scanf ("%d",&anoat);
   printf ("Digite o ano inicial: ");
   scanf ("%d",&ano);
   printf ("Digite a porcentagem: ");
   scanf ("%f",&porc);



   // Teste
   printf("Ano\t\t\tSalario\t\t\tAumento\t\t\t\n");
   printf ("\n2005\t\t\t R$1000\t\t\t  0",ano);          //2005

   ano++;
   printf ("\n%4d\t\t\t R$1015\t\t\t  %.2f%%\n",ano,porc);   //2006


   while (ano <= anoat)
   {
       ano++;
       porc = 2*porc;
       sal += porc * sal/100;
       printf ("\n%4d\t\t\t R$%.2f\t\t\t  %.2f%%\n",ano,sal,porc);
   }










    return 0;}
