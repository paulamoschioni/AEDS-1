#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int alt, base, area;

    // Criando grande laco
    do
    {  /*recebendo valores*/
    printf("Base: ");
    scanf("%d",&base);

    if (base <= 0)
    {
        printf("Dado invalido");
    }
    } while (base > 0)
    /*calcular area*/
    area = (base * alt)/ 2;
    printf("Area: %d\n",area);


 printf("Altura: ");
    scanf("%d",&alt);

    return 0;
}






