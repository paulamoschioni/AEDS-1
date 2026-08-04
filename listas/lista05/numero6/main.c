#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int a, *ptrA = &a, novoA;
    float b, *ptrB = &b, novoB;
    char letra, *ptrLetra = &letra, novaLetra;

    // Recebendo valores
    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %c",&letra);

    printf("INTEIRO:\n Endereco: %p\nConteudo: %d\n",&a,*ptrA);
    printf("REAL:\n Endereco: %p\nConteudo: %f\n",&b,*ptrB);
    printf("INTEIRO:\n Endereco: %p\nConteudo: %c\n",&a,*ptrLetra);

    // Modificando valores por ponteiros
    scanf("%d",&novoA);
    scanf("%f",&novoB);
    scanf(" %c",&novaLetra);

    *ptrA = novoA;
    *ptrB = novoB;
    *ptrLetra = novaLetra;

    printf("INTEIRO:\n Endereco: %p\nConteudo: %d\n",&a,*ptrA);
    printf("REAL:\n Endereco: %p\nConteudo: %f\n",&b,*ptrB);
    printf("INTEIRO:\n Endereco: %p\nConteudo: %c\n",&a,*ptrLetra);
    return 0 ;
}
