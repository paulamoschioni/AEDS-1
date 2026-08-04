#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faça um programa que receba uma frase e mostre as letras que se repetem, junto com o número de
repetições
*/
int main()
{
    char frase[100];
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int tam, pos, contador[26] = {0};
    scanf(" %[^\n]",frase);
    tam = strlen(frase);

    // Contando palavras dentro da frase
    for (int i = 0; i < tam; i++){
       frase[i] = toupper(frase[i]); /// Converte para maiusculo

       if (strchr(alfabeto,frase[i]) != 0){ /// Se for igual a algum caractere conta +1
            pos = frase[i] - 'A';
            contador[pos]++;
       }
    }
    for (int j = 0; j < 26 ; j++){
        if(contador[j] != 0){
    printf("A letra %c apareceu %d vezes.\n",alfabeto[j],contador[j]);
    }
    }
    return 0;
}
