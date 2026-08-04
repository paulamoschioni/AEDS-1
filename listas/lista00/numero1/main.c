#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declarando variaveis
    int num, // Numero CDU
        c,// Centena
        d, // Dezena
        u, // Unidade
        inverso; // Numero UDC
    //Recebendo o numero
    //printf ("Digite um numero inteiro com três digitos: ");
    scanf ("%d",&num);

    //Invertendo numero
    c = num/100;
    d = (num % 100)/10;
    u = num % 10;

    //Armazendando na variavel 'inverso' e saida
    inverso = u*100 + d*10 + c;
    printf ("Invertido: %d",inverso);
    return 0;
}
