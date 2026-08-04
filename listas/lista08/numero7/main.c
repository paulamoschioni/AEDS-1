#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula Moschioni
DATA: 08/06/2026
 Crie uma estrutura chamada "Retangulo"com campos para largura, altura e área. Você deve
ler um número que determinará quantas repetições serão realizadas. Declare uma variável do
tipo "Retangulo"e implemente um método (função sem retorno) que calcule a área do
retângulo usando ponteiro. A área calculada deve ser impressa na função principal (main)
*/
typedef struct Retangulo{
    float largura;
    float altura;
    float area;
}retangulo;

float calculaArea (float largura, float altura){

    return (altura * largura);
}

int main()
{
    int N;
    scanf("%d",&N);
    retangulo *ret = malloc (N*sizeof(retangulo));

    for(int i = 0; i < N; i++){
    scanf("%f",&(ret+i)->largura);
    scanf("%f",&(ret+i)->altura);
    ret->area = calculaArea((ret+i)->largura,(ret+i)->altura);
    printf("A area do retangulo e: %.2f\n",ret->area);

    }


    return 0;
}
