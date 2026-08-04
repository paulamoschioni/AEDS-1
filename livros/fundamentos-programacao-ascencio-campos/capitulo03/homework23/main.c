#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, // Numero real
        f, // Parte fracionaria
        a; // Arredondamento
    int  i; // Parte inteira


    //LEr numero
    printf ("Digite o numero real:");
    scanf ("%f",&num);

    //parte inteira
    i = (int)num;
    printf ("A parte inteira e: %d\n",i);

    //Parte fracionaria
    f = num - i;
    printf ("A parte fracionaria e: %f\n",f);

    //Parte arredondada
    a = round(num);
    printf ("A parte arredendada e: %f\n",a);


    return 0;
}
