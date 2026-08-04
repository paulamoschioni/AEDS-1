#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 02/06/2026
Faça um programa que se comporte como vírus, ou seja, que duplique cada uma das palavras digitadas
pelo usuário
*/
int main()
{
    char frase[50];
    char palavra[15];
    int j = 0;
    gets(frase);

    // Lendo string caractere a caractere
    for(int i = 0; i <= strlen(frase); i++){  /// Incluir  o \0
        if (frase[i] != ' ' && frase[i] != '\0'){
            palavra[j] = frase[i];
            j++;
        } else{
        palavra[j] = '\0';

        if(strcmp(palavra,"JANEIRO")== 0) printf("01");
        else if(strcmp(palavra,"FEVEREIRO")== 0) printf("02");
        else if(strcmp(palavra,"MARÇO")== 0) printf("03");
        else if(strcmp(palavra,"ABRIL")== 0) printf("04");
        else if(strcmp(palavra,"MAIO")== 0) printf("05");
        else if(strcmp(palavra,"JUNHO")== 0) printf("06");
        else if(strcmp(palavra,"JULHO")== 0) printf("07");
        else  if(strcmp(palavra,"AGOSTO")== 0) printf("08");
        else if(strcmp(palavra,"SETEMBRO")== 0) printf("09");
        else if(strcmp(palavra,"OUTUBRO")== 0) printf("10");
        else if(strcmp(palavra,"NOVEMBRO")== 0) printf("11");
        else if(strcmp(palavra,"DEZEMBRO")== 0) printf("12");

        j = 0;
        }
    }
    return 0;
}
