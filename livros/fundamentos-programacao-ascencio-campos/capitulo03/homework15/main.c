#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pfab, perclu, pfinal, perci, vlri, vlrd;
    printf("Escreva o preco de fabrica:");
    scanf ("%d",&pfab);
    printf("Escreva o percentual de lucro do distribuidor:");
    scanf ("%d",&perclu);
    printf("Escreva o percentual de impostos:");
    scanf ("%d",&perci);

    //definicoes
    vlrd = (perclu*pfab)/100;
    vlri = (pfab*perci)/100;
    pfinal = pfab + vlri + vlrd;

    //tela

    printf ("O valor que corresponde ao lucro do distribuidor eh: %d\n", vlrd);
    printf ("O valor que corresponde aos impostos eh: %d\n", vlri);
    printf ("O valor que corresponde ao preco final eh: %d\n", pfinal);
    return 0;
}
