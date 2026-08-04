#include <stdio.h>
#include <stdlib.h>
/*AUTORA: Paula Moschioni
DATA: 31/05/2026
Escreva um programa que concatene o conteúdo de dois arquivos. O conteúdo dos dois arquivos
deverá ser adicionado em um terceiro arquivo
*/
int main()
{
    FILE *arq1 = fopen("primeiro.txt","r");
    FILE *arq2 = fopen("segundo.txt","r");
    FILE *arq3 = fopen("terceiro.txt","a");
    char *s1 = malloc (100*sizeof(char));
    char *s2 = malloc (100*sizeof(char));
    int i = 0, j = 0;

    while(fscanf(arq1,"%c",s1 + i)== 1){
        fprintf(arq3,"%c",*(s1+i));
        i++;
    }
    while(fscanf(arq2,"%c",s2 + j)== 1){
        fprintf(arq3,"%c",*(s2+j));
        j++;
    }
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    free(s1);
    free(s2);
    return 0;
}
