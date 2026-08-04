#include <stdio.h>
#include <stdlib.h>

int main()
{
   int base, altura, area;
   printf ("Digite o valor da base:");
   scanf ("%d",&base);
   printf ("Digite o valor da altura:");
   scanf ("%d",&altura);

   //calculo area

   area = (base*altura)/2;
   printf ("A area desse triangulo eh: %d\n", area);
    return 0;
}
