#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
AUTORA: Paula moschioni
DATA: 20/05/2026
Faça um programa para corrigir provas de múltipla escolha. Cada prova tem oito questões e cada
questão vale um ponto. O primeiro conjunto de dados a ser lido é o gabarito da prova. Os outros dados são os números dos alunos e as respostas que deram às questões. Existem dez alunos matriculados.
Calcule e mostre:
■ o número e a nota de cada aluno; e
■ a porcentagem de aprovação, sabendo-se que a nota mínima é 6.*/
void gravaGab (char gab[8]){
    FILE *arquivo;
    arquivo = fopen("GABARITO.txt","w");
    if (arquivo == NULL) printf("ERRO na abertura do arquivo");

     for (int i = 0; i < 8; i++){
        fprintf(arquivo,"%c ", gab[i]);
     }  fprintf(arquivo,"\n");

fclose(arquivo);
}


int main()
{
   // Declaracao de variaveis
   char gab[8], respAl[8][10];
   int numAl[10], notas[10] = {0}; /*Nota final por aluno*/
   int alunoA = 0;
   float porcAp;

   srand(time(NULL));


   // Recebendo gabarito
   printf("GABARITO OFICIAL: \n");
   for (int i = 0; i < 8; i++){
        gab[i] = 'a' + rand ()%4;
        printf(" %c",gab[i]);
   }
   gravaGab(gab);
   printf("\n");

   // Recebendo numero dos alunos
   printf("Digite o numero dos alunos: \n");
   for (int j = 0; j < 10; j++){
    scanf("%d",&numAl[j]);
   }

   // Recebendo respostas dos alunos
   printf("Digite a resposta dos alunos: \n");
   for (int p = 0; p < 10; p++){    /// Linha com cada aluno
    for (int q = 0; q < 8; q++) {     /// Coluna com a questao das provas
        respAl[p][q] = 'a' + rand() % 4;
       printf(" %c",respAl[p][q]);
    }
    printf("\n");
   }
printf("\n");
   // Calculando nota de cada aluno
   for (int r = 0; r < 10; r++){    /// Linha com cada aluno
    for (int s = 0; s < 8; s++) {     /// Coluna com a questao das provas
       if (respAl[r][s] == gab[s]){
        notas[r] += 1;
       }
     }
     printf("Nota final do aluno %d: %d\n",numAl[r],notas[r]);
   }

   // Porcentagem de aprovacao
   for (int z = 0; z < 10; z++){
    if (6 <= notas[z]) alunoA++;
}
   porcAp = (100*alunoA)/10.0;
   printf("%.2f%% alunos aprovados\n",porcAp);

    return 0;
}
