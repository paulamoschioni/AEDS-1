#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*AUTORA: Paula Moschioni
DATA: 31/05/2026
Implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a
quantidade de caracteres ‘a’ que estão presentes nele. Imprima a quantidade na tela.
*/
int main()
{
     FILE *arquivo = fopen("saida.txt","r");
     if(arquivo == NULL) printf("ERRO!");

     int cont = 0;
     char carac;

     while(fscanf(arquivo,"%c",&carac)== 1){
        if (carac == 'a' || carac == 'A') cont++;
     }
     printf("%d",cont);
     fclose(arquivo);
    return 0;
}
