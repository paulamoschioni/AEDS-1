#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
Escreva um programa em C para ordenar um vetor de inteiros usando ponteiro. A primeira entrada deve ser o tamanho do vetor a ser inserido
*/
int main()
{
   // Declaracao de variaveis
   int N, temp;

   scanf("%d",&N);

   int *V = malloc (N*sizeof(int));

   // Preenchendo
   for (int i = 0; i < N; i++){
    scanf("%d",V + i);
   }

   // Ordenando
   for (int i = 0; i < N - 1; i++){              /// For externo realiza a quantidade de passagens, que é N - 1
        for (int j = 0; j < (N - 1 - i); j++){     /// For interno serve para realizar as comparacoes entre vizinhos, que será N - 1 - i

    if (V[j] > V[j+1]) {
       temp = V[j];
       V[j] = V[j+1];
       V[j+1] = temp;
    } }
   }

    for (int k = 0; k < N; k++){
    printf("%d ",*(V + k));
   }



free(V);
    return 0;
}
