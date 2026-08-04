#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Declaracao de variaveis
   int  num_nasc,        // Numero de criancas nascidas no periodo
        tempo_vd,       // Tempo de vida da crianca nascida
        iM = 0,             // COntadores de mulheres nascida
        iH = 0,             // Contador de homens nascidos
        i24 = 0,
        i = 1;             // Contador de criancas dos dois sexos {iM + iH}
   char sexo,
        porc_Mm ,        // Porcentagem de mulheres mortas
        porc_Hm ,        // Porcentagem de homens mortos
        porc_m24 ;



    printf("Numero de criancas nascidas: ");
    scanf("%d",&num_nasc);

        // Criando o grande laco
        while (i <= num_nasc)
        {
        /* recebendo valores*/
        printf("Sexo da crianca :");
        scanf(" %c",&sexo);
        printf("Tempo de vida :");
        scanf("%d",&tempo_vd);

        /*Contando a qtde de cada sexo*/
        if (sexo == 'M' || sexo == 'm')
        {
        iM++;
        }
        else if (sexo == 'H' || sexo == 'h')
        {
        iH++;
        }

        /*Contando menos 24 horas*/
        if (tempo_vd <= 24)
        {
        i24++;
        }

        i++;
        }

        porc_Mm = (float)(iM * 100) / num_nasc;
        porc_Hm = (float)(iH * 100) / num_nasc;
        porc_m24 =(float) (i24 * 100)/ num_nasc;

        printf ("Percentual de criancas do sexo feminino mortas: %.2f%%\n", porc_Mm);
        printf ("Percentual de criancas do sexo masculino mortas: %.2f%%\n", porc_Hm);
        printf ("Percentual de criancas com 24 meses ou menos: %.2f%%\n", porc_m24);




    return 0;
}
