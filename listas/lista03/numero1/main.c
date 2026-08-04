#include <stdio.h>
#include <stdlib.h>

// Criando procedimento para ler notas
void lerNotas (int nota1, int nota2, int nota3, char letra)
{
    float mediaA, mediaP;

    /*Calcular media aritmetica*/
    if (letra == 'A')
    {
    mediaA =(float) (nota1 + nota2 + nota3)/3;
    printf("%.2f\n",mediaA);
    }

    /* Calcular media poderada*/
    else if (letra == 'P')
    {
    mediaP = (float) (nota1*5 + nota2*3 + nota3*2)/10;
    printf("%.2f\n",mediaP);
    }
}

int main ()
{
  // Declarando variaveis
  int nota1, nota2, nota3, i;
  char letra;
  int N;// Numero de alunos

  // Recebendo numero de alunos
    scanf("%d",&N);

  //Criando grande laco
  for (i = 1; i <= N; i++)
  {
    scanf("%d",&nota1);
    scanf("%d",&nota2);
    scanf("%d",&nota3);
    scanf(" %c",&letra);
    lerNotas(nota1, nota2, nota3, letra);
  }
  return 0;


}

