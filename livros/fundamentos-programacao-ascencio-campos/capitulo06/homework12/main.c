#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*AUTORA: Paula Moschioni
DATA: 20/05/2026
Programa que preenche vetor com os modelos de cinco carros. Carregue outro vetor com o consumo desses carros. Calcule e mostre:
■ o modelo de carro mais econômico; e
■quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 km*/

int main()
{
    // Declaracao de variaveis
    char marcas[5][30];
    int consumo[5], menorC, iC;
    float litro[5];

    srand(time(NULL));

    // Recebendo valores
    for (int i = 0; i < 5;i++){
        scanf(" %s",marcas[i]);
        }

    for(int j = 0; j < 5; j++){
        consumo[j] = rand()%21 + 10; /// O random gerará numeros de 10 a 30
        printf("%d ",consumo[j]);

        if (j == 0){
            menorC =  consumo[j];
            iC = 0;
    } else {
    if (consumo[j] < menorC){
      menorC = consumo[j];
      iC = j;
    }

    }}printf("\n");
    printf("O modelo mais economico e: %s\n",marcas[iC]);

    // Calculando consumo
    for(int c = 0; c < 5; c++){
    litro[c] = 1000.0/consumo[c];
    printf("Consumo em 1000 litros do carro %d: %.2f\n",c+1,litro[c]);
    }
    return 0;
}
