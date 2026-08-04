#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 01/06/26
Faça um programa que receba uma frase e, a cada ocorrência da palavra TECLADO, insira o texto
OU MOUSE.

*/
int main()
{
    char frase[100], palavra[15];
    int j = 0;
    gets(frase);/// le frase

    for (int i = 0; i <= strlen(frase);i++){
        // Se estiver em uma palavra
        if (frase[i] != ' ' && frase[i] != '\0'){
            palavra[j] = frase[i];      /// Passa letras para palavras
            j++;
        }
        // Se estiver o final da palavra ou ate mesmo da string \0
        else {
            palavra[j] = '\0';      /// Sinaliza o fim da palavra
            if(strcmp(palavra,"TECLADO")== 0){    /// Se a palavra é igual a teclado, printar ou mouse
                printf("TECLADO OU MOUSE ");
            }
            else {  /// Qualquer outra palavra
                printf("%s ",palavra);
            }
            j = 0; // Reinicializa palavra
        }}



    return 0;
}S
