#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ContaBancaria{
    int numero;
    char nome[30];
    int saldo;
} contaB;

int main()
{
    contaB cnt[15];
    int op, menor, m;
    char procura[30];

    printf("MENU:\n");
    printf("1-Cadastrar contas\n");
    printf("2-Visualizar todas as contas de determinado cliente\n");
    printf("3-Excluir conta com menor saldo\n");
    printf("4- Sair\n");
    printf("Digite a opcao desejada: \n");
    scanf("%d",&op);

    do{
    switch (op){
    case 1:
    for(int i = 0; i < 15; i++){
        scanf("%d",&cnt[i].numero);
        scanf(" %[^\n]",cnt[i].nome);
        scanf("%d",&cnt[i].saldo);
    }
    break;
    case 2:
    // Percorrer todo o vetor
    printf("Digite o nome do cliente desejado: ");
    gets(procura);

    for (int j = 0; j < 15; j++){
        if(strcmp(cnt[j].nome,procura)== 0){    // Se o nome for igual, printa infos
            printf("Numero: %d\nSaldo: %d\n",cnt[j].numero,cnt[j].saldo);
        }
    }
    break;
    case 3:
    for (int k = 0; k < 15; k++){
         if(k == 0) {menor = cnt[0].saldo;
            k = 0;
         }
         else {
                if(cnt[k].saldo < menor)
                menor = cnt[k].saldo;
                m = k;
          }
        }
      }
    } while (op!= 4);
    return 0;
}
