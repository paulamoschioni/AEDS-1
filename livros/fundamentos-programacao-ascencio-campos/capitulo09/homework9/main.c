#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faça um programa que receba uma frase e uma palavra, calcule e mostre a quantidade de vezes que a
palavra digitada aparece na frase.
*/

int main()
{
    char frase[100], palavra[15];
    int tamP, cont = 0;
    char *pos = frase;   /// Aqui pos representa o endereco de cada posicao do vetor

    printf("Digite uma frase: \n");
    scanf(" %[^\n]",frase);
    printf("Digite uma palavra: \n");
    scanf(" %[^\n]",palavra);

    tamP = strlen(palavra); /*ATENCAO: aqui retorna o tamanho, sem \0*/

    while (strstr(pos,palavra) != NULL){    /// Enquanto strstr encontra a palavra na frase
        pos = strstr(pos,palavra);
        /// Atualizando a posicao de POS, para o lugar onde foi encontrado ao primeiro char da palavra
        pos = pos + tamP;                   /// Atualiza posicao para o FIM da palavra
        cont++;                             /// Achou uma palavra
    }

    printf("A palavra %s apareceu %d vezes na frase\n",palavra,cont);


    return 0;
}
