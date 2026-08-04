#include <stdio.h>
#include <stdlib.h>
int fatR (int n)
{
    if (n == 1 || n == 0) return 1;
    else return (n * fatR(n - 1));
}
int main()
{
 int x;
 scanf("%d",&x);
 printf("%d\n",fatR(5));
    return 0;
}
