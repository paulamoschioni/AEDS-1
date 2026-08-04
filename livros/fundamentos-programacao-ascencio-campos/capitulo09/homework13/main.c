#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 01/06/26
Faça um programa para criptografar uma frase dada pelo usuário, ou seja, a criptografia deverá inverter cada palavra da frase
*/
int main()
{
   char frase[100], palavra[15];
    int j = 0;
    gets(frase);

    for (int i = 0; i <= strlen(frase); i++){    //Percorre caractere por caractere, INCLUI \0
        if (frase[i] != ' ' && frase[i] != '\0'){   /// Se estiver em uma palavra
            palavra[j] = frase[i];
            j++;
        } else {    /// Se estiver no fim de uma palavra ou mesmo da string
        palavra[j] = '\0'; // finaliza palavra

        int tamP = strlen(palavra);
        for (int p = (tamP - 1); p >= 0; p--) {
            printf("%c",palavra[p]);
           }
           printf(" ");
           j = 0;
        }

        }

    return 0;
}
