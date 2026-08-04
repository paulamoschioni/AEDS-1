#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int imp,     // Impostos
        novosal, // Novo salario
        clas,    // Classificacao
        num,      // Numero escolhido no menu
        sal;     // Salario de um funcionario



    // Criando menu
    printf ("MENU:\n");
    printf ("1- Imposto\n");
    printf ("2- Novo salario\n");
    printf ("3- Classificacao\n");
    printf ("Digite a opcao desejada: ");
    scanf ("%d",&num);

    // Condicional de acordo com o escolhido no menu
    switch (num)
    {
        case 1:
        printf ("Digite seu salario: ");
        scanf ("%d",&sal);
        if (sal < 500)
        {

             imp = sal * 0.05;
             printf ("Impostos = %d\n",imp);
        }

        else if (sal >= 500 && sal <= 850)
        {
             imp = sal * 0.1;
             printf ("Impostos = %d\n",imp);
        }

        else if (sal > 850)
        {
             imp = sal * 0.15;
             printf ("Impostos = %d\n",imp);
        }
        break;


        case 2:
        printf ("Digite seu salario: ");
        scanf ("%d",&sal);
        if (sal > 1500)
        {
          novosal = sal + 25;
          printf ("O novo salario e: %d\n",novosal);
        }

        else if (sal >= 750 && 1500 >= sal)
        {
          novosal = sal + 50;
          printf ("O novo salario e: %d\n",novosal);
        }


         else if (sal >= 450 && 750 > sal)
        {
          novosal = sal + 75;
          printf ("O novo salario e: %d\n",novosal);
        }

         else if (sal < 450)
        {
          novosal = sal + 100;
          printf ("O novo salario e: %d\n",novosal);
        }
        break;


        case 3:
        printf ("Digite seu salario: ");
        scanf ("%d",&sal);

        if (sal <= 700)
        {
            printf ("Mal remunerado\n");
        }

        else if (sal > 700)
        {
            printf ("Bem remunerado\n");
        }
        break;

        default:
        printf  ("Opcao invalida\n");







    }





    //
    return 0;
}
