#include <stdio.h>
#include <stdlib.h>

// Criando procedimento (nao tem retorno e mostra a ordem cresc)
void procValores ()
{   /*Declaracao de variaveis locais*/
    int v1,v2,v3;     // Valor 1, 2 e 3
    int N,      // Numero de conjuntos de 3
        i,      // Contador que representa o numero de sequencia de tres numeros
        maior,
        menor;

    //Recebendo valores
  // printf ("Digite o valor de N: ");
   scanf("%d",&N);

   // Criando grande laco
   for (i = 1; i <= N; i++)
   { /*Recebendo 3 valores da sequencia i*/
     scanf("%d%d%d",&v1,&v2,&v3);

     /*atualizando valor a cada i*/
     menor = v1;
     maior = v3;

     /*Condicional para testar e encontrar a ordem crescente*/
     if (v1 < v2 && v1 < v3)
     {
         if (v2 < v3) printf("%d %d %d\n",v1,v2,v3);

         else if (v3 < v2)   printf("%d %d %d\n",v1,v3,v2);

     }
     else if (v2 < v1 && v2 < v3)
     {
         if (v1 < v3)  printf("%d %d %d\n",v2,v1,v3);

         else if (v3 < v1)  printf("%d %d %d\n",v2,v3,v1);
     }
     else if (v3 < v1 && v3 < v2)
     {
         if (v1 < v2)  printf("%d %d %d\n",v3,v1,v2);

         else if (v2 < v1)  printf("%d %d %d\n",v3,v2,v1);
     }
   }

}


 int main ()
   {
    procValores ();

    return 0;
   }


