#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    float vet[5], inv[5];
    int cod;
    float temp;

    // Preenche vetor
    for(int i = 0; i < 5; i++){
        scanf("%f",&vet[i]);
    }
    printf("Digite um codigo: ");
    scanf("%d",&cod);

    do{
        switch(cod){
    case 1:
        for(int o = 0; o < 5; o++){
        printf("%.2f ",vet[o]);
    }
    break;
   case 2:
   for(int q = 0; q < 5; q++){
        temp = vet[q];
        vet[q] = inv[4-q];
        inv[4-q] = temp;
        printf("%.2f ",inv[q]);
    }
    break;

        }
    }while (cod != 0);

    return 0;
}
