#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
Faça um procedimento que preencha por linha uma matriz m 5 x 5.
Faça uma função que receba uma matriz preenchida, calcule e
retorne cada uma das somas a seguir (uma função para cada letra abaixo):
 (a) da quinta linha de m (b) da segunda coluna de m (c) da diagonal
 principal (d) da diagonal secundária (e) de todos os elementos da matriz*/
void calculaDados (int M[5][5]){
    // Declara variaveis
    int acumA = 0, acumB = 0,acumC = 0,acumD = 0,acumE = 0;

    // Calculando A
    for (int i = 0; i < 5; i++){
        acumA += M[4][i];        /// Acumula valores da linha 5, e de cada coluna
        }

    // Calculando B
    for (int k = 0; k < 5; k++){
        acumB += M[k][2];        /// Acumula valores da coluna 2, e de cada linha
        }

    // Calculando C
    for (int h = 0;h < 5; h++){
        acumC+= M[h][h];        /// Acumula diagonal principal
        }

    // Calculando D
    for (int f = 0; f < 5; f++){
        acumD += M[f][4 - f];        /// Acumula diagonal secundaria
        }

    // Calculando E
    for (int s = 0; s < 5; s++) {
    for (int d = 0; d < 5; d++) {
            acumE += M[s][d];}}

   printf("%d\n%d\n%d\n%d\n%d\n",acumA,acumB,acumC,acumD,acumE);
    }


int main()
{
   // Declarando variaveis
   int M[5][5];

   // Preenchendo matriz
   for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {    /// Coluna
    scanf("%d", &M[i][j]);
    }}

    calculaDados(M);


    return 0;
}
