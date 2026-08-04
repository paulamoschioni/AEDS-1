#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, smin, sbru, sliq, vlrho, imp;
    printf ("Digite o salario minimo:");
    scanf ("%d",&smin);
    printf ("Digite a qntde de hrs de trab:");
    scanf ("%d",&horas);

    //calc
    vlrho = smin/2;
    sbru = horas*vlrho;
    imp = sbru*0,03;
    sliq = sbru - imp;

    //tela
    printf ("o valor do salario liquido eh: %d\n", sliq);


    return 0;
}
