#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, opcao, resultado;


    // Rcebendo valores
    printf ("Digite o valor de 2 numeros: ");
    scanf ("%d%d",&x,&y);
    printf ("Digite uma opcao: ");
    scanf ("%d",&opcao);

    // condicional
    switch (opcao)
    {
        case 1:
        resultado = (x + y)/2;
        printf ("Resultado = %d\n",resultado);
        break;

        case 2:
        if (x > y)
        {
            resultado = x - y;
        }
        else
        {
            resultado = y - x;
        }
        printf ("Resultado = %d\n",resultado);
        break;

        case 3:
        resultado = x * y;
        printf ("Resultado = %d\n",resultado);
        break;

        case 4:
        resultado = x / y;
        printf ("Resultado = %d\n",resultado);
        break;

        default:
        printf ("Opcao invalida");
    }









    return 0;
}
