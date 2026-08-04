#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 03/06/26
Faça um programa que receba uma frase e conte quantos verbos existem nela, considerando que os
verbos terminam em R
*/
int main()
{
    char nome[60];
    char palavra[20];
    int j = 0,contVerbo = 0;
    gets(nome);
    int tam = strlen(nome);

    for (int i = 0; i <= tam; i++){
        if (nome[i] != ' ' &&  nome[i] != '\0'){        /// Se estiver em uma palavra
            palavra[j] = nome[i];
            j++;
            } else {
            palavra[j] = '\0';
int tam = strlen(palavra);
            for(int p = 0; p < tam; p++){
               if(p == tam - 1){
                if(palavra[p] == 'R'){
                    contVerbo++;
                }
               }
            }

            j = 0;
            }
        }printf("%d",contVerbo);
    return 0;
}
