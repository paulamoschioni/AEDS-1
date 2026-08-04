#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando vairaveis
    int opcao,
    novosal,
    sal,
    clas;
    float imp;

    // Criando grande laco

    do
    {   /*imprimindo menu*/
        printf("MENU:\n");
        printf("1. Imposto: \n");
        printf("2. Novo salario \n");
        printf("3. Classificacao \n");
        printf("4. Finalizar o programa: \n");

        printf("Opcao: ");
        scanf("%d",&opcao);
        printf("Salario: ");
        scanf("%d",&sal);

        /*condicional*/
        switch (opcao)
        {
        case 1:
        if (sal < 500)
        {
            imp = 0.05 * sal;
            printf("Impostos: %.2f\n",imp);

        }
        else if (500 <= sal && sal <= 850)
        {
            imp = 0.1 * sal;
            printf("Impostos: %.2f\n",imp);

        }
        else
        {
            imp = 0.15 * sal;
            printf("Impostos: %.2f\n",imp);
        }
        break;

        case 2:
        if  (sal > 1500)
        {
        novosal = 25 + sal;
        printf("Novo salario: %d\n",novosal);
        }
        else if  (750 <= sal && sal <= 1500)
        {
        novosal = 50 + sal;
        printf("Novo salario: %d\n",novosal);
        }
        else if  (450 <= sal && sal < 750)
        {
        novosal = 75 + sal;
        printf("Novo salario: %d\n",novosal);
        }
        else if  (sal < 450)
        {
        novosal = 100 + sal;
        printf("Novo salario: %d\n",novosal);
        }
        break;

        case 3:
        if  (sal <= 700)
        {
            printf("Mal remunerado\n");
        }
        else
        {
            printf("Bem remunerado\n");
        }
        break;

        case 4:
        break;

        default:
            printf("Opcao invalida\n");

        }

    } while ( opcao != 4);



    return 0;
}
