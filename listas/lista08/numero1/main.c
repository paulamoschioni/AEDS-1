#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula Moschioni
DATA: 06/06/26
Dados os seguintes campos de um registro: nome, dia de aniversário e mês de aniversário, desenvolver um algoritmo que mostre em cada um dos meses do ano quem são as pessoas que fazem
aniversário, exibir também o dia. Considere um conjunto de 40 pessoas.
*/
    typedef struct dataNasc {
        int dia;
        int mes;
    } data;

    typedef struct RegistroAniv {
        char nome[30];
        data dt;
    } pessoa;

    int main()
    {
    pessoa pss[40]; /// Espaco para info de 40 pessoas

    // Preenchendo struct
    for (int i = 0; i < 40; i++){
    printf("PESSOA %d\n",i+1);
    printf("Digite o nome:\n ");
    gets(pss[i].nome);
    printf("Digite o dia e o mes do nascimento:\n");
    scanf("%d",&pss[i].dt.dia);
    scanf("%d",&pss[i].dt.mes);
    }

    for(int j = 0; j < 40; j++){
        printf("%s %d %d\n",pss[j].nome, pss[j].dt.dia, pss[j].dt.mes);
    }

    return 0;
    }
