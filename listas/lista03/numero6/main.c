#include <stdio.h>
#include <stdlib.h>

float calcularS (int num) /*Recebendo num do main*/
{
    // Declarando variaveis
    int i, fat = 1;
    float S = 1;


    // Criando grande laco

    for (i = 1; i <= num; i++)  /*Esse laco serve para garatir as parcelas 1/1! + 1/2! + 1/3!*/
    {   /*Valor de fat*/
        fat = fat * i;

       /*Acumular em S*/
       S += 1.0 / fat;
    }

    return S;
}

int main()
{
    int num;
    float resultado;

     // Recebendo numero, pq o exercicio pediu uma funcao que receba por PARAMETRO, logo deve ser lido no MAIN. Caso contrario, o exercicio pediria uma funcao que receba num
    //printf("Numero: ");
    scanf("%d",&num);

    resultado = calcularS(num);
    printf("%f\n",resultado);
    return 0;
}
