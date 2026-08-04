#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // Declarando variaveis
    int num_op,       // Numero do operario
        num_opM,       // Numero do operario com maior salario
        pcs,          // Numero de pecas
        soma_pag = 0, // Acumulador total da folha de pagamento
        cat,          // Categoria 1, 2 ou 3
        i,           // Contador para numero de operarios
        iH,
        iM,
        sal,          // Salario do operario dps de definida a categoria
        salmin,       // Salario minimo
        soma_pcs = 0, // Acumulador do numero de pecas
        soma_ph = 0,  // Acumulador do numero de peca de homens
        soma_pm = 0 ;  // Acumulador do numero de peca de mulheres

       float  media_ph = 0, // Media pecas homens
        media_pm = 0, // Media pecas mulheres
        maior_sal = -1.0;

    char sexo;      // Sexo do operario M ou H


    printf("Digite o salario minimo: ");
    scanf("%d",&salmin);

    // Fazendo grande laco
    for (i = 1; i <= 15; i++)
    {


     /*recebendo info*/
     printf ("OPERARIO %d:\n",i);
     printf ("Numero operario: ");
     scanf("%d",&num_op);
     printf ("Numero de pecas: ");
     scanf("%d",&pcs);
     printf ("Sexo operario: ");
     scanf(" %c",&sexo);

     /*Definido categorias*/
     if (pcs <= 30)
     {
      sal = salmin;
     }
     else if (31 <= pcs && pcs <= 50)
     {
      sal = salmin + ((pcs-30)* (0.03*salmin));
     }
     else if (51 <= pcs)
     {
      sal = salmin + ((pcs-30)* (0.05*salmin));
     }

     /*Contabilizando numero de homens e mulheres*/
     if (cat == 'M' || cat =='m')
     {
      iM++;
     }
     else
     {
      iH++;
     }

     /*acumular pagamentos dos fucionarios*/
     soma_pag += sal;
     /*acumular pecas gerais*/
     soma_pcs += pcs;

     /*soma pecas separadas por sexo*/
     if (cat == 'M' || cat =='m')
     {
      soma_pm += pcs;
     }
     else if (cat == 'H' || cat =='h')
     {
      soma_ph += pcs;
     }

     /* Definindo maior salario*/
     if (sal > maior_sal)
     {
         maior_sal = sal;
         num_opM = num_op;
     }


    }

    // Medias
    media_pm = soma_pm/ iM;
    printf("Media pecas mulheres: %.2f\n",media_pm);

    media_ph = soma_ph/ iH;
    printf("Media pecas homens: %.2f\n",media_ph);

    printf ("Total folha pagamento: %d\n",soma_pag);

    printf ("Numero de pecas fabricadas: %d\n",soma_pcs);
    printf ("Numero do operario com maior salario: %d\n",num_opM);

        return 0;
}

