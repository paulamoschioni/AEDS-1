#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*AUTORA: Paula Moschioni
DATA: 20/05/2026
Faça um programa que preencha um primeiro vetor com dez números inteiros, e um segundo vetor
com cinco números inteiros. O programa deverá mostrar uma lista dos números do primeiro vetor com
seus respectivos divisores armazenados no segundo vetor, bem como suas posições.
*/
int main()
{
    // Declaracao de variaveis
    int vet1[10], vet2[5];
    int *div = malloc(5* sizeof(int));
    int p = 0, achou = 0;
    srand(time(NULL));

    // Preenchendo vetor
    for (int i = 0; i < 10; i++){
        vet1[i] = rand()%20;
        printf("%d ",vet1[i]);
    }
    printf("\n");
    for (int j = 0; j < 5; j++){
        vet2[j] = rand()%20;
        printf("%d ",vet2[j]);
    }
    printf("\n");

    // Encontrando numeros que estao em 1 que sao divisiveis por numeros em 2

    for (int h = 0; h < 10; h++){
        if (vet1[h]%vet2[h] == 0){
                achou = 1;
            printf("Numero %d\nDivisivel por %d na posicao %d\n",vet1[h],vet2[h],(h+1));
        }
    } if (achou == 0) printf("Nao ha divisores em comum");
    free(div);
    return 0;
}
