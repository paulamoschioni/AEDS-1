#include <stdio.h>
#include <stdlib.h>
/*AUTORA: Paula Moschioni
DATA: 22/05/2025
Faça um programa que preencha dois vetores, A e B, com vinte caracteres cada. A seguir, troque o 1
elemento de A com o 20 de B, o 2 de A com o 19 de B, e assim por diante, até trocar o 20
 de A com o 1 de B. Mostre os vetores antes e depois da troca.*/

int main()
{
    // Declaracao de variaveis
    char vetA[20], vetB[20];
    char newA[20], newB[20];
    char temp, Temp;

    // Preenchendo vetores
    for (int i = 0; i < 20; i++){
        scanf(" %c",&vetA[i]);
    }
    for (int j = 0; j < 20; j++){
    scanf(" %c",&vetB[j]);
    }

    // Trocando variaveis
    printf("Novo vetor A: \n");
    for (int p = 0; p < 20; p++){
        temp = vetA[19-p];
        vetA[19-p] = newA[p];
        newA[p] = temp;
        printf("%c ",newA[p]);
    } printf("\n");

    printf("Novo vetor B: \n");
    for (int q = 0; q < 20; q++){
        Temp = vetB[19-q];
        vetB[19-q] = newB[q];
        newB[q] = Temp;
        printf("%c ",newB[q]);
    } printf("\n");



    return 0;
}
