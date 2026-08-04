#include <stdio.h>
#include <stdlib.h>

int somaEntre(int N1, int N2)
{
    // Declarando variaveis
    int soma = N2, i, entre = 0;


    // Laco para somar
    for (i =  ; i <= N1; i++)
    {
      entre += N2--;
      soma += entre;
    }

    return soma;
}


int main()
{
    // Declarando variveis
    int resultado, N1, N2;

    // Lendo N1 e N2
    printf("N1, N2: ");
    scanf("%d%d",&N1,&N2);

    // Acionando procedimento com  resultado
    resultado = somaEntre(N1,N2);
    printf("Soma dos numeros entre: %d\n",resultado);

    return 0;
}


