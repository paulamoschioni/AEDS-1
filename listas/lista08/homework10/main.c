#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* AUTORA: Paula Moschioni
DATA: 24/05/2026
Faça um programa que receba uma frase e troque a palavra ALUNO por ESTUDANTE e a palavra
ESCOLA por UNIVERSIDADE;
*/

int main()
{
    char frase[100], nfrase[100];
    char *pos = frase;      /// Inicializando na posicao 0
    int tam;

    printf("Digite uma frase: \n");
    scanf(" %[^\n]",frase);
    tam = strlen(frase);

    // Converte tudo para maiusculo
    strupr(frase);

    // Encontrando substrings na frase e as substituindo
    for(int j = 0; j < tam; j++){
    if (strstr(pos,"ALUNO") != NULL){ /// Ler frase enquanto encontra palavra aluno
        strcat(nfrase,"ESTUDANTE");
        pos = strstr(pos,"ALUNO");      /// Retorna end. do primeiro char de aluno
        pos = pos + 5;
    }    else    {
        char temp[2];
    temp[0] = frase[j];  // o caractere
    temp[1] = '\0';      // vira uma string
    strcat(nfrase, temp);

    } }

    printf("%s",nfrase);



       /* while(strstr(pos,"ESCOLA") != NULL){ /// Ler frase enquanto encontra palavra aluno
        pos = strstr(pos,"ESCOLA");      /// Retorna end do primeiro char de aluno
        pos = pos + 6;}                  /// Atualiza pos para o final da palavra*/
    return 0;
}
