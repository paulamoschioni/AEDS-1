#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
AUTORA: Paula Moschioni
DATA: 07/06/26
Escreva um programa em C para imprimir todas as permutações de um vetor de char usando ponteiro
*/

void trocar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutar(char *vetor, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s ", vetor);
        return;
    }

    for (int i = inicio; i <= fim; i++) {
        trocar(vetor + inicio, vetor + i);

        permutar(vetor, inicio + 1, fim);


        trocar(vetor + inicio, vetor + i);
    }
}

int main() {
    int tamanho = 4;


    char *vetor = malloc((tamanho + 1) * sizeof(char));

    for(int i = 0; i < tamanho; i++){

        scanf(" %c", vetor + i);
    }


    vetor[tamanho] = '\0';

    permutar(vetor, 0, strlen(vetor) - 1);

    free(vetor);

    return 0;
}
