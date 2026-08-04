#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    FILE *arquivo3;
    FILE *arquivo1;
    FILE *arquivo2;
    char linha[300];

    // Abrindo dois arquivos
    arquivo1 = fopen("arquivo1.txt","r");
    arquivo2 = fopen("arquivo2.txt","r");
    arquivo3 = fopen("arquivo3","w");

    if (arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL)
    {
        printf("Erro na abertura");
        return 1;
    }

    // Guardando conteudos dos arquvos no novo
    while (fscanf(arquivo1,"%[^\n]\n",linha)!= EOF)        /// Ler do arquivo 1 e colocar em linha. Ate ler valor invalido, ou seja NULL
    {
    fprintf(arquivo3,"%s\n",linha);        /// Pegar o texto de linha e colocar em arquivo3
    }

    while (fscanf(arquivo2,"%[^\n]\n",linha)!= EOF)       /// Ler do arquivo 2 enquato o fgets ler valores validos. Caso ele encontre valores invalidos, retorna NULL
    {
    fprintf(arquivo3,"%s\n",linha);     /// Pegar o texto que esta em linha e colocar em arquivo3
    }

    // Fechando 3 arquivos
    fclose (arquivo1);
    fclose (arquivo2);
    fclose (arquivo3);
    return 0;
}
