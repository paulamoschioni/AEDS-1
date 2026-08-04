#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*AUTORA: Paula Moschioni
DATA: 21/05/2026
Faça um programa que receba o número sorteado por um dado em vinte jogadas. Mostre os números
sorteados e a frequência com que apareceram
 */
int main()
{
    // Declaracao de variaveis
    int vet[20];
    int um = 0, dois=0, tres=0, quatro=0 , cinco=0, seis=0;
    srand(time(NULL));

    // Preenchendo vetor
    for (int f = 0; f < 20; f++){
        vet[f] = rand ()%7;     /// Gera numeros de 0 a 6
        printf("%d ",vet[f]);
    }

    // Contando a frequencia
    for (int p = 0; p < 20; p++){
    switch(vet[p]){
    case 1:
    um++;
    break;
    case 2:
    dois++;
    break;
    case 3:
    tres++;
    break;
    case 4:
    quatro++;
    break;
    case 5:
        cinco++;
    break;
    case 6:
    seis++;
    break;
    }}
    printf("Frequencia dos numeros:\n");
    printf("1:%d\n2:%d\n3:%d\n4:%d\5:%d\n6:%d\n",um,dois,tres,quatro,cinco,seis);
    return 0;
}
