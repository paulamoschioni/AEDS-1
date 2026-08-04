
#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
escrever um procedimento que preenche uma matriz m(10,10). faça outros procedimentos que recebam uma matriz preenchida,
realize as trocas indicadas a seguir (um procedimento para cada uma delas). no final, exiba a matriz resultante das
trocas (linha por linha): (a) a 2ª linha com a 8ª linha (b) a 4ª coluna com a 10ª coluna (c) a diagonal principal
com a diagonal secundária (d) a 5ª linha com a 10ª coluna.
*/
void preencheM (int M[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%d", &M[i][j]);
        }
    }
}


void realizaA(int M[10][10]){
    int temp;
    for (int j = 0; j < 10; j++) {
        temp = M[1][j];
        M[1][j] = M[7][j];
        M[7][j] = temp;
    }
}

void realizaB(int M[10][10]){
    int temp;
    for (int i = 0; i < 10; i++) {
        temp = M[i][3];
        M[i][3] = M[i][9];
        M[i][9] = temp;
    }
}


void realizaC (int M[10][10]){
    int temp;

    for (int i = 0; i < 10; i++) {
        temp = M[i][i];
        M[i][i] = M[i][9 - i]; // 9 - i mapeia a diagonal secundária
        M[i][9 - i] = temp;
    }
}


void realizaD(int M[10][10]){
    int temp;
    for (int i = 0; i < 10; i++) {
        temp = M[4][i];
        M[4][i] = M[i][9];
        M[i][9] = temp;
    }
}

void imprimeM(int M[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int M[10][10];

    preencheM(M);

    realizaA(M);
    realizaB(M);
    realizaC(M);
    realizaD(M);


    imprimeM(M);

    return 0;
}
