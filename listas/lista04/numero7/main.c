#include <stdio.h>
#include <stdlib.h>
int somaDigitos (int n)
{
    if (n / 10 == 0) return n;
    else return somaDigitos(n/10) + (n % 10);

}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",somaDigitos(x));
    return 0;
}
