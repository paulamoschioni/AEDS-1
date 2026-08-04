#include <stdio.h>
#include <stdlib.h>
long int contaCasas(long int n)
{
    if (n / 10 == 0) return 1;
    else
    {
     return 1 + contaCasas(n/10);
    }
}
int main()
{
   long int x;
   scanf("%ld",&x);
   printf("%ld",contaCasas(x));
    return 0;
}
