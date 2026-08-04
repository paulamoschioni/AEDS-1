#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    int n1, n2, n3, n4;
    int *pN1 = &n1, *pN2 = &n2, *pN3 = &n3, *pN4 = &n4;
    int soma;

    // lendo, teste 1
    scanf("%d%d%d%d",pN1,pN2,pN3,pN4);      /// Aqui estou gravando os valores recebidos no endereco de pNx , que vai virar n1
    printf("Numero 1: %d\n Numero 2: %d\n Numero 3: %d\nNumero 4: %d/n",n1,n2,n3,n4);
    soma = n1 + n2 + n3 + n4;
    printf("Soma: %d\n",soma);

    printf("--------------------------------------");

    // Lendo, teste 2
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    printf("Numero 1: %d\n Numero 2: %d\n Numero 3: %d\nNumero 4: %d/n",*pN1,*pN2,*pN3,*pN4);

    return 0;
}
