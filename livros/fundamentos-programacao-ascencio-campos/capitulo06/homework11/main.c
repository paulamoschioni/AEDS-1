#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
AUTORA: Paula moschioni
DATA: 20/05/2026
Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor.
Calcule e mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o mês por
extenso: 1 – janeiro, 2 – fevereiro...). Desconsidere empates
*/

int main()
{
    // Declaracao de variaveis
    int tempM[12], maior, menor, maiorM ,menorM;

    srand(time(NULL));

    // Preenchendo vetor temp
    for (int i = 0; i < 12; i++){
        tempM[i] = rand()%21 + 10; /// Gerar temp randomicas de 10 ate 30 graus
        printf("%d ",tempM[i]);
    }
printf("\n");
    // Maior temperatura
    for (int j = 0; j < 12; j++){
         if (j == 0){
            maior = tempM[j];
            menor = tempM[j];
        } else {
            if (tempM[j] > maior) {
            maior = tempM[j];
            maiorM = j;}

            if (tempM[j] < menor) {
            menor = tempM[j];
            menorM = j;}
        }
    }
    printf("Maior temperatura: %d\n",maior);
    printf("Menor temperatura: %d\n",menor);
    switch (maiorM){
    case 0: printf("Janeiro"); break;
    case 1: printf("Fevereiro");break;
    case 2: printf("Marco");break;
    case 3: printf("Abril");break;
    case 4: printf("Maio");break;
    case 5: printf("Junho");break;
    case 6: printf("Julho");break;
    case 7: printf("Agosto");break;
    case 8: printf("Setembro");break;
    case 9: printf("Outubro");break;
    case 10: printf("Novembro");break;
    case 11: printf("Dezembro");break;
    }
    switch (menorM){
    case 0: printf("Janeiro"); break;
    case 1: printf("Fevereiro");break;
    case 2: printf("Marco");break;
    case 3: printf("Abril");break;
    case 4: printf("Maio");break;
    case 5: printf("Junho");break;
    case 6: printf("Julho");break;
    case 7: printf("Agosto");break;
    case 8: printf("Setembro");break;
    case 9: printf("Outubro");break;
    case 10: printf("Novembro");break;
    case 11: printf("Dezembro");break;
    }












    return 0;
}
