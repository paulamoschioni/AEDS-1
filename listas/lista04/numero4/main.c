#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int calculaPotencia (long int a, long int b) {
    if (b == 0) return 1;
    else
    return calculaPotencia(a, b-1) * a;


}
int main()
{
    int x,y;
    scanf("%ld%ld",&x,&y);
    printf("%ld\n",calculaPotencia(x,y));
    return 0;
}
