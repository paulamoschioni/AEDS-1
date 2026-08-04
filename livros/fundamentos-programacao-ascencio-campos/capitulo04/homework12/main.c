#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando as variaveis
int     salat, // Salario atual
        cod,   // Codigo correspondente ao cargo de um funcionario
        cargo, // Cargo de acordo com o codigo
        novosal; // Novo salario


    // Recebendo valores
    printf ("Digite o codigo do seu cargo:  ");
    scanf ("%d",&cod);
    printf ("Digite o seu salario atual: ");
    scanf ("%d",&salat);

    // Mostrar o cargo
    switch (cod)
    {
        case 1:
        printf ("O cargo e: Escrituario\n");
        printf ("O aumento do salario e de 50%%.\n");
        novosal = 1.5*(salat);
        printf ("O novo salario e: %d",novosal);
        break;

        case 2:
        printf ("O cargo e: Secretario\n");
        printf ("O aumento do salario e de 35%%.\n");
        novosal = 1.35*(salat);
        printf ("O novo salario e: %d\n",novosal);
        break;

        case 3:
        printf ("O cargo e: Caixa \n");
        printf ("O aumento do salario e de 20%%.\n");
        novosal = 1.20*(salat);
        printf ("O novo salario e: %d\n",novosal);
        break;

        case 4:
        printf ("O cargo e: Gerente \n");
        printf ("O aumento do salario e de 10%%.\n");
        novosal = 1.10*(salat);
        printf ("O novo salario e: %d\n",novosal);
        break;

        case 5:
        printf ("O cargo e: Diretor \n");
        printf ("O aumento do salario e de 0%%.\n");
        novosal =(salat);
        printf ("O novo salario e: %d\n",novosal);
        break;

        default:
        printf ("O codigo e invalido");
    }



    // Condicionais
    return 0;
}
