#include <stdio.h>
#include <stdlib.h>
int calculaFat (int N)       // Essa funcao recursiva calcula o denominador fatorial
{
        if (N == 1) return 1;
        else return (N * calculaFat(N - 1));
}

double calculaS (int n)
{
        if (n == 1) return 1;
        else return calculaS(n - 1) + (1.0 / calculaFat(n));




}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%.2lf\n",calculaS(x));
    return 0;
}
