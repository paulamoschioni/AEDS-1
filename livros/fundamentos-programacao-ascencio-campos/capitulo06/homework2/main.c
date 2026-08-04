#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    float vUnit[10];
    int qVendas[10], maior, Mvendido, indice;
    float vtOBJ, receita = 0.0, comissao;
    FILE *relatorio;
    FILE *informacoes;

    // Abre arquivo
    informacoes= fopen("informacoes.txt","w");
    relatorio = fopen("relatorio.txt","w");
    if(informacoes == NULL || relatorio == NULL){
        printf("ERRO na abertura dos arquivos!");
    }

    // Preenchendo vetores
    for (int i = 0; i < 10; i++){       /// vetor de valor=
        scanf("%f",&vUnit[i]);
    }

    for (int j = 0; j < 10; j++){
        scanf("%d",&qVendas[j]);
        /*Para descobrir qual o objeto mais vendido*/
        if (j == 0){
            maior = qVendas[j];
        } else {
        if(maior < qVendas[j])  {
        indice = j;
        maior = qVendas[j];
        }
    }

    // Criando arquivo informacoes
    for (int b = 0; b < 10; b++){       /// vetor de valor
        fprintf(informacoes,"Produto %d:\nValor: R$%.2f\nQuantidade vendida: %d\n",b,vUnit[b],qVendas[b]);
    }

    // Criando relatorio
    for (int p = 0; p < 10; p++){
        vtOBJ = (float) qVendas[p] * vUnit[p];
        receita += vtOBJ;

        fprintf (relatorio,"Vendas totais do objeto %d: R$%.2f\n",p,vtOBJ);
    }
    comissao = 545 + 0.05*(receita);
    fprintf(relatorio,"Comissao geral: R$%.2f\nValor do objeto mais vendido: R$%.2f\n",comissao,vUnit[maior]);


    fclose(relatorio);
    fclose(informacoes);
    return 0;
}
