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
    char guarda[30], copiag[30];
    int j = 0, g = 0, cont = 0;
    gets(nome);
    int tam = strlen(nome);

    for (int i = 0; i <= tam; i++){
        if (nome[i] != ' ' &&  nome[i] != '\0'){        /// Se estiver em uma palavra
            palavra[j] = nome[i];
            j++;
            } else {
            palavra[j] = '\0';

                guarda[g] = palavra[0];
                g++;

            j = 0;
            }
        }
            guarda[g] = '\0';
        strcpy(copiag,guarda);

    printf("Login: %s%s\n",guarda,strlwr(copiag));
    printf("Senha: ");
    for(int k = 0; k < strlen(guarda); k++){
        printf("%d",guarda[k]);
    }
    for(int l = 0; l < strlen(copiag); l++){
        printf("%d",copiag[l]);
    }

    return 0;
}
