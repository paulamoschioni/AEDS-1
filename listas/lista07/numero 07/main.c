#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
faça um procedimento que preencha 2 matrizes, a 4 x 6 e b 4 x 6. faça uma função para
cada uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna
as matrizes indicadas : (a) uma matriz s que seja a soma de a e b. (b) uma matriz d que
seja a diferença de a e b. (a - b). faça um programa que faça as devidas declarações e
acione os módulos para exemplificar o seu uso. escreva as matrizes resultantes do
acionamento de cada uma das funções
*/
void preecheAB (int A[4][6], int B[4][6]){
    //Preenche A
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d",&A[i][j]);
        }
    }
     for (int c = 0; c < 4; c++) {
        for (int d = 0; d < 6; d++) {
            scanf("%d",&B[c][d]);
        }
}
}
void retornaAB  (int A[4][6], int B[4][6], int S [4][6], int D [4][6]){
    for (int i = 0; i < 4; i++) {       /// Retorna S
        for (int j = 0; j < 6; j++) {
           S[i][j] = A[i][j]+B[i][j];
           printf("%d ",S[i][j]);
        }
    }
    printf("\n");

    for (int c = 0; c < 4; c++) {
        for (int d = 0; d < 6; d++) {
           S[c][d] = A[c][d]-B[c][d];
           printf("%d ",S[c][d]);
        }
    }
}
int main()
{
    // Declaracao de variaveis
    int A[4][6], B[4][6], S[4][6], D[4][6];

    //Aciona procedimentos
    preecheAB(A,B);
    retornaAB(A,B,S,D);

    return 0;
}
