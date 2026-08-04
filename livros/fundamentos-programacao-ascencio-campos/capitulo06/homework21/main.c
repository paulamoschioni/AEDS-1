#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaracao de variaveis
    int vet[15];
    int *par = malloc(15*sizeof(int));
    int *imp = malloc(15*sizeof(int));
    int y = 0, t = 0;

    srand(time(NULL));

    // Preenche vetor
    for(int i = 0; i < 15; i++){
    vet[i] = rand()%41;
    printf("%d ",vet[i]);
    }
printf("\n");
    // Separa em par e impar
    for(int x = 0; x < 15; x++){
    if (vet[x] % 2 == 0){
        *(par+y) = vet[x];
        y++;
    } else {
    if (vet[x] % 2 != 0){
        *(imp+t) = vet[x];
        t++;
    }}
    }

    printf("Pares: ");
    for (int i = 0; i < y; i++)
        printf("%d ", par[i]);
    printf("\n");

    printf("Impares: ");
    for (int i = 0; i < t; i++)
        printf("%d ", imp[i]);
    printf("\n");

    free(par);
    free(imp);
    return 0;
}
