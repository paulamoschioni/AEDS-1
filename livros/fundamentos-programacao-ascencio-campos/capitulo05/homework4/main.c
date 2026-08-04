#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    // Declarando variaveis
    int cont = 14,        // Contador, ou seja, ate o numero 5
        cod_cid,     // Codigo cidade
        n_veic,      // Numero de veiculos de passeio
        n_acid,      // Numero de acidentes com vitimas
        cod_maior,   // Indice maior de acidentes
        cod_menor,   // Indice menor de acidentes
        soma_acid = 0,   // Soma de acidentes
        menor = -1,       // Definindo o menor numero de acidentes
        maior = INT_MAX,  // Definindo o maior numero de acid
        total_acid;
    float media_veic,     // Media de veiculos entre as cidades
         media_acid;      // Media de acidentes entre cidades


    // Recebendo valores

    while (cont <= 5)
    {
    printf ("Digite o codigo da cidade %d: ",cont);
    scanf ("%d",&cod_cid);
    printf ("Digite o numero de veiculos da cidade %d: ",cont);
    scanf ("%d",&n_veic);
    printf ("Digite o n de acidentes da cidade %d: ",cont);
    scanf ("%d",&n_acid);
    cont++;
    }




    // Definindo o maior e o menor indice de acidentes
    if (n_acid > maior)
    {
     // guardando na variavel maior, os numeros de acidentes
    maior = total_acid;
    cod_maior = cod;

    }

    if (total_acid < menor)
    {
     //
    }


    // Media de acidentes das cidades
    soma_acid = (n_acid
    media_acid = soma_acid/5;










    return 0;
}
