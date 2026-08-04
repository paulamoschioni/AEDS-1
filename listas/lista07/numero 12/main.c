#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
Escreva um programa em C para contar o número de vogais e consoantes em uma cadeia de caracteres (vetor de char como string) usando um ponteiro.
*/
int main()
{
    // Declarando variaveis
    char *string = malloc(30*sizeof(char));
    int contVogais = 0, contCons = 0;
    scanf(" %[^\n]",string);

    for(int i = 0; i < strlen(string); i++){
            if (isalpha(string[i])){
        if (strchr("AEIOUaeiou", string[i]) != NULL) contVogais++;
        else contCons++;
    }
    }
    printf("Vogais: %d\n",contVogais);
    printf("Consoantes: %d\n",contCons);
    free(string);
    return 0;
}
