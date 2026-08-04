#include <stdio.h>
#include <stdlib.h>

void entrevistaProd ()
{
    // Declarando variaveis
    int i, iS = 0, iN = 0, iH = 0, iMS = 0, iHN = 0;
    char resp, sexo;
    float perc;

    // Criando grande laco
    for (i = 1; i <= 10; i++)
    {
     /// Pegando respostas
     printf("Sexo do entrevistado: ");
     scanf(" %c",&sexo);
     printf("Opiniao do entrevistado: ");
     scanf(" %c",&resp);

     /// Condicinal de acordo com sexo
     if (sexo == 'M' || sexo == 'm')
     {
     iMS++;
     }
     else if (sexo == 'H' || sexo == 'h')
     {
     iHS++;
     iH++;
     }

     /// Condicional para resposta
     if (resp == 'S' || resp == 's')
     {
     iS++;
     }
     else if (resp == 'N' || resp == 'n')
     {
     iN++;
     }

    }
    printf("Numero de pessoas que responderam SIM: %d\n",iS);
    printf("Numero de pessoas que responderam NAO: %d\n",iN);
    printf("Numero de mulheres que responderam SIM: %d\n",iMS);
    printf("Numero de homens que responderam NAO: %d\n",iHN);

    perc = (float) (iHN * 100) / iH;
     printf("PORC: %.1F\n",perc);
}


