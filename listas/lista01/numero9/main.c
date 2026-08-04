#include <stdio.h>
#include <stdlib.h>



int main()
{

    float compra, venda;
    float lucro, porcentagem;

    int lucro10 = 0;      // lucro < 10%
    int lucro20 = 0;      // 10% <= lucro <= 20%
    int lucroMaior20 = 0; // lucro > 20%

    float totalCompra = 0;
    float totalVenda = 0;

    //printf("Digite o preco de compra (0 para parar): ");
    scanf("%f", &compra);

    while(compra != 0) {

        printf("Digite o preco de venda: ");
        scanf("%f", &venda);

        lucro = venda - compra;

        // Calcula porcentagem de lucro
        porcentagem = (lucro / compra) * 100;

        // Classificação do lucro
        if(porcentagem < 10)
            lucro10++;

        else if(porcentagem <= 20)
            lucro20++;

        else
            lucroMaior20++;

        // Soma totais
        totalCompra += compra;
        totalVenda += venda;

        printf("Digite o preco de compra (0 para parar): ");
        scanf("%f", &compra);
    }

    printf("\nLucro < 10%%: %d\n", lucro10);
    printf("10%% <= Lucro <= 20%%: %d\n", lucro20);
    printf("Lucro > 20%%: %d\n", lucroMaior20);

    printf("Total de compra: %.2f\n", totalCompra);
    printf("Total de venda: %.2f\n", totalVenda);
    printf("Lucro total: %.2f\n", totalVenda - totalCompra);

    return 0;
}
