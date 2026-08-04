#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    float pc,       // Preco de compra
          venda,    // Preco de venda
          L,        // Lucro
          i,
          porc_L,   // Porcentagem lucro
          cont_10 = 0,  // L <= 10
          cont_20 = 0,  // 10 <= L <= 20
          cont_30 = 0, // 20 <= L
          acu_compras = 0,
          acu_vendas = 0,
          acu_lucro = 0;


    // Criando laco
    while (pc > 0)
    {   /*recebendo pc e venda*/
        printf("Preco de compras: ");
        scanf("%f",&pc);
        printf("Preco de venda: ");
        scanf("%f",&venda);

        /*calcular L*/
        L = venda - pc;

        /*calcular porcentagem lucro*/
        porc_L = (L *100)/venda;

        /*condicional para faixa de L*/
        if (porc_L < 10)
        {
            cont_10++;
        }
        else if (10 <= L <= 20)
        {
            cont_20++;
        }
        else if (20 <= L)

        {
            cont_30++;
        }

        /*codicional para acumular V,C,L*/
        acu_compras += pc;
        acu_lucro += L;
        acu_vendas += venda;

    }


        printf("%.2f\n",cont_10);
        printf("%.2f\n",cont_20);
        printf("%.2f\n",cont_30);
        printf("%.2f\n",acu_compras);
        printf("%.2f\n",acu_vendas);
        printf("%.2f\n",acu_lucro);


    return 0;
}
