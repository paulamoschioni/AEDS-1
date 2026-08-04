#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 06/06/26
Contexto: Uma biblioteca com 1500 livros divididos em 3 áreas (exatas, humanas, biológicas).
Cada livro tem: código, doação (S/N), nome, autor, editora e área. O programa deve fazer duas coisas:
Cadastro — ler os dados dos 1500 livros e armazená-los em 3 vetores separados, um por área.
Consulta — o usuário digita um código e uma área, o programa busca e exibe as informações do livro, ou avisa que não existe. Repete até digitar -1.
*/
typedef struct InfoLivros{
    int codigo;
    char doacao;
    char nomeOb[30];
    char nomeAu[30];
    char nomeEd[30];
    char area[30];

}Livros;

int main()
{
    Livros exa[1500], bio[1500], hum[1500];
    int opcao, codigo, achou = 0;

    // Exatas
    for (int i = 0; i < 1500; i++){
        scanf("%d",&exa[i].codigo);
        scanf(" %c",&exa[i].doacao);
        scanf(" %[^\n]
              ",(exa[i].nomeOb));
        scanf(" %[^\n]",(exa[i].nomeAu));
        scanf(" %[^\n]",(exa[i].nomeEd));
        scanf(" %[^\n]",(exa[i].area));
    }

    // Humanas
    for (int p = 0; p < 1500; p++){
        scanf("%d",&hum[p].codigo);
        scanf(" %c",&hum[p].doacao);
        scanf(" %[^\n]",(hum[p].nomeOb));
        scanf(" %[^\n]",(hum[p].nomeAu));
        scanf(" %[^\n]",(hum[p].nomeEd));
        scanf(" %[^\n]",hum[p].area);
    }

    // Biologicas
    for (int j = 0; j < 1500; j++){
        scanf("%d",&bio[j].codigo);
        scanf(" %c",&bio[j].doacao);
        scanf(" %[^\n]", bio[j].nomeOb);
        scanf(" %[^\n]", bio[j].nomeAu);
        scanf(" %[^\n]", bio[j].nomeEd);
        scanf(" %[^\n]", bio[j].area);
    }

    // Permitindo consulta a patir do codigo
    scanf("%d",&opcao);
    while(opcao!= -1){

        achou = 0;  // Zera toda vez que recomecar o laco
        scanf("%d",&codigo);

    for (int k = 0; k < 1500; k++){    /// Procura em exatas primeiro
        if (exa[k].codigo == codigo) {
            printf("Area: Exatas");
            achou = 1;
        }
}
    if(achou == 0){
        for (int h = 0; h < 1500; h++){    /// Procura em humanas segundo
        if (hum[h].codigo == codigo) {
            printf("Area: Humanas");
            achou = 1;
        }
    }
}
    if(achou == 0){
        for (int l = 0; l < 1500; l++){    /// Procura em humanas segundo
        if (bio[l].codigo == codigo) {
            printf("Area: Biologicas");
            achou = 1;
        }
    }
}
    scanf("%d",&opcao);
    }

    return 0;
}
