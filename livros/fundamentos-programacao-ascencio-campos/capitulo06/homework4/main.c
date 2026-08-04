#include <stdio.h>
#include <stdlib.h>
void preencheVet (int *num,int n){
    for(int i = 0; i < n; i++) {
        scanf("%d",num + i);
    }
}

void vetorResult1 (int *num, int n, int *vR1, int x){
    int posicao = 0;
    for (int k = 0; k < n; k++) {
      if (*(num + k) > 0){

        *(vR1 + posicao) = *(num + k);       /// posicao do vetor = numero positivo do vetor num
        printf("%d ",*(vR1 + posicao));
        posicao++;
      }
    }

}
void vetorResult2 (int *num, int n, int *vR2, int x){
    int posicao = 0;
    for (int k = 0; k < n; k++) {
      if (*(num + k) < 0){
        *(vR2 + posicao) = *(num + k);       /// posicao do vetor = numero positivo do vetor num
        printf("%d ",*(vR2 + posicao));
        posicao++;
      }
    }

}
int main()
{
    // Declaracao de variaveis
    int *num = malloc (8*sizeof(int));
    int *vR1 = malloc (8*sizeof(int));
    int *vR2 = malloc (8*sizeof(int));

    preencheVet(num,8);
    vetorResult1(num,8,vR1,8);
    printf("\n");
    vetorResult2(num,8,vR2,8);

    free(num);
    free(vR1);
    free(vR2);
    return 0;
}
