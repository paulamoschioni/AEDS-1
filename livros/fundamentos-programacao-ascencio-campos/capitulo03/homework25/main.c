#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    float custo, // custo de um espetaculo teatral
        convite, //preco do convite
        qtde; // quantidade a ser vendido

    //Recebendo as variaveis
    printf ("Digite o custo:");
    scanf ("%f",&custo);
    printf ("Digite o preco:");
    scanf ("%f",&convite);

    //calculando
    qtde = custo / convite;
    printf ("A quantidade a ser vendida e: %.1f\n:", qtde);
    return 0;
}
