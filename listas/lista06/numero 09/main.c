#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Declaracao de variaveis
   int matri, tel, opcao;
   FILE *arquivo;
   FILE *entrada;

   // Arquivo
   arquivo = fopen("saida.txt","w");

        if (arquivo == NULL){
        printf("ERRO: o arquivo SAIDA.TXT nao abriu");}


   // Menu
   scanf("%d",&opcao);

   switch (opcao){
   case 1:
      scanf("%d%d", &matri, &tel);

      while (matri != 0 && tel != 0){
      fprintf(arquivo, "%d %d\n", matri, tel);
      scanf("%d%d", &matri, &tel);

      }
       break;

   case 2:
        entrada = fopen("entrada.txt","r");
        if (entrada == NULL){
        printf("ERRO: o arquivo ENTRADA.TXT nao abriu");
    }
        while(fscanf(entrada,"%d%d",&matri,&tel)!= EOF){     /// while eof
          fprintf(arquivo,"%d %d\n",matri,tel);
      }
      fclose(entrada);
      break;
   }

   fclose(arquivo);

   return 0;
}
