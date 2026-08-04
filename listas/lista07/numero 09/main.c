#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
escreva um programa em c para calcular a soma de todos os elementos em um vetor
de inteiros usando ponteiros. a primeira entrada deve ser o tamanho do vetor a ser inserido
*/
int main()
{
    // Declarando variaveis
    int N;  /// Tamanho do vetor

    scanf("%d",&N);
    int *V = malloc (N* sizeof(int));
    int acumu = 0;

    // Preenchendo vetor
    for (int i = 0; i < N; i++){
        scanf("%d",&V[i]);
        acumu += V[i];
    }

    printf("%d\n",acumu);
    free(V);
    return 0;
}
