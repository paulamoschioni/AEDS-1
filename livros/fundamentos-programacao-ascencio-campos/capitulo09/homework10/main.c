#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 01/06/26
Faça um programa que receba uma frase e troque a palavra AUNO por ETUDANTE e a palavra
EOA por UNIVERIDADE.
*/
int main()
{
    char frase[50], palavra[15];
    int j = 0;
    gets(frase);

    for(int i = 0; i <= strlen(frase); i++){ // Pecorrendo caractere por caractere INCLUIDO \0

        if(frase[i] != ' ' && frase[i] != '\0'){    // Se for um caractere sem ser espaco ou \0, copia para o vetor palavra
            palavra[j] = frase[i]; /// vai passando letras
            j++;
        }   else if (frase[i] == ' ' || frase[i] == '\0')   {    // Se for o fim de uma palavra ou da string
            palavra[j] = '\0';/// finaliza palavra

            if(strcmp(palavra,"ALUNO")== 0){
            printf("ESTUDANTE");
            }
            else if(strcmp(palavra,"ESCOLA")== 0){
            printf("UNIVERSIDADE");
            }
            else {
                printf("%s",palavra);
            }
            printf(" ");
            j = 0;
        }
    }

    return 0;
}
