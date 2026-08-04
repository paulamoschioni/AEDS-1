#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao
    FILE *arquivo;
    FILE *entrada;
    int i = 0;
    float max, min, num, soma = 0.0, media;

    // Abrindo arquivos
    arquivo = fopen("saida.txt", "w");
    entrada = fopen("entrada", "r");

    /*
     if (entrada == NULL || arquivo == NULL) {
        printf("Erro: Nao foi possivel abrir os arquivos\n");
        return 1;
    }*/

    // Contando max e min
    while (fscanf(entrada, "%f", &num) != EOF) {
        soma += num;
        if (i == 0) {
            max = num;
            min = num;
        }
        else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
        i++;
    }


    if (i > 0) {
        media = soma / i;

        // Colocando no arquivo saida as informacoes
        fprintf(arquivo, "%.2f\n%.2f\n%.2f\n", max, min, media);
        printf("Arquivo 'saida.txt' gravado com sucesso!\n");
    } else {
        fprintf(arquivo, "O arquivo de entrada estava vazio.\n");
    }

    fclose(arquivo);
    fclose(entrada);

    return 0;
}
