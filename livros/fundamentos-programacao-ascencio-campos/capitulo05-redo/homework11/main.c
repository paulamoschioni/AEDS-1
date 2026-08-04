#include <stdio.h>
#include <stdlib.h>

void infoCarro (int valor)
{
    // Declarando variaveis
    float valorF = 0, valorP = 0;
    int qtdeP = 0, valorAc = 3, i;


    // Criando tabela
    printf("QTDE DE PARCELAS:\tVALOR DA PARCELA:\tVALOR FINAL:");

    for (i = 0; i <= 9; i++)
    {
        if (0 == i)
        {
            valorF = valor * 0.8;
            printf("\n%d\t\t\t%.2f\t\t\t%.2f\n",qtdeP,valorP,valorF);
        }
        if (1 <= i)
        {   /*atualizado valores*/
            qtdeP += 6;
            valorAc += 3;
            valorF = valor *(1 + (valorAc/100.0));
            valorP = valorF / qtdeP;

            printf("\n%d\t\t\t%.2f\t\t\t%.2f\n",qtdeP,valorP,valorF);
        }
    }

}



int main()
{
    // Declarando variaveis
    int valor;

    // Recebendo valor do carro
    printf("Valor do carro: ");
    scanf("%d",&valor);

    // Acionando funcao
    infoCarro(valor);

return 0;
}
