#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
Escreva um programa em C para imprimir todas as letras do alfabeto maiúsculo usando um ponteiro.
*/
int main()
{
    // Declaracao de variaveis
    char *V = malloc(26*sizeof(char));

    // imprimindo letras do alfabeto maisculo
    for (int i = 0; i < 26; i++){
    V[i] = 65 + i;
    printf("%c ",*(V + i));
    }
    return 0;
}
