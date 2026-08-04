#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    int temp [31], menor, maior;
    int acumulador = 0, contM = 0;
    float media;

    // Preenchedo vetor temp
    for (int i = 0; i < 31; i++)
    {
        scanf("%d",&temp[i]);
    if (i == 0)
    {
      menor = temp[i];
      maior = temp[i];
    }
    else
    {
     if (temp[i] > maior)
            maior = temp[i];
     if (temp[i] < menor)
            menor = temp[i];
    }
    acumulador+= temp[i];
    }

    media = (float) acumulador / 31.0;

    for (int j = 0; j < 31; j++)
    {
     if (temp[j] < media)
    {
        contM++;
    }
    }

    printf("Menor e maior temperatura: %d e %d\n",menor,maior);
    printf("Media de temperatura: %.2f\n",media);
    printf("Numero de dias nos quais a temperatura foi inferior a temperatura media: %d\n",contM);


    return 0;
}
