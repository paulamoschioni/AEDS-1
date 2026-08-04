#include <stdio.h>
#include <stdlib.h>

void opiniaoEspec ()
{
    // Declarando variaveis
    int id, op;                          /// Entrada de dados
    int i, i1 = 0, i2 = 0, i3 = 0;       /// Contadores
    int soma3 = 0;                       /// Acumuladores para idades
    float media3, perc2;                 /// Calcular

    // Criando grande laco
    for (i = 1; i <= 15; i++)
    {
        ///Recebendo valores
        printf("PESSOA %d: \n",i);
        printf("Idade: ");
        scanf("%d",&id);
        printf("Opniao: ");
        scanf("%d",&op);


        /// Condicionais para op
        switch (op)
        {
         case 1:
            i1++;
            break;
         case 2:
            i2++;
            break;
         case 3:
            i3++;
            soma3 += id;
            break;
        }

    }
    // Calculando
    printf("Quantidade de pessoas com opiniao regular: %d\n",i1);

    perc2 =  (i2 * 100) /15.0;
    printf("Percentual de pessoas com opiniao bom: %.1f\n",perc2);

    media3 = (float) soma3/ i3;
    printf("Media da idade das pessoas com opinioa otimo: %.1f\n",media3);

}

int main()
{
    opiniaoEspec();
    return 0;
}
