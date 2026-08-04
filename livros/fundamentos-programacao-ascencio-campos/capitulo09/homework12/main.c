#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 01/06/26
Faça um programa para criptografar uma frase dada pelo usuário, ou seja, a criptografia deverá inverter a frase
*/
int main()
{
   char frase[100], palavra[15];
    int j = 0;
    gets(frase);/// le frase
    int tam = strlen(frase);

    for (int i = (tam - 1); i >= 0; i--){
        printf("%c",frase[i]);
    }
    return 0;
}
