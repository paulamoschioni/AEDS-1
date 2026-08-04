#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variavies
    int   codE,       // Codigo do estado de origem
          pesoT,
          pesoKG,
          preco_carga,  // preco da carga do caminhao
          preco_KG,     // Preco por kg
          imp,
          valor_total,
          cod_carga;   //Codigo da carga



    // Recebedo valores
    printf ("Digigte o valor do codigo de estado, do peso e do codigo da carga: ");
    scanf ("%d%d%d",&codE,&pesoT,&cod_carga);


    // Peso T -> Kg
    pesoKG = 1000 * pesoT;
    printf ("Peso em Kg: %d\n",preco_KG);


    // Preco da carga do caminhao
    if (10 <= cod_carga && cod_carga <= 20)
    {
     preco_KG = 100;
    }
    else if (21 <= cod_carga && cod_carga <= 30)
    {
     preco_KG = 250;
    }
    else if (31 <= cod_carga && cod_carga <= 40)
    {
     preco_KG = 340;
    }
    preco_carga = preco_KG * pesoKG;
    printf ("Preco da carga total: %d\n",preco_carga);


    // valor do imposto
    switch (codE)
    {
    case 1:
    imp = 0.35;
    break;

    case 2:
    imp = 0.25;
    break;

    case 3:
    imp = 0.15;
    break;

    case 4:
    imp = 0.05;
    break;

    case 5:
    imp = 0;
    break;

    }
    printf ("Impostos: %d\n",imp);

    //valor total
    valor_total = (preco_carga * imp) + preco_carga;



    return 0;
}
