#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 02/06/2026
Leia um nome completo e gere um login em letras minúsculas:
1-sobrenome: primeira letra do nome + sobrenome.
2- ou mais sobrenomes: primeira letra do nome + primeira letra do primeiro sobrenome + último sobrenome.
*/
int main()
{

    char frase[50];
    char palavra[15];
    char escolha[15];
    int j = 0;
    gets(frase);
    gets(escolha);

    // Lendo string caractere a caractere
    for(int i = 0; i <= strlen(frase); i++){  /// Incluir  o \0
        if (frase[i] != ' ' && frase[i] != '\0'){
            palavra[j] = frase[i];
            j++;
        } else{
        palavra[j] = '\0';

        if (strcmp(palavra,"ESCOLA")== NULL)   {
            printf("%s",escolha);
        } else {
        printf("%s",palavra);
        }
        printf(" ");
        j = 0;
        }
    }
    return 0;
}
