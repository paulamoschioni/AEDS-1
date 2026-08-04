#include <stdio.h>
#include <stdlib.h>

float calcularMedia (int N)
{
 // Declarando variaveis
 float media, nota, somaNotas = 0;
 int i, iA = 0;

 // Criar laco
 for (i = 1; i <= N; i++)
 {   /*Recebendo nota dos N alunos*/
     //printf("Nota do aluno %d: ",i);
     scanf("%f",&nota);

     /*Condicional para saber se a nota foi +6*/
     if (6 <= nota)
     {
       somaNotas += nota;
       iA++;
     }
 }
    // Calcular media
    media = (float) somaNotas / iA;
    return media;
}

int main ()
{
    // Declarando variaveis
    int N;      // Numero de alunos
    float  resultado;

    // Recebendo N
    scanf("%d",&N);

    // Resultado
    resultado = calcularMedia(N);
    printf("%.1f\n",resultado);

    return 0;
}
