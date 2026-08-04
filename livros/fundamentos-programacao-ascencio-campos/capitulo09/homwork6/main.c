#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faça um programa que receba duas frases e gere uma terceira que represente a combinação das palavras das duas frases recebidas.
*/
int main()
{
    char frase1[100], frase2[100], frase3[200];

    scanf(" %[^\n]",frase1);
    scanf(" %[^\n]",frase2);

    // Concatenar
    strcat(frase3,frase1);
    strcat(frase3,' ');
    strcat(frase3,frase2);

    printf("%s",frase3);
    return 0;
}
