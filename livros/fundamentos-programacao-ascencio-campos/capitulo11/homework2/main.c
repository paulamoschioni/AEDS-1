#include <stdio.h>
#include <stdlib.h>
typedef struct AlunosDados{
    int numero;
    char nome[20];
    char curso[20];
    int nota1, nota2;
}aluno;

int main()
{
    FILE *arquivo = fopen("Alunos","a");

    if(arquivo == NULL) printf("ERRO\n");
    int i = 0;
    aluno *al = malloc (10*sizeof(aluno));

    scanf("%d",&(al+i)->numero);    /// Usar & pq é um campo de inteiro
    while((al+i)->numero > 0){
        scanf(" %[^\n]",(al+i)->nome);
        scanf(" %[^\n]",(al+i)->curso);
        scanf("%d",&(al+i)->nota1);
        scanf("%d",&(al+i)->nota2);

        i++;
        scanf("%d",&(al+i)->numero);
    }


    for (int j = 0; j < i; j++){
        fprintf(arquivo,"%d\n%s\n%d %d\n",(al+j)->numero,(al+j)->nome,(al+j)->nota1,(al+j)->nota2);

    }


    fclose(arquivo);
    free(al);
    return 0;
}
