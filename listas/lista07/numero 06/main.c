#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma dos elementos
abaixo da diagonal principal. mostre na tela os elementos da diagonal principal também.
*/
int main()
{
   // Declaracao de variaveis
   int M[4][4];
   int acuAbaixo = 0;

   // Preenchendo a matriz
   for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        scanf("%d",&M[i][j]);
    }
   }
   // Soma dos elementos abaixo da diagonal principal
  for (int k = 1; k < 4; k++){
    for (int l = 0; l < k; l++){
        acuAbaixo += M[k][l];
    }
}
   printf("%d ",acuAbaixo);

   // Mostrar na tela diagonal principal
   for (int g = 0; g < 4; g++){
        printf("%d ",M[g][g]);
   }
    return 0;
}
