#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesosac, gato1, gato2, total;
    printf ("Digite o peso do saco:");
    scanf ("%d,&pesosac");
    printf ("Digite a racao do gato 1:");
    scanf ("%d",&gato1);
    printf ("Digite a racao do gato 2:");
    scanf ("%d",&gato2);

    //clc
    gato1 = gato1/1000;
    gato2 = gato2/1000;
    total = pesosac -5*(gato1 + gato2);
    printf ("O totl eh: %d\n",total);

    return 0;
}
