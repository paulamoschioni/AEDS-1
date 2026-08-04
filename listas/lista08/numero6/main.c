#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula Moschioni
DATA: 06/06/26
Crie uma estrutura chamada "Ponto"que represente as coordenadas x e y de um ponto no
plano cartesiano.
Em seguida, irá receber um numero indicando a quantidade de conjunto de entradas especficando
as coordenadas dos valores x e y para três pontos distintos. Seu programa deve determinar se
esses pontos estão alinhados de forma horizontal, vertical ou se não há alinhamento.
Atençao: o programa deve calcular combinações de alinhamento. então se 3 pontos estão alinados verticalmente sendo eles A,B e C então teremos 3 alinhamentos
verticais de A-B, A-C e B-C
*/
typedef struct Ponto{
    int x1, y1;
    int x2, y2;
    int x3, y3;
}ponto;

int main()
{
    int qtde, aliVert, aliHori;
    scanf("%d",&qtde);
    ponto *pnt = malloc (qtde*sizeof(ponto));

    for (int i = 0; i < qtde; i++){ // Preenchendo os pontos com x e y
        scanf("%d",&(pnt+i)->x1);
        scanf("%d",&(pnt+i)->y1);
        scanf("%d",&(pnt+i)->x2);
        scanf("%d",&(pnt+i)->y2);
        scanf("%d",&(pnt+i)->x3);
        scanf("%d",&(pnt+i)->y3);
    }

    // Verificando ponstos alinhados
    for (int j = 0; j < qtde; j++){
            aliHori = 0;
            aliVert = 0;

    if (((pnt+j)->x1) == ((pnt+j)->x2)) aliVert++;
    if (((pnt+j)->x2) == ((pnt+j)->x3)) aliVert++;
    if (((pnt+j)->x1) == ((pnt+j)->x3)) aliVert++;

    if (((pnt+j)->y1) == ((pnt+j)->y2)) aliHori++;
    if (((pnt+j)->y2) == ((pnt+j)->y3)) aliHori++;
    if (((pnt+j)->y1) == ((pnt+j)->y3)) aliHori++;

    if(aliVert == 0) printf("Nao ha alinhamentos verticais\n");
        else printf("alinhamentos verticais: %d\n",aliVert);
    if(aliHori == 0) printf("Nao ha alinhamentos horizontais\n");
        else printf("alinhamentos horizontais: %d\n",aliHori);
    }
    return 0;
}
