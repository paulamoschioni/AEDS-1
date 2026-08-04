#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula Moschioni
DATA: 08/06/2026
O programa gera uma distância aleatória e, com base no consumo e na capacidade do tanque da moto, determina se será necessário abastecer durante a viagem e quantas paradas serão necessárias
*/
typedef struct Moto{
    int consumo;
    int capacidade;
} moto;

int main()
{
    srand (6);
    int dist, abast = 0;
    int L;
    moto mt;

    scanf("%d",&mt.consumo);
    scanf("%d",&mt.capacidade);

    dist = rand()%101;

    L =  dist/(mt.consumo);
    abast += L/(mt.capacidade);
    {
        if (L % (mt.capacidade)!= 0) abast++;
    }
    abast--;

    if(abast == 0){
        printf("A moto nao precisa parar para abastecer\n");
    } else {
    printf("A moto precisa parar %d vezes para abastecer\n",abast);
    }
    return 0;
}
