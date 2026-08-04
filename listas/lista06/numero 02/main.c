#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    FILE *arquivo;

    // Abrindo arquivos
    arquivo = fopen("texto.txt","w");

    // Gravando  texto no arquivo
    char cadeia [100];     /// Criando vetor para guardar texto
    fgets(cadeia,100,stdin);    /// Lendo do TECLADO (stdin) a cadeia de caracteres
    fputs(cadeia, arquivo);     /// Pega a cadeia digitada e guarda no ARQUIVO

    // Fechando
    fclose(arquivo);
    return 0;
}
