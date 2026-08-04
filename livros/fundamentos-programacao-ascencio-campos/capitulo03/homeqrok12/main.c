#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2,r1, r2;
    printf ("Digite o primeiro numero:");
    scanf ("%d",&num1);
    printf ("Digite o primeiro numero:");
    scanf ("%d",&num2);

    //clc

    r1 = pow(num1,num2);
    r2 = pow (num2, num1);
    printf ("O resultado do primeiro elevado ao segundo eh: %d\n",r1);
    printf ("O resultado do segundo numero elevado ao segundo eh : %d\n",r2);

        return 0;
}
