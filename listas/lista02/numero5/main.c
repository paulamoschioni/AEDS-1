#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variaveis
    float sal,              //Salario do habitante
          media_sal,        // Media de salario
          porc,
          maior_sal ,
          soma_sal = 0;         // Acumulador de salario

    int   numF,             // Numero de filhos
          i = 0,            // Contador para numero de habitantes
        media_nf,         // Media numero de filhos
          cont_100 = 0,         // Contador de salarios mais de 100 reais
          soma_nf = 0;      // Acumulador de numero de filhos



    // Criando o grannde laço
    scanf("%f",&sal);

    while (sal > 0 )
    { /*pegando valores*/
    scanf("%d",&numF);

        i++;     /*aumentando e contando o numero de habitantes*/


        /*acumulando valores de salario*/
        soma_sal += sal;


        /*acumulando valor do numero de filhos*/
        soma_nf += numF;

        if(sal <= 100)
        {
          cont_100++;
        }

        if (i == 1 || sal > maior_sal)
        {
         maior_sal = sal;
        }


        scanf("%f",&sal);
    }
        media_sal =  soma_sal / i;
        printf("%.2f\n",media_sal);

        media_nf = (float) soma_nf / i;
        printf("%d\n",media_nf);

        printf("%.2f\n",maior_sal);


     /*Porcentagem de  +100*/
     porc = (cont_100* 100) / i;
     printf("%.2f",porc);















    return 0;
}
