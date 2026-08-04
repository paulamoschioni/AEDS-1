#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variaveis
    int cod,     // Codigo do funcionario
        nht,     // Numero de horas trabalhadas no mes
        vht,     // Valor da hora trabalhada
        sal_inicial,   // Salario inicial
        sal_final,     // Salario final
        aux_ali,       // Auxilio alimentacao
        i;   // Contador


    char turno,   // Manha, Vespertino ,Noturno
         cat;     // Operario, Gerente



    // Lendo informacoes dos 10 funcionarios
    for (i = 1; i <= 10; i++)
    {
        printf ("Codigo: ");
        scanf ("%d",&cod);
        printf ("Numero de horas trabalhadas: ");
        scanf ("%d",&nht);
        printf ("Categoria: ");
        scanf (" %c",&cat);
        printf ("Turno: ");
        scanf (" %c",&turno);
        printf("\n");





    // Calculando o valor da hora trabalhada


       if (cat == 'G')
    {
        if (turno == 'N')
        {
            vht = 81;
        }
        else if (turno == 'V' || turno == 'M')
        {
            vht = 67,5;
        }
    }



     // Calculando o salario inicial


     sal_inicial = vht * nht;




    // Calculando valor do auxilio alimentacao

        if (sal_inicial < 300)
        {
         aux_ali = 0.2 * sal_inicial;
        }
        else if (300 <= sal_inicial && sal_inicial <= 600)
        {
         aux_ali = 0.15 * sal_inicial;
        }
        else if (sal_inicial > 600)
        {
         aux_ali = 0.05 * sal_inicial;
        }



     // Calculando salario final
     sal_final = sal_inicial + aux_ali;



     // Tabela que mostra o codigo, nht, vht, sal_inicial, aux_ali, sal final

         printf ("\nCODIGO\t\t NHT\t\t VHT\t\t SAL_I\t\t AUX_ALI\t\t SAL_F\t\t\n");
         printf ("\n%d\t\t\t %d\t\t\t %d\t\t\t %d\t\t\t %d\t\t\t %d\t\t\t\n",cod,nht,vht,sal_inicial,sal_final);

    }


    return 0;
}
