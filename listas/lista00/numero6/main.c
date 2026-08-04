#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Declarando variaveis
   int R, //Razao
       n1, //Primeiro termo
       n10; //Decimo termo

   //Recebendo os numeros
   //printf ("Digite a razao da PA: ");
   scanf ("%d",&R);
   //printf ("Digite o primeiro termo da PA: ");
   scanf ("%d",&n1);

   //Calculando o decimo termo
   n10 = (9*R) + n1;
   printf ("%d\n", n10);
    return 0;
}
