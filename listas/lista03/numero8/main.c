#include <stdio.h>

// Função que calcula S
float calculaS(int N) {
    float S = 0.0;

    for(int n = 1; n <= N; n++) {
        S += (n*n + 1.0) / (n + 3.0);
    }

    return S;
}

int main() {
    int N;

    printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);

    float resultado = calculaS(N);

    printf("Valor de S = %.2f\n", resultado);

    return 0;
}
