#include <stdio.h>
#include <stdlib.h>
int ordenaValores (int *ptrV1, int *ptrV2, int *ptrV3)
{
    // Declarando variaveis locais
    int maior, meio, menor;

    // Return
    if (*ptrV1 == *ptrV2 && *ptrV2 == *ptrV3) return 1;


    // Comparando
    maior = *ptrV1; menor = *ptrV1;

    if (maior < *ptrV2) maior = *ptrV2; /// MAIOR
    if (maior < *ptrV3) maior = *ptrV3;

    if (menor > *ptrV2) menor = *ptrV2;  /// MENOR
    if (menor > *ptrV3) menor = *ptrV3;

    meio = (*ptrV1 + *ptrV2 + *ptrV3) - (maior + menor);  /// Truque do meio

    // Mudando o valor do ponteiro
    *ptrV3 = maior;
    *ptrV2 = meio;
    *ptrV1 = menor;
     return 0;
    }



int main()
{
    // Declarando variaveis
   int v1, v2, v3, *ptrV1 = &v1, *ptrV2 = &v2, *ptrV3 = &v3, resultado;

    // Lendo valores
   scanf("%d %d %d",&v1,&v2,&v3);

    // Aciona funcao
    resultado = ordenaValores(ptrV1, ptrV2, ptrV3);  /// Passa o endereco dos ponteiros. Pode ser &v1 ou ptrV1.
    printf("%d %d %d\n",v1, v2, v3);   /// Aqui imprimira o novo valor, pois o ponteiro do modulo acessou o end e modulou
    printf("%d\n", resultado);
    return 0;
}
