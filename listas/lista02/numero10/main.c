#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int voto,       // Voto individual
        cont_1 = 0,     // Contador do numero de votos ao C1
        cont_2 = 0,     // Contador do numero de votos ao C2
        cont_3 = 0,     // Contador do numero de votos ao C3
        cont_4 = 0,     // Contador do numero de votos ao C4
        cont_5 = 0,     // Contador do numero de votos nulos
        cont_6 = 0;     // Contador do numero de voto em branco


     // Criando o grande laco
     while (voto > 0)

     {  /*recebendo o voto*/
        printf("Voto: ");
        scanf("%d",&voto);

        /*contabilizando o voto*/
        if (voto == 1)
        {
        cont_1++;
        }
        else if (voto == 2)
        {
        cont_2++;
        }
        else if (voto == 3)
        {
        cont_3++;
        }
        else if (voto == 4)
        {
        cont_4++;
        }
        else if (voto == 5)
        {
        cont_5++;
        }
        else if (voto == 6)
        {
        cont_6++;
        }

     }
        printf("%d\n",cont_1);
        printf("%d\n",cont_2);
        printf("%d\n",cont_3);
        printf("%d\n",cont_4);
        printf("%d\n",cont_5);
        printf("%d\n",cont_6);

    return 0;
}
