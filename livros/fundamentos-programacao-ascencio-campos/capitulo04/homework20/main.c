#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int cod_prod, // Codigo
        pesoKG,
        pesoG,
        imp,    // Impostos cobrados sobre o produto
        pG,     // Preco por grama
        pT,      // preco total
        pT_I,
        cod_pais;  // COdigo do pais de origem


    // Recebendo valores
    printf ("Digite o codigo do produto, o peso e o codigo do pais de origem: ");
    scanf ("%d%d%d",&cod_prod,&pesoKG,&cod_pais);

    // Peso em gramas
    pesoG = pesoKG * 1000;
    printf ("O peso em gramas e : %d\n",pesoG);



    // Condicionais para impostos
    switch (cod_pais)
    {
        case 1:
        imp = 0;
        break;

        case 2:
        imp = 0.15;
        break;

        case 3:
        imp = 0.25;
        break;

    }
    printf ("Impostos: %d\n");



    // Codicional para preco por grama
    if (1 <= cod_prod && cod_prod <=4)
    {
        pG = 10;
    }
    else if (5 <= cod_prod && cod_prod <=7)
    {
        pG = 25;
    }
    else
    {
        pG = 35;
    }
    printf ("O preco por grama e: %d\n",pG);

    // valor total
    pT = (pesoG * pG);
    printf ("O preco total e : %d\n",pT);

    // valor com imp
    pT_I = (pT * imp) + imp;
    printf ("O preco total com impostos e: %d\n");


    return 0;
}
