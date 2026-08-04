#include <stdio.h>
#include <stdlib.h>
// Criando modulo recursivo para calculo de fatorial
int calculaFat(int N)
{
    if (N == 0)     /// Condicao base
        return 1;
    else
        return (calculaFat(N - 1) * N); /// Preparando para empilhar --
}


int main()
{
    int N;
    scanf("%d",&N);

    calculaFat(N);
    printf ("%d\n",calculaFat(N));

    return 0;
}
