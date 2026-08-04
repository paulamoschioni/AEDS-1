#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 03/06/26
Faça um programa que receba o nome completo de uma pessoa e reescreva-o.
*/
int main()
{
    char nome[60];
    char palavra[20];
    char guarda[30] = {0};
    int j = 0, g = 0, cont = 0;
    gets(nome);
    int tam = strlen(nome);

    for (int i = 0; i <= tam; i++){
        if (nome[i] != ' ' &&  nome[i] != '\0'){        /// Se estiver em uma palavra
            palavra[j] = nome[i];
            j++;
            } else {
                cont++;
            palavra[j] = '\0';

            if (nome[i] == ' '){
                guarda[g] = palavra[0];
                guarda[g+1] = '.';
                guarda[g+2] = ' ';
                g+=3;

              }
              else if (nome[i] == '\0'){
                printf("%s, ",palavra);
              }

            j = 0;
            }

    } printf("%s",guarda);
    return 0;
}
