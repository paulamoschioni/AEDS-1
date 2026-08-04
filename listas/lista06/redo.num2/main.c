#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*AUTORA: Paula Moschioni
DATA: 31/05/2026
Crie um programa que receba um texto do usuário e grave o texto em um arquivo */
int main()
{
    FILE *arquivo = fopen("saida.txt","w");
    char *frase = malloc (50*sizeof(char));

    scanf(" %[^\n]",frase); /// Le uma frase com espacos

    // Printa palavras

    fprintf(arquivo,"%s",frase);

    free(frase);
    fclose(arquivo);
    return 0;
}
