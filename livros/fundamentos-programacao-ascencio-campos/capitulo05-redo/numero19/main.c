#include <stdio.h>
#include <stdlib.h>

int main()
{   // Declaracao de variaveis
    int p_compra, p_venda, lucro;
    int soma_lucros = 0;
    int cont_L1000 = 0, cont_L200 = 0;
    char letra;

    // Lendo valores iniciais
    scanf("%d",&p_compra);
    scanf("%d",&p_venda);
    scanf(" %c",&letra);

    // Criando grande laco
    while (letra != 'F') {
    /// Calculando lucro
    lucro = p_venda - p_compra;
    printf ("Lucro dessa acao: %d\n",lucro);

    /// Quantidade de acoes com lucro >= 1000
    if (lucro > 1000) cont_L1000 ++;
    else if (lucro < 200) cont_L200++;

    /// Acumulando lucros da empresa
    soma_lucros += lucro;

    /// Acionando modulo para ler informacoes
    scanf("%d",&p_compra);
    scanf("%d",&p_venda);
    scanf(" %c",&letra);
    }
    // Printando resultados
    printf("Quantidade de lucros superiores a R$1000,00: %d\n",cont_L1000);
    printf("Quantidade de lucros inferiores a R$200,00: %d\n",cont_L200);
    printf("Lucro total da empresa: %d\n",soma_lucros);

    return 0;
}
