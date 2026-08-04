#include <stdio.h>
#include <stdlib.h>

int main() {

    int voto;

    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
    int nulo = 0, branco = 0;

    printf("Digite o voto (0 para encerrar): ");
    scanf("%d", &voto);

    while(voto != 0) {

        if(voto == 1)
            cand1++;

        else if(voto == 2)
            cand2++;

        else if(voto == 3)
            cand3++;

        else if(voto == 4)
            cand4++;

        else if(voto == 5)
            nulo++;

        else if(voto == 6)
            branco++;

        printf("Digite o voto (0 para encerrar): ");
        scanf("%d", &voto);
    }

    printf("\nCandidato 1: %d\n", cand1);
    printf("Candidato 2: %d\n", cand2);
    printf("Candidato 3: %d\n", cand3);
    printf("Candidato 4: %d\n", cand4);
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);

    return 0;
}
