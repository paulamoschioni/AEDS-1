#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faça um programa para criptografar uma frase dada pelo usuário (a criptografia troca as vogais da
frase por *).

*/
int main()
{
    char frase[100];
    char vogais[] = "aeiouAEIOU";
    int tam;

    scanf(" %[^\n]",frase);
    tam = strlen(frase);

    for (int i = 0; i < tam; i++){
        if (strchr(vogais,frase[i]) != 0){  /// Se a comparacao encontrar uma vogal, trocar
            frase[i] = '*';
        }}


        printf(" %s",frase);



    return 0;
}
