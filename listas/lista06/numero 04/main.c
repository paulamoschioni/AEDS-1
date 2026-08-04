#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    FILE *archive04;
    char cadeia [300];      /// Vetor para guardar cadeia de char
    int contlinhas = 0;

    // Abrindo arquivo
    archive04 = fopen("archive04.txt","r");
    if (archive04 == NULL) printf("Erro a abertura do arquivo");

    // Lendo arquivo
    while (!feof(archive04))
    {
       fgets(cadeia,300,archive04);
       contlinhas ++;

    }
    printf("Quantidade de linhas: %d\n", contlinhas);

    fclose(archive04);

    return 0;
}
