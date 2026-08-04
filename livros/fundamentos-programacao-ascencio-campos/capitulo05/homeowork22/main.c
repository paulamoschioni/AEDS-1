#include <stdio.h>
#include <stdlib.h>

int main()
{
// Declarando variaveis
int soma_idH = 0,
    cont_45H = 0,
    cont_21M = 0,
    idade,
    i = 1,
    contM = 0,
    contH = 0,
    contH_exp = 0,
    menor_iM;

float
    media_iH, // Media idade exp de homens
    porc_45;

char sexo,
    exp;

    printf("IDade: ");
    scanf("%d",&idade);

    // Grande laco
    while (idade != 0)
    {/*recebendo dados*/
        printf("Idade: ");
        scanf("%d",&idade);
        printf("Sexo: ");
        scanf(" %c",&sexo);
        printf("Experiencia: ");
        scanf(" %c",&exp);

     /*contabilizando mulheres e homens*/
        if (sexo == 'M')
        {
           contM++;
            if (idade < 21 && exp == 'S')
            {
              cont_21M++;
            }

            if(i == 1)
            {
            menor_iM = idade;
            }
            else if (i != 1)
            {
              if (idade < menor_iM)
              {
                  menor_iM = idade;
              }
            }
        }
        else if (sexo == 'H')
        {
           contH++;
           if (exp == 'S')
           {
           contH_exp++;
           soma_idH += idade;
           }
           if (idade > 45)
           {
           cont_45H ++;
           }
        }

         i++;
    }
    media_iH = (float) soma_idH / contH_exp;
    printf("Media idade homens que ja tem experiencia no servico: %.1f%%\n",media_iH);

    printf("Numero de homens: %d\n",contH);
    printf("Numero de mulheres: %d\n",contM);

    porc_45 = (float) (cont_45H* 100)/ contH;
    printf("Numero de mulheres: %d\n",contM);

    printf("Numero de mulheres menores de 21 anos com  experiencia: %d\n",cont_21M);
    printf("Menor idade entre as mulheres: %d\n",menor_iM);



    return 0;
}
