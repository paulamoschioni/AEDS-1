#include <stdio.h>
#include <stdlib.h>

int main()
{
// Declarando variaveis
    int
    i, nota1,
        nota2,
        soma_notas,    // Somas das notas 2 e 1
        media,
        nAPR,          //  Contador de Alunos aprovados
        nREP,          // Contador de aluos reprovados
        nEXA;          // Contador de alunos em exame



// Recebendo valores dos 6 alunos
    for (i = 1 ; i <= 6 ; i++)
    {
      printf("ALUNO %d:\n",i);
      printf("Digite a nota 1 e a nota 2: ");
      scanf("%d\n",&nota1,&nota2);


    }

    return 0;
    }
