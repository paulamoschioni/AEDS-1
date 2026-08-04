#include <stdio.h>
#include <stdlib.h>

int main() {

    int L;          // Limite máximo
    int a = 1, b = 1, c;

    //printf("Digite o valor limite: ");
    scanf("%d", &L);

    // Enquanto o número for menor que L
    while(a < L) {

        printf("%d ", a);

        c = a + b;  // Próximo termo da sequência
        a = b;
        b = c;
    }

    return 0;
}
