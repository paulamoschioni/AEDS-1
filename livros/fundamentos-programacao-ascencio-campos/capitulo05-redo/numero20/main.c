#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    int opcao, nota1, nota2,nota3;
    int peso1, peso2, peso3;
    float mediaA, mediaP;

    // Criando menu
    do {
    printf("MENU: \n");
    printf("1: Media Aritmetica\n2: Media ponderada\n3: Sair");
    scanf("%d",&opcao);

    /// Condicionais para definir acoes
    if (opcao == 1)
    {
        printf("Digite duas notas: ");
        scanf("%d%d",&nota1,&nota2);
        mediaA = (nota1 + nota2) / 2.0;
        printf("%.2f\n",mediaA);
    }
    if (opcao == 2)
    {
        printf("Digite tres notas: ");
        scanf("%d%d%d",&nota1,&nota2,&nota3);
        printf("Digite os tres pesos: ");
        scanf("%d%d%d",&peso1,&peso2,&peso3);
        mediaP = ((nota1* peso1) + (nota2* peso2) + (nota3 * peso3))/ (peso1 + peso2 + peso3);
        printf("%.2f\n",mediaP);
    }

    } while (opcao != 3);
    return 0;
}
