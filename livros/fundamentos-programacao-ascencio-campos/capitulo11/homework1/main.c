#include <stdio.h>
#include <stdlib.h>
typedef struct AlunosDados{
    int numero;
    char nome[20];
    int nota1, nota2;
}aluno;

int main()
{
    aluno al;
    FILE *arquivo = fopen("Alunos.dat","w");
    if(arquivo == NULL) printf("ERRO na abertura do arquivo\n");

    fclose(arquivo);
    return 0;
}
