#include <stdio.h>
#include <stdlib.h>
int somaN (int n) {
    if (n == 1) return 1;

    else
    {
     return (somaN(n - 1) + n);
    }
    }
int main()
{
    int x, resultado;

    scanf("%d",&x);

    resultado = somaN(x);
    printf("%d\n",resultado);
    return 0;
}
