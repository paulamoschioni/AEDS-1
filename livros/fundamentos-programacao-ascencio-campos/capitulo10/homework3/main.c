#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Clientes{
    int cod_cli;    // Codigo do cliente
    char nome[30];  // Nome od cliente
    char telef[20]; // Telefone do cliente
    char ender[30]; // Enderteco do cliente
} cliente;

typedef struct Documentos{
    int numD;   // Numero do doc
    int codigoC;    // Codigo do cliente
    char dataV[20];      // Data de Vencimento
    char dataP[20];      // Data de pagamento
    float valor;    // Valor
    float juros;    // Juros
} documento;

int main()
{
    int op, i = 0, j = 0, code, p = 0, novaposi, numdoc, novapos;
    int find = 0, findF, newpos, coo, aqui = 0, aquiL;
    char dtI[20], dtF[20];
    cliente *cli = malloc (15*sizeof(cliente));
    documento *doc = malloc (30*sizeof(documento));

    printf("MENU:\n");
    printf("1-Cadastrar clientes\n");
    printf("2-Cadastrar documentos\n");
    printf("3-Excluir clientes\n");
    printf("4-Excluir documentos individuais\n");
    printf("5-Excluir documentos por periodo\n");
    printf("6-Alterar as informacoes sobre os clientes\n");
    printf("7-Mostrar total de documentos de determinado cliente\n");
    printf("8- Sair\n");
    scanf("%d",&op);

    do{
    switch (op){
    case 1:
    scanf("%d",&(cli+i)->cod_cli);
    while((cli+i)->cod_cli != 0){
        scanf(" %[^\n]",(cli+i)->nome);
        scanf(" %[^\n]",(cli+i)->telef);
        scanf(" %[^\n]",(cli+i)->ender);

        i++;
        scanf("%d",&(cli+i)->cod_cli);
    }
    break;


    case 2:
    scanf("%d",&(doc+j)->numD);
    while((doc+j)->numD != 0){
    scanf("%d",&(doc+j)->codigoC);
    scanf("%s",&(doc+j)->dataV);
    scanf("%s",&(doc+j)->dataP);
    scanf("%f",&(doc+j)->valor);

    if(strcmp(((doc+j)->dataP) ,((doc+j)->dataV)) > 0) { // Se dataP > dataV
        (doc+j)->juros = 0.05 *(doc+j)->valor;
    } else {
        (doc+j)->juros = 0;
    }
    j++;
    scanf("%d",&(doc+j)->numD);
    }
    break;


    case 3:
    printf("Digite o codigo do cliente a ser excluido: ");
    scanf("%d",&code);
    int achou = 0, achouP;
    for (int p = 0; p < j && achou == 0; p++){
       if((doc+p)->codigoC == code) {
        achou = 1;
        achouP = p;
    }
    }
    if (achou == 0) printf("Cliente nao encontrado\n");
    else {
    // Para excluir o cliente:
    for(int e = (achouP+1); e < i; e++){
        novaposi = e - 1;       // Atualizando um lugar no vetor a menos
        strcpy((cli+novaposi)->nome,(cli+e)->nome);
        strcpy((cli+novaposi)->telef,(cli+e)->telef);
        strcpy((cli+novaposi)->ender,(cli+e)->ender);
    }
    i--; // Atualiza o numero de cliente
    }
    break;


    case 4:
    printf("Digite o numero do documento a ser excluido: ");
    scanf("%d",&numdoc);
    int acho = 0, achoG;
    for (int g = 0; g < j && achouG == 0; g++){
       if((doc+g)->numD == numdoc) {
        acho = 1;
        achoG = g;
      }
    }
    if (acho == 0) printf("Documento nao encontrado\n");
    else {
        // Para excluir o documento
    for(int w = (achoG+1); w < j; w++){
        novapos = w - 1;       // Atualizando um lugar no vetor a menos
    (doc+novapos)->numD = (doc+w)->numD;
    (doc+novapos)->codigoC = (doc+w)->codigoC;
    strcpy((doc+novapos)->dataV, (doc+w)->dataV);
    strcpy((doc+novapos)->dataP, (doc+w)->dataP);
    (doc+novapos)->valor = (doc+w)->valor;
    (doc+novapos)->juros = (doc+w)->juros;
    }
    j--; // Atualiza o numero de documentos
    }
    break;

    case 5:
    printf("Digite a data inicial e data final do periodo desejado: ");
    scanf("%s",dtI);
    scanf("%s",dtF);

    for(int f = 0; f < j && find == 0;f++){
    if (strcmp(dtI,(doc+f)->dataV) >= 0 && strcmp((doc+f)->dataV,dtF) <= 0){
        find = 1;
        findF = f;
    }
    } if (find == 0) printf("Nenhum documento nesse periodo.\n");
    else {
    // Para excluir o documento
    for(int b = (findF+1); b < j; b++){
        newpos = b - 1;       // Atualizando um lugar no vetor a menos
    (doc+ newpos)->codigoC = (doc+b)->codigoC;
    strcpy((doc+newpos)->dataV,(doc+b)->dataV);
    strcpy((doc+newpos)->dataP,(doc+b)->dataP);
    (doc+newpos)->valor = (doc+b)->valor;
    }
    j--; // Atualiza o numero de documentos
    }
    break;

    case 6:
    printf("Digite o codigo do cliente: ");
    scanf("%d",&coo);

    for(int l = 0; l < j && aqui == 0;l++){
    if ((cli+l)->cod_cli == coo){
        aqui = 1;
        aquiL = l;
    }
    } if (aqui == 0) printf("Nenhum codigo de cliente encontrado.\n");
    else{
        scanf("%d",&(cli+aquiL)->cod_cli);
        scanf(" %[^\n]",(cli+aquiL)->nome);
        scanf(" %[^\n]",(cli+aquiL)->telef);
        scanf(" %[^\n]",(cli+aquiL)->ender);
    }
    break;

    case 7:
        printf("%d documentos\n",j);
    break;
    }
     scanf("%d", &op);

    } while (op != 8);




    free(doc);
    free(cli);
    return 0;
}
