#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula moschioni
DATA: 19/05/2026
Programa que preenche dois vetores com cinco elementos numéricos cada e, depois, ordene-
-os de maneira crescente. Deverá ser gerado um terceiro vetor com dez posições, composto pela junção
dos elementos dos vetores anteriores, também ordenado de maneira crescente.*/

int main()
{
    // Declaracao de variaveis
    int vX[5], vXO[5], vY[5], vYO[5], vR[10];
    int temp, Temp;

    // Preenchendo vX e vY
    printf("Preencha o vetor X: ");
    for (int p = 0; p < 5; p++){
        scanf("%d",&vX[p]);
    }

    printf("Preencha o vetor Y: ");
    for (int r = 0; r < 5; r++){
        scanf("%d",&vY[r]);
    }

    // Ordenando vetores
    /*ordena X*/
    for (int i = 0; i < 5; i++){ /// Passagem externa
        for (int j = 0; j < 4 - i; j++){  /// Comparacoes entre vizinhos
            if (vX[j] > vX[j+1]){   /// Se for maior que o vizinho posterior, troca
                temp = vX[j];
                vX[j] = vX[j+1];
                vX[j+1] = temp;
            }
        }
    }

    printf("Vetor x ordenado: ");
     for (int a = 0; a < 5; a++){
          vXO[a]=vX[a];
     printf("%d ",vXO[a]);
     }

    /*ordena Y*/
    for (int r = 0; r < 5; r++){ /// Passagem externa
        for (int q = 0; q < 41- r; q++){  /// Comparacoes entre vizinhos
            if (vY[q] > vY[q+1]){   /// Se for maior que o vizinho posterior, troca
                Temp = vY[q];
                vY[q] = vY[q+1];
                vY[q+1] = Temp;
            }
        }
    }
    printf("Vetor y ordenado: ");
     for (int b = 0; b < 5; b++){
          vYO[b]=vY[b];
     printf("%d ",vYO[b]);
     }

    // Criando vR com 10 posicoes com xo e yo
    for (int g = 0; g < 10; g++){
        if (0 <= g && g <= 4){
            vR[g] = vXO[g];
        } else if (5 <= g && g <= 9){
            vR[g] = vYO[g-5];
        }
    }

    // Ordenando vR
    for (int h = 0; h < 10; h++){ /// Passagem externa
        for (int t = 0; t < 9 - h; t++){  /// Comparacoes entre vizinhos
            if (vR[t] > vR[t+1]){   /// Se for maior que o vizinho posterior, troca
                temp = vR[t];
                vR[t] = vR[t+1];
                vR[t+1] = temp;
            }
        }
    }
    printf("Vetor R: ");
     for (int k = 0; k < 10; k++){
     printf("%d ",vR[k]);
     }
    return 0;
}
