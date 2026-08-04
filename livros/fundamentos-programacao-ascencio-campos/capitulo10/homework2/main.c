#include <stdio.h>
#include <stdlib.h>
typedef struct Tipos{
    int codigo;
    char descricao[30];
} tipos;

typedef struct Servicos{
    int numeroS;        /// 1=pintura, 2=jardinagem, 3=faxina, 4=reforma em geral
    float valorS;
    int codigoS;
    int codigoC;
} servico;

int main()
{
    servico serv[30][3];
    int opcao;
    tipos tps[4];


    //MENU de opcoes
    printf("MENU:\n");
    printf("1-Cadastrar os tipos de servicos\n");
    printf("2-Cadastrar os servicos prestados\n");
    printf("3-Mostrar os servicos prestados\n");
    printf("4-Mostrar os servicos prestados dentro de um intervalo de valor\n");
    printf("5-Mostrar relatorio geral(separado por dia), que exiba, inclusive, a descricao do tipo do servico\n");
    printf("6-Finalizar\n");

    printf("Digite a opcao desejada: ");
    scanf("%d",&opcao);

    do {
    switch (opcao){
    case 1:


    for(int s = 0; s < 4; s++){
        scanf("%d",&tps[s].codigo);
        scanf(" %[^\n]",tps[s].descricao);
    }
    break;

    case 2:
    for (int i = 0; i < 30; i++){
        printf("Digite as informacoes do dia %d:\n",i+1);
        for(int j = 0; j < 3; j++){
        printf("Digite o servico %d:",(j+1));
        scanf("%d",&serv[i][j].numeroS);
        scanf("%f",&serv[i][j].valorS);
        scanf("%d",&serv[i][j].codigoS);
        scanf("%d",&serv[i][j].codigoC);
        }
    }
    break;
    case 3:
    int dia;
    printf("Digite o numero do dia em que deseja consultas infos: ");
    scanf("%d",&dia);
    for(int k = 0; k < 3; k++){
        printf("Numero do servico: %d\nValor: %.2f\nCodigo do servico: %d\nCodigo do cliente: %d\n",serv[dia-1][k].numeroS, serv[dia-1][k].valorS, serv[dia-1][k].codigoS, serv[dia-1][k].codigoC);
    }

    break;

    case 4:
    int min, max;
    printf("Digite um intervalo de valores: ");
    scanf("%d%d",&min,&max);
    for(int d =(min-1); d < max; d++){
            for(int o = 0; o < 3; o++){
        printf("%d",serv[d][o].numeroS);
        printf("%f",serv[d][o].valorS);
        printf("%d",serv[d][o].codigoS);
        printf("%d",serv[d][o].codigoC);
      }
    }
    break;
    case 5:
    for(int y = 0; y < 30; y++){
            printf("DIA %d",y+1);
            printf("N SERVICO:\t |VALOR DO SERVICO: |CODIGO DE SERVICO: |DESCRICAO:\t |CODIGO DO CLIENTE:");
        for (int x = 0; x < 3; x++){
            printf("%d\t\tR$%.2f\t%d\t\t",serv[y][x].numeroS,serv[y][x].valorS,serv[y][x].codigoS);
            if(serv[y][x].codigoS == 1) printf("Pintura\t");
            if(serv[y][x].codigoS == 2) printf("Jadinagem\t");
            if(serv[y][x].codigoS == 3) printf("Faxina\t");
            if(serv[y][x].codigoS == 4) printf("Reforma em geral\t");
            printf("%d",serv[y][x].codigoC);
        }
    }
    break;



    }
    scanf("%d",&opcao);
    } while (opcao != 6);
    return 0;
}
