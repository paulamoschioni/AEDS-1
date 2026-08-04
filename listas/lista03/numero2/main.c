#include <stdio.h>
#include <stdlib.h>

// Procedimento para calcular media
void pesquisa()
{/* Declarando variaveis*/
    float sal,
          media,        // Media de salario da populacao
          acu_sal = 0;     // Acumulador para soma de salarios

    int iH = 0,           // Contador para numero de habitantes
        nF;

    /*Recebendo valores*/
   // printf ("Digite salario: ");
    scanf ("%f",&sal);

    /*Criando grande laco*/
    while (sal >= 0)
    {
    /*Recebendo nf*/
    //printf ("Digite o numero de filhos ");
    scanf ("%d",&nF);

    /*Acumular salarios*/
    acu_sal += sal;

    /*Contando numero de habit*/
    iH++;

    /*Recebendo novo valor de salario e posteriormente novo valor de filhos*/
    //printf ("Digite salario: ");
    scanf ("%f",&sal);
    }

    media = acu_sal/ iH;
    printf("%.2f\n",media);
}

int main ()
{
    pesquisa();
    return 0;
}
