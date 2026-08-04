#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula Moschioni
DATA: 07/06/26
Escreva um programa em c para encontrar o maior elemento em um vetor de inteiros usando a alocação de
 memória dinâmica. peça para o usuário inserir inicialmente o tamanho do vetor a ser criado, e após,
 peça para ele inserir um a um todos os valores do vetor.
*/
int main()
{
    // Declarando variaveis
    int N, maior;

    scanf("%d",&N);

    int* vetor = malloc (N*sizeof(int));

    // Preenchendo vetor
    for (int i = 0; i < N; i++)
    {
        scanf("%d",(vetor + i));

        if (i == 0){
            maior = *(vetor + i);
        }
        else
        {
           if (*(vetor+i) > maior)
           {
               maior = *(vetor + i);
           }
        }
    }
    printf("%d\n",maior);
    free(vetor);
    return 0;
}
