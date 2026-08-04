#include <stdio.h>
#include <stdlib.h>
void preencheVetor (int notas[], int tamanho)
{
   /// Recebe 10 notas
   for (int i = 0; i < 10; i++)
   {
       scanf("%d",&notas[i]);
   }
}

void  calculaMedia (int notas[], int tamanho)
{
    int acumuladorNOTAS = 0, contador = 0;
    float media;

    for (int i = 0; i < 10; i++)
    {
    acumuladorNOTAS += notas[i];
        if (notas[i] >= 6)
      {
      contador ++;
      }
    }
    media = acumuladorNOTAS / 10.0;
    printf("Media: %.2f\n",media);
      printf("Alunos acima da media: %d\n",contador);

}

int main()
{
    int notas [10];
    preencheVetor(notas,10);
    calculaMedia(notas,10);
    return 0;
}
