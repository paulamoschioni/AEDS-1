#include <stdio.h>

void preencherVetor(int V[10])
{
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &V[i]);
    }
}

void gerarVetor(int X[10], int Y[10], int V[20])
{
    int j = 0;

    for(int i = 0; i < 10; i++)
    {
        V[j] = X[i];
        j++;

        V[j] = Y[i];
        j++;
    }
}

void exibirVetor(int V[20])
{
    for(int i = 0; i < 20; i++)
    {
        printf("%d ", V[i]);
    }
}

int main()
{
    int X[10], Y[10], V[20];

    preencherVetor(X);
    preencherVetor(Y);

    gerarVetor(X, Y, V);

    exibirVetor(V);

    return 0;
}
