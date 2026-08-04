#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracoes
    int qtdeVeic;
    float valorALu, fatura, multa, manut;
    FILE *arquivo;

    // Abre arquivo
    arquivo = fopen("resultado.txt","w");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }

    //Receber quantidades
    scanf ("%d%f",&qtdeVeic,&valorALu);

    // Calcular fatura
    int carrosAlugadosMes = qtdeVeic / 3;
   fatura = carrosAlugadosMes * valorALu * 12;
    // Calcular multas
  multa = (carrosAlugadosMes * 0.1) * (valorALu * 0.2);

    // Calcular manutecao
    manut = (qtdeVeic * 0.02) * 600.0;

    // Printando na tela E o arquivo
    printf("%.2f\n%.2f\n%.2f\n",fatura,multa,manut);
    fprintf(arquivo,"%.2f\n%.2f\n%.2f\n",fatura,multa,manut);


    fclose(arquivo);
    return 0;
}
