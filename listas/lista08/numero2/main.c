#include <stdio.h>
#include <stdlib.h>
/*
AUTORA: Paula Moschioni
DATA: 06/06/26
Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço de
um eletrodoméstico. Desenvolver um algoritmo que permita exibir qual foi a média dos preços
cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava abaixo da
média. o telefone será lido como string
*/
    typedef struct RegistroEletros {
    char nome[20];
    char tel[15];
    float preco;
    } eletrod;

int main()
{   int t = 0;
    float mediaP, somaP = 0;
    eletrod elet[15];

    // Preenche registro
    for(int i = 0; i < 15; i++){
        gets(elet[i].nome);
        scanf("%s",&elet[i].tel[t]);
        scanf("%f",&elet[i].preco);
        somaP +=(elet[i].preco);
        t++;
    }

    // Calcula media
        mediaP = somaP / 15.0;
        printf("A media dos precos cadastrados e: %.2f\n",mediaP);
        printf("Lojas com preco abaixo da media:\n");
        for(int a = 0; a < 15; a++){
        if(elet[a].preco <= mediaP) printf("Nome: %s\n Telefone: %d\n",elet[a].nome, elet[a].tel);
    }

    return 0;
}
