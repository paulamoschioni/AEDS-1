#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula moschioni
DATA: 19/05/2026
O programa realiza reservas de passagens aéreas
de uma companhia. Cadastrar dados de 12 voos, contendo
número, origem, destino e quantidade de lugares disponíveis. Em seguida, o
um menu com as opções de consultar voos, efetuar reservas
ou sair. As consultas poderão ser feitas pelo número do voo, origem ou destino.
Ao realizar uma reserva, o sistema verificará se o voo existe e se há vagas
disponíveis, podendo confirmar a reserva, informar voo lotado ou voo inexistente.
Após cada operação, o programa retornará ao menu principal até que a opção de
saída seja escolhida.*/

int main()
{
    // Declaracao de variaveis
    int numeros[12], lugares[12];
    char origens[12][50], destinos[12][50];
    char local[30], finali[30];
    int opcao, op, voo;


    //  Lendo infos
    printf("Digite o numero de cada voo: ");
    for (int i = 0; i < 12; i++){
         scanf("%d",&numeros[i]);
        }

    printf("Digite o numero de lugares em cada voo: ");
    for (int j = 0; j < 12; j++) {
        scanf("%d",&lugares[j]);
    }

    printf("Digite a origem de cada voo: ");
    for (int k = 0; k < 12; k++) {  /// 12 VOOS
        scanf(" %[^\n]",&origens[k]);     /// Lendo com [^\n] para considerar espacos
    }

    printf("Digite o destino de cada voo: ");
    for (int p = 0; p < 12; p++) {
        scanf(" %[^\n]",&destinos[p]);
    }

    do {
        printf("MENU: \n");
        printf("1-Consultar");
        printf("2-Efetuar reserva");
        printf("3-Sair");

        scanf("%d",&opcao);

        switch (opcao){
    case 1: /*CONSULTAR*/
       printf("1-Por numero de voo\n");
       printf("2-Por origem\n");
       printf("3-Por destino\n");
       printf("Digite sua opcao: ");
       scanf("%d",&op);
            switch(op){
            case 1:
                printf("Digite o numero do voo: ");
                scanf("%d",&voo);
                for (int h = 0; h < 12; h++){   // Consultar por numero de voo
                    if (numeros[h] == voo){
                        printf("Esse voo tem %d lugares restantes\n",lugares[h]);
                    }
                }
            case 2:
                int achou = 0;
                scanf(" %[^\n]",local);
                    for (int f = 0; f < 12; f++){   // Consultar por origem (local)
                            achou = 1;
                            if ( strcmp(origens[f],local)== 0){
                        printf("Esse voo tem %d lugares restantes\n",lugares[f]);
                    } if (achou == 0) printf("Voo inexistente");
                }
             case 3:
                 int tem = 0;
                scanf(" %[^\n]",finali);
                for (int g = 0; g < 12; g++){
                if (strcmp(destinos[g],finali)== 0){     // Consultar por origem (local)
                        tem = 1;
                        printf("Esse voo tem %d lugares restantes\n",lugares[g]);
                    }
                } if (tem == 0) printf("Voo inexistente");

            }
    break;

    case 2:/*Efetuar reserva*/
        printf("Digite o numero do voo desejado: ");
        scanf("%d",&voo);
        int existe = 0;
        for (int a = 0; a < 12; a++){   // Consultar por numero de voo
                    if (numeros[a] == voo){
                    existe = 1;
                    if (lugares[a]> 0){
                        printf("Reserva confirmada!");
                    } else if (lugares[a]== 0){
                        printf("Voo lotado!");}
                    }
                }  if (existe == 0) printf("Voo inexistente");

    break;
    }
    }while (opcao != 3);
    return 0;
}
