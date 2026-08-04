#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int anona, idade;
    char aniv;


    // Recebendo valores
    //printf ("Digite o seu ano de nascimento: ");
    scanf ("%d",&anona);


    // Pegunta sobre idade
    //printf ("Vc ja fez aniversario esse ano?: ");
    scanf (" %c",&aniv);



    // Condicional para definir idade
    if (aniv == 'S' ||  aniv == 's')
    {
        idade = 2026 - anona;
        printf ("%d\n",idade);
    }
    else if (aniv == 'N' || aniv == 'n')
    {
        idade = 2026 - anona - 1;
        printf ("%d\n",idade);
    }

    //Condicional para definir se pode dirigir
    if (idade >= 18)
    {
        printf ("Pode dirigir");
    }
    else if (idade < 18)
    {
         printf ("Nao pode dirigir");
    }
    return 0;
}
