#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*AUTORA: Paula Moschioni
DATA: 31/05/2026
Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo na
tela. Imprima também a quantidade de linhas que este arquivo possui
*/
int main()
{   // Criando arquivo
    FILE *arquivo = fopen("entrada.txt","r");
    char *frase = malloc (100*sizeof(char));
    char carac;
    int linha = 1;

    while(fscanf(arquivo,"%c",&carac) == 1){
        if(carac == '\n') linha++;
        printf("%c",carac);
    }

    printf("\n%d",linha);

    free(frase);
 fclose(arquivo);
    return 0;
}
