#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 02/06/2026
Faça um programa que se comporte como vírus, ou seja, que duplique cada uma das palavras digitadas
pelo usuário
*/
int main()
{
    char frase[50];
    char palavra[15];
    int j = 0;
    gets(frase);

    // Lendo string caractere a caractere
    for(int i = 0; i <= strlen(frase); i++){  /// Incluir  o \0
        if (frase[i] != ' ' && frase[i] != '\0'){
            palavra[j] = frase[i];
            j++;
        } else{
        palavra[j] = '\0';

        printf("%s",palavra);
        printf(" ");
        printf("%s",palavra);
        printf(" ");

        j = 0;
        }
    }
    return 0;
}
