#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int N,    // Quantidade de numeros a serem digitados pela pessoa
        cont = 1,   // Contador
        num,   // Numeros a serem lidos
        fat = 1;  // fatorial


    // Recebendo valores
    printf("Digite um valor: ");
    scanf("%d",&N);


    // Repeticao
    printf ("VALOR LIDO:\t\t\t FATORIAL DESSE VALOR:\t\t\t\n");



        while (cont <= N)
        {

        printf ("Digite um numero: ");
        scanf ("%d",&num);

            fat = 1;
            while(num > 1)
            {
            fat = num*fat;
            num--;
            }

        printf ("%d\t\t\t %d\t\t\t\n",num,fat);
        cont++;

        }









    return 0;
}
