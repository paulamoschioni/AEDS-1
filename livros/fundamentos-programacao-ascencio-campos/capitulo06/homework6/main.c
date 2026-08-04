#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula moschioni
DATA: 19/05/2026
Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre o vetor resultante de uma ordenação decrescente
*/
int main()
{
    // Declaracao de variaveis
    int vetX[10], vetDEC[10];
    int temp;

    // Preenchendo vetor
    for (int i = 0; i < 10; i++){
        scanf("%d",&vetX[i]);
    }

    // Ordenando de forma decrescente
    for (int j = 0; j < 9; j++){   /// Passagem externa
        for (int z = 0; z < 9 - j; z++){  /// Comparacoes entre vizinhos
            if (vetX[z] < vetX[z+1])
            {   temp = vetX[z];
                vetX[z] = vetX[z + 1];
                vetX[z + 1] = temp;
        }

    }}

    for (int w = 0; w < 10; w++){
         vetDEC[w] = vetX[w];
         printf("%d ",vetDEC[w]);
    }
    return 0;
}
