#include <stdio.h>
#include <stdlib.h>

// Sub-rotina para somar os entre
int somarInteiros(int a, int b,int c)
{
   // Declarar variaveis
   int somaA, B, i;

   B = b + 1;

   // Criando laco
   for (i = B; i < c; i++)
   {
     if (i % a == 0)
     {
         somaA += i;
     }

   }
    return somaA;
}


int main ()
{
    // Declarando variaveis
    int a ,b , c, resultado;

    // Recebendo a
    printf("A: ");
    scanf("%d",&a);

    // Criando grande laco
    while (a > 1)
    {/* Recebendo valores*/
     printf("B: ");
     scanf("%d",&b);
     printf("C: ");
     scanf("%d",&c);

     resultado = somarInteiros(a, b, c);
     printf("Soma: %d\n",resultado);

    printf("A: ");
    scanf("%d",&a);
    }
    return 0;
}
