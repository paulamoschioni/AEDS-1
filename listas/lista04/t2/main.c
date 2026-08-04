#include <stdio.h>
#include <stdlib.h>
void exibRecursivo (int n)
{
    if (n == 0) {
    printf("%d\n",n);
    }
    else {
    printf("%d\n",n);
    exibRecursivo(n - 1);

    }

}
int main()
{
    int x;
    scanf("%d",&x);
    exibRecursivo(x);
    return 0;
}
