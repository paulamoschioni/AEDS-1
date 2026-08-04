#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int n1, n2, n3, n4;
    int *p1 = &n1, *p2 = &n2, *p3 = &n3, *p4 = &n4;
    float media;

    // Lendo notas
    scanf("%d%d%d%d",p1,p2,p3,p4);

    media = (n1+n2+n3+n4) / 4.0;
    printf("Media %.2f\n",media);
    return 0;
}
