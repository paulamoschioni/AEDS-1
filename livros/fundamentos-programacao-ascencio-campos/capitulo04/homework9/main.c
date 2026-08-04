#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Declarando variaveis
   int t, // Horario
       d, // Data
       hora, ano, min, mes, dia;

   // Recebendo valores
   printf ("Digite o dia de hoje: ");
   scanf ("%d",&dia);
   printf ("Digite o mes atual: ");
   scanf ("%d",&mes);
   printf ("Digite o ano atual: ");
   scanf ("%d",&ano);


   // Condicional
   if (mes == 1 || mes == 01)
   {
       printf ("Janeiro\n");
   }

   else if (mes == 2  || mes == 02)
   {
       printf ("Fevereiro\n");
   }

    else if (mes == 3 || mes == 03)
   {
       printf ("Marco\n");
   }

    else if (mes == 4 || mes == 04)
   {
       printf ("Abril\n");
   }

    else if (mes == 5 || mes == 05)
   {
       printf ("Maio\n");
   }
    else if (mes = 6 || mes = 06)
   {
       printf ("Junho\n");
   }
    else if (mes == 7 || mes == 07)
   {
       printf ("Julho\n");
   }

    else if (mes == 8 || mes == 08)
   {
       printf ("Agosto\n");
   }
c
    else if (mes == 9 || mes == 09)
   {
       printf ("Setembro\n");
   }

    else if (mes == 10)
   {
       printf ("Outubro\n");
   }
    else if (mes == 11)
       printf ("Novembro\n");
   }

    else if (mes == 12)
   {
       printf ("Dezembro\n");
   }



    return 0;
}
