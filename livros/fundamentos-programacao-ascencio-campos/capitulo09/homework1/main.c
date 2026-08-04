#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faca um programa que receba uma frase, calcule e mostre a quantiade de vogais da frse digitada. O programa devera contar vogais maiuculas e minusculas
*/
int main()
{
    // Declaracao de variaveis
    char frase[50];
    int tam, achou = 0;
    char vogais[] = "aeiouAEIOU";

    // Digita frase
    scanf(" %[^\n]",frase);

    tam = strlen(frase);

    for (int i = 0; i < tam; i++){
        if (strchr(vogais,frase[i]) != NULL){
            achou ++;
        }
    }
    if (achou != 0){
        printf("%d vogais\n",achou);
    } else {
    printf("0 vogais");
}

    return 0;
}
