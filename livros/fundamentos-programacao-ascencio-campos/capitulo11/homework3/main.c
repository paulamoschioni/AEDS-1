#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("Alunos","w+");
    if(arquivo == NULL) printf("ERRO na abertura do arquivo\n");
    char caractere;
    int campoC;

    printf("Digite o campo chave do registro: \n");
    scanf("%d",&campoC);

    while(fscanf(arquivo,"%c",&caractere) == 1){
        if (caractere == campoC){
            printf("Dado encontrado.\n");
            printf("Digite o novo dado:\n");
        } else {
        printf("Dado nao encontrado. \n");
        }
    }


    fclose(arquivo);
    return 0;
}
