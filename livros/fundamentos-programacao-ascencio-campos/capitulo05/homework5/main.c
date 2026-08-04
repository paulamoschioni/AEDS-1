#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declarando variaveis

    int   num_termos,       // Numero de termos
          X,       // Numero inteiro positivo
          i = 0,   // Contador, q e igual a N
          den = 1, // Denominador
          numerador, // Numerador
          exp = i + 1,     // Expoente
          fat = 1,     // Fatorial
          S = 0;       // Expressao S


    // Recebendo valores
    printf ("Digite o numero de termos: ");
    scanf ("%d",&num_termos);
    printf ("X: ");
    scanf ("%d",&X);

    // Calculando numerador
    if (exp % 2 == 0)
    {
    numerador = -numerador;
    }

    else
    {
    numerador = numerador;
    }


    for (i = 1; exp <= i + 1; i++)
    {
      numerador = pow(X,exp);
      printf ("Numerador %d numero %d\n",numerador,i);
    }



    // Denominador





    return 0;
}
