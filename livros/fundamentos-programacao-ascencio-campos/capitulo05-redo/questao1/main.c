#include <stdio.h>
#include <stdlib.h>
void trocaNum (int *ptrN1, int *ptrN2)
{
  // Declarando variaveis locais
  int n3; /// virará n1
  int n4; /// virara n2

  // Recebendo valores
  scanf("%d",&n3);
  scanf("%d",&n4);

  // Alterando valores
  ptrN1 = &n3;
  ptrN2 = &n4;

  printf("N1: %d \nN2: %d\n",*ptrN1,*ptrN2);
}

void invertePosicoes (int *ptrN1, int *ptrN2)
{
    int temp;

    temp = *ptrN1;
    *ptrN1 = *ptrN2;
    *ptrN2 = temp;
    printf("Novo N1: %d\n Novo N2: %d\n",*ptrN1,*ptrN2);

}

int main()
{
    // Declaracao de variaveis
    int n1, *ptrN1 = &n1;
    int n2, *ptrN2 = &n2;
    int resultado;

    //Receber dois numeros
    scanf("%d",&n1);
    scanf("%d",&n2);

    //Realizar calculos
    resultado = *ptrN1 - *ptrN2;
    printf("Subtracao de n1- n2: %d\n",resultado);

    //Alterando numeros
    trocaNum(ptrN1,ptrN2);

    //Invertendo numeros
    invertePosicoes(ptrN1,ptrN2);
    return 0;
}
