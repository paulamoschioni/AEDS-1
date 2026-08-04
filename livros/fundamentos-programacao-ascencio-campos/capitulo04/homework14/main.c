#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Determinando variaveis
    int sal,      // Salario de um funcionario
        faixa,    // Faixa
        novosal;  // Novo salario



    //Recebendo valores
    printf ("Digite o salario atual:");
    scanf ("%d",&sal);


    // Calculando o novo salario
    if (sal <= 300)
    {
        faixa =1;
    }
    else if (300 < sal && sal <=500)
    {
        faixa =2;
    }
     else if (500 < sal && sal <=700)
    {
        faixa =3;
    }
     else if (700 < sal && sal <=800)
    {
        faixa =4;
    }
     else if (800 < sal && sal <=1000)
    {
        faixa =5;
    }
     else if (1000 < sal)
    {
        faixa =6;
    }


    switch (faixa)
    {
    case 1:
    novosal = 1.5 * sal;
    printf ("Novo salario: %d\n",novosal);
    break;
    case 2:
    novosal = 1.4 * sal;
    printf ("Novo salario: %d\n",novosal);
    break;
    case 3:
    novosal = 1.3 * sal;
    printf ("Novo salario: %d\n",novosal);
    break;
    case 4:
    novosal = 1.2 * sal;
    printf ("Novo salario: %d\n",novosal);
    break;
    case 5:
    novosal = 1.1 * sal;
    printf ("Novo salario: %d\n",novosal);
    break;
    case 6:
    novosal = 1.05 * sal;
    printf ("Novo salario: %d\n",novosal);
    break;
}

    return 0;
}
