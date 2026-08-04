#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoat, anona, idadeat, idade2050;
    printf("Digite o ano atual:");
    scanf ("%d",&anoat);
    printf ("Digite seu ano de nascimento:");
    scanf ("%d",&anona);

    //2050
    idade2050 = 2050 - anona;
    idadeat = anoat - anona;
    printf ("Sua idade atual eh: %d\n",idadeat);
    printf ("Sua idade no ano de 2050 sera: %d\n",idade2050);
    return 0;
}
