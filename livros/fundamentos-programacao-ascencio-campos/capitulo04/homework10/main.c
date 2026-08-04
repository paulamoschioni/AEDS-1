#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int dia1,
        dia2,
        ano1,
        mes1,
        mes2,
        ano2;


    // Recebendo valores da primeira data
    printf ("DIGITE A PRIMEIRA DATA: \n");
    printf ("Dia: ");
    scanf ("%d",&dia1);
    printf ("Mes: ");
    scanf ("%d",&mes1);
    printf ("Ano: ");
    scanf ("%d",&ano1);
    printf ("Dia: ");

    // Recebendo valores da segunda data
    printf ("DIGITE A SEGUNDA DATA:\n");
    printf ("Dia: ");
    scanf ("%d",&dia2);
    printf ("Mes: ");
    scanf ("%d",&mes2);
    printf ("Ano: ");
    scanf ("%d",&ano2);

    // Codicional para definir a maior data
   if ( ano2 > ano1)
   {
        printf ("A maior data e: %d/%d/%d",dia2,mes2,ano2);
   }


   else if (ano1 == ano2)
   {
       if (mes1 > mes2)
        printf ("A maior data e: %d/%d/%d",dia1,mes1,ano1);
       else
         printf ("A maior data e: %d/%d/%d",dia2,mes2,ano2);
   }


   else if (ano1 > ano2)
   {
         printf ("A maior data e: %d/%d/%d",dia1,mes1,ano1);
   }


    return 0;
}
