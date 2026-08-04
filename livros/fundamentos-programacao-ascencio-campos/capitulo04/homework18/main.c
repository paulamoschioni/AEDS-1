#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int   x,y,z;


    // Recebedo valores

    printf("Digite um valor para x, y e z: ");
    scanf ("%d%d%d",&x,&y,&z);

    // Condicional
    if (x == y && y == z)
    {
        printf ("Triangulo equilatero\n");
    }

    else if (x == y || y == z || x ==z)
    {
        printf ("Triangulo isoceles\n");
    }

    else if (x != y && y != z)
    {
        printf ("Triangulo escaleno\n");
    }




    return 0;
}
