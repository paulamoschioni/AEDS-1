#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sal, cq1, cq2,cpmf1, cpmf2, saldo;
    printf ("Digite o salario:");
    scanf ("%d",&sal);
    printf ("Digite o cheque 1:");
    scanf ("%d",&cq1);
    printf ("Digite o cheque 2");
    scanf ("%d",&cq2);

    //clc
    cpmf1 = (cq1*0.38)/100;
    cpmf2 = (cq2*0.38)/100;
    saldo = sal - cq1 - cq2 - cpmf1 - cpmf2;
    printf ("O saldo eh: %d\n", saldo);
    return 0;
}
