#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*AUTORA: Paula Moschioni
DATA: 20/05/2026
Programa que preencha um vetor com dez números inteiros, calcule e mostre os números superiores a cinquenta e suas respectivas posições. O programa deverá mostrar mensagem se não existir
nenhum número nessa condição*/
int main()
{
    // Declaracao de variaveis
    int vetor[10];
    int existe = 0;
    srand(time(NULL));
    printf("Numeros superiores a 50: ");
    // Preenche vetores
    for (int i = 0; i < 10; i++){
        vetor[i] = rand()%101; /// Gerar numeros randomicos de 0 ate 100
       printf("%d ",vetor[i]);
    }
    printf("\n");
    for (int h = 0; h < 10; h++){
        if (50 <= vetor[h]) {
            existe = 1;
            printf("%d, posicao %d\n",vetor[h],h);
        }
    }

    if (existe == 0){
        printf("Nao existe nenhum numero acima de 50 no vetor\n");
    }
    return 0;
}
