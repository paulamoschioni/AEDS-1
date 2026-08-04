#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    FILE *arquivo;
    int cont = 0;
    int N;
    char *letra = malloc(N * sizeof(char));      /// Declarando vetor letras como dinamica

    // Abre arquivo
    arquivo = fopen("letras.txt","w");

    // Recebe N
    scanf("%d",&N);

    // Escrever dentro do arquivo
    for (int i = 0; i < N; i++) {       /// Preencher vetor letras
        scanf(" %c",letra+i);

        if (*letra+i == 'a' || *letra+i == 'e' || *letra+i == 'i' || *letra+i == 'o' || *letra+i == 'u')
        {
         cont++;
        }
        else if (*letra+i == 'A' || *letra+i == 'E' || *letra+i == 'I' || *letra+i == 'O' || *letra+i == 'U')
        {
         cont++;
        }
    }

    fprintf(arquivo,"%d",cont);

    free(letra);
    fclose(arquivo);
    return 0;
}
