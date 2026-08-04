#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faca um programa que receba uma frase, calcule e mostre a quantidadde de palavras da frase digitada
*/

int main()
{
    // Declaracao de variaveis
    char frase[100];
    int tam, palavra = 0;

    scanf(" %[^\n]",frase);
    tam = strlen(frase);

    // Contando palavras dentro da frase
    for (int i = 0; i < tam; i++){
        if (frase[i] == ' ') {   // compara o char com o espaço
        palavra++;
    }
    printf("%d\n",palavra);
    return 0;
}}
