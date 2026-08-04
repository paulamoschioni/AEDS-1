#include <stdio.h>
#include <stdlib.h>

// Criando procedimento para receber media final de um aluno
void checarConceito ()
{
    int nota,i, N;

    scanf("%d",&N);

    for (i = 1; i <= N; i++)
    {   /* Recebendo valores*/
       // printf("Nota: ");
        scanf("%d",&nota);

        /*condicional*/
        if (nota <= 39) printf ("F\n");
        else if (40 <= nota && nota <= 59) printf("E\n");
        else if (60 <= nota && nota <= 69) printf("D\n");
        else if (70 <= nota && nota <= 79) printf("C\n");
        else if (80 <= nota && nota <= 89) printf("B\n");
        else if (90 <= nota) printf("A\n");
    }

}

int main()
    {
        checarConceito();
        return 0;
    }
