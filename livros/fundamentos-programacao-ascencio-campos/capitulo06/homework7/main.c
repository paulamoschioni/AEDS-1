#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula Moschioni
DATA: 19/05/2026
Programa que, no momento de preencher um vetor com oito números inteiros, já os armazene
de forma crescente*/

int main()
{
    // Declaracao de variaveis
    int vet[8];
    int num, temp;

    // Preenchendo vetor ja de forma crescente
    for (int i = 0; i < 8; i++){
        for (int j = i; j > 0 && vet[j] > vet[j-1]; j--){
        temp = vet[j];
        vet[j] = vet[j-1];
        vet[j-1] = temp;
    }
    }
    for (int p = 0; p < 8; p++){
        printf("%d ",vet[p]);
    }



    /* for (int i = 0; i < 8; i++){

        if (i == 0){
            scanf("%d ",&vet[7]); /// Se for a primeira rodada, a ultima posicao recebe o primeiro e vai para ultimo lugar
        } else {
            scanf("%d ",&vet[7-i]);
        if (vet[7-i] > vet[8-i]) {  /// Se a posicao 7-i for maior que a posicao seguinte, troca
            temp = vet[7-i];
            vet[7-i] = vet[8-i];
            vet[8-i] = temp;

        }
        }*/
    return 0;
}
