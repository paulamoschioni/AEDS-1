#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, quadrado, cubo, raizqua, raizcub;
    printf ("Digite um numero positivo e maior que 0:");
    scanf ("%d",&numero);

    // calculos
    raizqua = sqrtf(numero);
    quadrado = numero*numero;
    cubo = numero*numero*numero;
    raizcub = cbrt(numero);
    printf ("A raiz cubica eh: %d\n",raizcub);
    printf ("O cubo eh: %d\n",cubo);
    printf ("O quadrado eh: %d\n", quadrado);
    printf ("A raiz quadrada eh: %d\n", raizqua);


    return 0;
}
