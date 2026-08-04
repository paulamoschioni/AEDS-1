#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n, i;
    double S = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        S = S + 1.0/i;
    }

    printf("%.2lf\n", S);

    return 0;
}
