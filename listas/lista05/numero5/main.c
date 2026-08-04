#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int i, *ptrI = &i;
    float f, *ptrF = &f;
    double d, *ptrD = &d;
    char c, *ptrC = &c;

    // Recebendo valores
    scanf("%d",&i);
    scanf("%f",&f);
    scanf("%lf",&d);
    scanf(" %c",&c);

    // Mostrando infos
    printf("INT:\nValor: %d\nEndereco: %p\nTamanho: %d\n",i,&i,sizeof(i));
    printf("FLOAT:\nValor: %f\nEndereco: %p\nTamanho: %d\n",f,&f,sizeof (f));
    printf("DOUBLE:\nValor: %lf\nEndereco: %p\nTamanho: %d\n",d,&d,sizeof(d));
    printf("CHAR:\nValor: %c\nEndereco: %p\nTamanho: %d\n",c,&c,sizeof(c));
    return 0;
}
