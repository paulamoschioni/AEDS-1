#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hdeg, husu, qtddeg;
   printf ("Digite a altura do degrau: ");
   scanf ("%d",&hdeg);
   printf ("Digite a altura do usuario ");
   scanf ("%d",&husu);

   //clc
   qtddeg = husu/hdeg;
   printf ("Escreva a quantidade de degraus: &d\n",qtddeg);

    return 0;
}
