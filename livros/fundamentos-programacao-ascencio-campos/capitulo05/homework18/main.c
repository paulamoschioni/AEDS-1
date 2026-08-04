#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declarando variaveis
    int num, // Numero a ser lido
    quadrado, cubo, raiz;

    // recebendo valores
    printf("Numero: ");
    scanf ("%d",&num);

    // criando grande laco
    while (num > 0)
    {
      quadrado = pow (num,2);
      cubo =  pow (num,3);
      raiz = sqrt (num);
      printf("Raiz: %d\n",raiz);
      printf("Quadrado: %d\n",quadrado);
      printf("Cubo: %d\n",cubo);

      printf("Numero: ");
      scanf ("%d",&num);


    }
    return 0;
}
