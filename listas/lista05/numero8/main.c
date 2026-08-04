#include <stdio.h>
#include <stdlib.h>
int divisores (int n, int *ptrMAX, int *ptrMIN)
{
    // Declarando variaveis
    int ehPrimo, i;

    // Verificacao se e primo
    ehPrimo = 1;   /// Assume que todo numero e primo ate q se prove o contrario
    if (n <= 1) ehPrimo = 0;
    else if (n >= 2)
    {
        *ptrMAX = 0;  /// Menor valor possivel, assim todos serao maiores
        *ptrMIN = n;  ///  Maior valor possivel, assim todos serao menores

       for (i = 2; i < n; i++)
       {
           if (n % i == 0) {
           ehPrimo = 0;

           if (i > *ptrMAX) *ptrMAX = i;
           if (i < *ptrMIN) *ptrMIN = i;
           }
       }
    if (ehPrimo == 1)  return 1;
    else
    {
        printf("MAX: %d\nMIN: %d\n",*ptrMAX,*ptrMIN);
        return 0;
    }
    }
}

int main()
{
    int n,min, max, *ptrMAX = &max, *ptrMIN = &min, resultado;

    scanf("%d",&n);
    resultado = divisores(n,ptrMAX, ptrMIN);
    printf("%d\n",resultado);

    return 0;
}
