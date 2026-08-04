#include <stdio.h>
#include <stdlib.h>

int fibonacciRecursivo (int n) {
    if (n == 0 || n == 1) return n;
    else  return (fibonacciRecursivo(n - 2) + fibonacciRecursivo(n - 1));
}

int main()
{
    int x, resultado;

    scanf("%d",&x);

    resultado = fibonacciRecursivo(x);
    printf("%d\n",resultado);
    return 0;
}
