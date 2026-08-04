#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    int v[9];
    int num, primo;

    // Preenchendo vetor
    for (int i = 0; i < 9; i++){
        scanf("%d",&v[i]);}

    // Verificando se o numero é primo
    for (int j = 0; j < 9; j++){
            primo = 1;
        if (v[j] < 2){
            primo = 0;
        }
        else {
            for(int k = 2; k < v[j];k++){
                if (v[j]% k == 0) primo = 0;
            }
        }
        if (primo == 1) printf("Numero: %d\nPosicao: %d\n",v[j],j);
    }
    return 0;
}
