#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    int *v1 = malloc (10*sizeof(int));
    int *v2 = malloc (10*sizeof(int));
    int *vR = malloc (20*sizeof(int));

    // Preenchendo vetores
    for (int i = 0; i < 10; i++){
        scanf("%d",v1 + i);
    }
    for (int j = 0; j < 10; j++){
        scanf("%d",v2 + j);
    }

    // Preenchendo vetor resultante
    for (int r = 0; r < 20; r++){
    if (r % 2 == 0){
        *(vR + r) = *(v1 + r/2);
    } else {
        *(vR + r) = *(v2 + r/2);
    }
    printf("%d ",*(vR + r));
}

    return 0;
}
