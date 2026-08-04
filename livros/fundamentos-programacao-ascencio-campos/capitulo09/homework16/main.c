#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 02/06/2026
Faça um programa que receba uma palavra e verifique se ela constitui um palíndromo, ou seja, se a
palavra escrita do fim para o começo fica igual à palavra escrita do começo para o fim
*/
int main()
{
    char palavra[15];
    gets(palavra);
    int tam = strlen(palavra);


    // Percorre frase caractere por caractere
     for(int i = tam - 1; i >= 0; i--){  /// Incluir  o \0
            printf("%c",palavra[i]);
            }
    return 0;
}
