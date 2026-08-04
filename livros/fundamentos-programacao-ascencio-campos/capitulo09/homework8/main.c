#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faca um programa que receba uma frase , calcule e mostre a quantidade de vezes que a palavra AULA aparece na frase digitada.
*/
int main()
{
    char frase[100];
    int cont = 0;


    scanf(" %[^\n]",frase);


    char *pos = frase;  // começa do início da frase
    while (strstr(pos,"AULA")!= 0){ /// Procura a partir da pos para frente
    pos = strstr(pos,"AULA"); /// strstr retorna um ponteiro com a posicao exata da substring
    pos = pos + 4;              /// Atualiza a posicao para o final da palavra AULA
    cont++;                     /// Conta
    }
    printf("%d\n", cont);

    return 0;
}
