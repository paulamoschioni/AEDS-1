#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int num,        // Numero que a pessoa ira digitar
        cont_3e9 = 0,   // Contador de numeros divisiveis por 3 e 9
        cont_2 = 0,   // Contador de numeros divisiveis por 2 e 5
        cont_5 = 0,
        cont_N = 0,
        i;


    // Recebendo 10 numeros e verificando a divisibilidade de cada um dos 10 numeros
    /*se  colocar um for para ler e outro para verific a div. da errado, pois ele armazena apenas O ULTIMO*/


    for (int i = 1; i <= 10; i++)
    {
        printf ("Digite o %d: ",i);
        scanf ("%d",&num);


        if (num % 3 == 0  &&  num % 9 == 0)          // Verificando a divisibilidade
       {
        cont_3e9++;
       }
       else if  (num % 2 == 0)
       {
        cont_2++;
       }
       else if (num % 5 == 0)
       {
         cont_5++;
       }
       else if (num % 5 != 0  && num % 3 != 0 && num % 2 !=0 && num % 9 != 0)
       {
        cont_N++;
        printf ("Numero nao eh divisivel pelos valores\n");
       }
    }
    printf("%d numeros sao divisiveis por 3 e 9\n",cont_3e9);
    printf ("%d numeros sao divisiveis por 2\n",cont_2);
    printf ("%d numeros sao divisiveis por 5\n",cont_5);
return 0;
}
