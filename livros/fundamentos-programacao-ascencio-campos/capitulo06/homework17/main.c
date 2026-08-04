#include <stdio.h>
#include <stdlib.h>
/*AUTORA: Paula Moschioni
DATA: 21/05/2026
Faça um programa que receba seis números inteiros e mostre:
■■ os números pares digitados;
■■ a soma dos números pares digitados;
■■ os números ímpares digitados; e
■■ a quantidade de números ímpares digitados
 */
int main()
{
   // Declaracao de variaveis
   int vet[6];
   int somaP = 0, somaIP = 0;
   int q = 0, r = 0;

   // Preenche vetor
   for (int i = 0 ; i < 6; i++){
    scanf("%d",&vet[i]);
   }

   // Recebe infos
   printf("Os numeros pares sao: \n");
    for (int j = 0 ; j < 6; j++){
    if (vet[j] % 2 == 0){
    printf("Numero %d na posicao %d\n",vet[j],j+1);
    somaP+=vet[j];
    }
   }
   printf("Os numeros impares sao: \n");
   for (int g = 0 ; g < 6; g++){
    if (vet[g] % 2 != 0){
        printf("Numero %d na posicao %d\n",vet[g],g+1);
        somaIP += vet[g];
    }}
   printf("Soma dos pares: %d\n",somaP);
   printf("Soma dos impares: %d\n",somaIP);

    return 0;
}
