#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variavel
    int N, acumu = 0;
    FILE *arquivo;

    // Abre arquivo
    arquivo = fopen("saida.txt","w");

    scanf("%d",&N);

    // Calculando divisores
    for (int i = 1; i <= N; i++){
        if (N % i == 0){
            acumu += i;
            printf("%d\n",i);
        }
    }

    // Grava dentro do arquivo
    fprintf(arquivo,"%d",acumu);
    fclose(arquivo);

    return 0;
}
