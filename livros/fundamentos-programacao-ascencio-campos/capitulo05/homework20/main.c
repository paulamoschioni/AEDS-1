#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int   cod,       // Codigo
          nht,       //  Numero de horas trablalhadas
          nH,        // Contador de homens
          nM,        // Contador de mulheres
          i = 1,
          salB,      // Salario bruto
          somaM = 0,
          somaH = 0;
     float      mediaM,    // Media mulheres
                desc,
                salL,      // Salario liquido
                mediaH;    // Media homens
    char  sexo;

    // Criando grande laco
    while (cod != 99999)
    {/*recebendo valores*/
     printf("FUNCIONARIO %d:\n",i);
     printf("Codigo funcionario: ");
     scanf("%d",&cod);
     printf("Sexo funcionario: ");
     scanf(" %c",&sexo);
     printf("Horas trabalhadas: ");
     scanf("%d",&nht);

     /*salario bruto*/
     salB =  30 * nht;
     printf("Salario bruto: %d\n",salB);

     /*H e M*/
     if (sexo == 'M' || sexo == 'm')
     {
     nM++;
     desc = 0.05 * salB;
     }
     else
     {
     nH++;
     desc = 0.1 * salB;
     }

    /*salL*/
    salL = salB - desc;
    printf ("Salario liquido e codigo: R$%.2f - %d\n",salL,cod);

    i++;
   }







    return 0;
}
