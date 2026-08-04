#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando as variaveis
     float   A, //variavel A
             B, //Variavel B
             C, //Variavel que representa o inverso de A
             D; //Variavel que representa o inverso de B

    // Recebendo valores
        //printf ("Digite o valor de A:");
        scanf ("%f",&A);
        //printf ("Digite o valor de B:");
        scanf ("%f",&B);

    //Trocando o valor
        C = B;
        D = A;
        printf ("%f %f\n",C,D);

    return 0;
}
