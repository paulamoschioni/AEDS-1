#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int *ptra = &a, *ptrb = &b, *ptrc = &c;

    // Lendo 3 valores
    scanf("%d %d %d",&a,&b,&c);

    // Mostrando infos
    printf("Nome: 'a'\nEndereco: %p\nValor: %d\n",&a,*ptra);
    printf("Nome: 'b'\nEndereco: %p\nValor: %d\n",&b,*ptrb);
    printf("Nome: 'c'\nEndereco: %p\nValor: %d\n",&c,*ptrc);
    return 0;
}
