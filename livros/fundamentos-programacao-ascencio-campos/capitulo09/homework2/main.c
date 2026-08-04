#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faca um programa que receba uma frase, calcule e mostre a quantiade de consoantes da frse digitada. O programa devera contar consoantes maiuculas e minusculas
*/
int main()
{
    // Declaracao de variaveis
    int tam , conso = 0;
    char consoantes[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    char frase[50];

    scanf(" %[^\n]",frase);
    tam = strlen(frase);
    printf("%d\n",tam);

    for (int i = 0; i < tam; i++){
        if (strchr(consoantes,frase[i]) != NULL){
            conso++;
        }
    }
    printf("%d consoantes\n",conso);
    return 0;
}
