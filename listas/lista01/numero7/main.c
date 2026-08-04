#include <stdio.h>
#include <stdlib.h>

int main()
{

    int L;          // Quantidade de números da sequência
    int a = 1, b = 1, c;   // Variáveis da sequência de Fibonacci

    //printf("Digite a quantidade de termos: ");
    scanf("%d", &L);

    // Imprime os dois primeiros termos
    printf("%d %d ", a, b);

    // Loop para calcular os próximos termos
    for(int i = 3; i <= L; i++) {

        c = a + b;   // Próximo termo é a soma dos dois anteriores
        printf("%d ", c);

        // Atualiza os valores para continuar a sequência
        a = b;
        b = c;
    }

    return 0;
}
