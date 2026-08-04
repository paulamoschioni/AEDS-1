#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faca um programa que receba uma frase e coloque as palavras da frase em ordem alfabetica.
*/
int main()
{
    char frase1[100], frase2[100];
    int tam;

    scanf(" %[^\n]",frase1);
    tam = strlen(frase1);

    for (int i = 0; i < tam; i++){
        if (frase1[i] == ' '){ /// encontrou uma palavra
            strcat(frase2,frase1); /// Copia palavra
            ... *TERMINAR*

        }
        }
         }




    return 0;
}
