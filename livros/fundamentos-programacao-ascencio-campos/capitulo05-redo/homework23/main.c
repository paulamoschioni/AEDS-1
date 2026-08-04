#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int opcao, sal, n_meses;
    float novosal, ferias, decimoT;



    // Criando menu
    do { /// Construindoc corpo do menu
        printf("MENU: \n");
        printf("1: Novo salario\n");
        printf("2: Ferias\n");
        printf("3: Decimo terceiro\n");
        printf("4: Sair\n");

        scanf("%d",&opcao);

        if (opcao == 1)
        {
         printf("Salario: ");
         scanf("%d",&sal);

         if (sal< 210)
         {novosal =(float) 1.15 * sal;}
         else if (210 <= sal && sal <= 600)
         {novosal =(float) 1.1 * sal;}
         else {novosal = (float) 1.05 * sal;}

         printf("Novo salario: %.2f\n",novosal);
        }

         else if (opcao == 2)
         {
          printf("Salario: ");
          scanf("%d",&sal);
          printf("Numero de meses: ");
          scanf("%d",&n_meses);

          ferias = (float) sal + (sal/3.0);
          printf("Ferias: %.2f\n",ferias);
         }

         else if (opcao == 3)
         {
          printf("Salario: ");
          scanf("%d",&sal);
          printf("Numero de meses: ");
          scanf("%d",&n_meses);

          decimoT = (float) sal * (n_meses / 12.0);
          printf("%f\n",decimoT);
         }
         scanf("%d",&opcao);

       } while (opcao != 4);














    return 0;
}
