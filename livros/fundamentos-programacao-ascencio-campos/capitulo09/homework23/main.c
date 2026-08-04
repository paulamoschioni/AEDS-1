#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 03/06/26

*/
int main()
{
    char nome[60];
    char palavra[20];
    int j = 0;
    gets(nome);
    int tam = strlen(nome);

    for (int i = 0; i <= tam; i++){
        if (nome[i] != ' ' &&  nome[i] != '\0'){        /// Se estiver em uma palavra
            palavra[j] = nome[i];
            j++;
            } else {
            palavra[j] = '\0';

            for(int p = 0; p < strlen(palavra); p++){
                if(palavra[p]== 'X'){
                    printf("A");
                }
                else if(palavra[p]== 'Y'){
                    printf("B");
                }

                else if(palavra[p]== 'Z'){
                printf("C");
                }
                else {
                    printf("%c",palavra[p] + 3);
                }
            }
            printf(" ");
            j = 0;
            }
        }
    return 0;
}
