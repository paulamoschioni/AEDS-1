#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*AUTORA: Paula Moschioni
DATA: 21/05/2026
Leia 10 números em um vetor A e 5 números em um vetor B.
Some cada elemento de A com todos os elementos de B.
-Guarde as somas pares em um vetor.
-Guarde as somas ímpares em outro vetor.
Mostre os dois vetores resultantes. */

//preencher vetores
void preenche(int vetA[], int vetB[]){
     // Preenche vetores
    printf("Vetor A: ");
    for (int i  = 0; i < 10;i++){
        vetA[i] = rand()%21;    /// Gerar numeros randomicos de 0 a 20
        printf("%d ",vetA[i]);
    }
    printf("\n");
    printf("Vetor B: ");

    for (int j  = 0; j < 5;j++){
        vetB[j] = rand()%21;    /// Gerar numeros randomicos de 0 a 20
        printf("%d ",vetB[j]);
    } printf("\n");
}

int main()
{
    // Declaracao de variaveis
    int vetA[10], vetB[5];
    int somaA = 0;
    int soma1[10] = {0};
    int *somaP = malloc(10*sizeof(int));
    int *somaIP = malloc(10*sizeof(int));
    int w = 0, y = 0;


    srand(time(NULL));

    preenche(vetA, vetB);

    // Somando

    for (int c  = 0; c < 5;c++){   ///Somando vetor B
        somaA += vetB[c];
    printf("Soma  do vetor A com B: ");
    for (int p  = 0; p < 5;p++){   ///Somando vetor A com a soma anterior
        soma1[p] = somaA + vetA[p];
        printf("%d ",soma1[p]);
    }
    printf("\n");

    // Criando vetor impar e par
    for (int q  = 0; q < 10;q++){   ///Somando vetor B
       if (soma1[q] % 2 == 0){
        *(somaP + w) = soma1[q];
        printf("%d ",*(somaP + w));
        w++;}
        printf("\n");
        else if (soma1[q] % 2 != 0){
        *(somaIP + y) = soma1[q];
        printf("%d ",*(somaIP + y));
         y++;
       }
    }



    free(somaP);
    free(somaIP);
    return 0;
}

