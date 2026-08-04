#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    FILE *arquivo;
    arquivo = fopen("numero.txt","w");

    // Escrever DENTRO do arquivos de 1 - 10
    for(int i = 1; i <= 10; i++)
    {
     fprintf(arquivo,"%d\n",i);
    }

    // Fechar arquivo
    fclose(arquivo);

    return 0;

}
