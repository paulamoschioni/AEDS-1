#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracao de variaveis
    int I, *pI = &I;
    float a,b,c,*pA = &a, *pB = &b, *pC = &c;

    // Recebendo opcao
    scanf("%d",pI);

    scanf("%f%f%f",pA,pB,pC);       ///Levando o valor ao valor do ponteiro, ou seja, atribuindo o endereco desses numeros aos ponteiros

    switch(I)
    {
        case 1 :        // Ordem crescente
        if (a > b)
        {
            if (b > c) printf("%f %f %f",*pC,*pB,*pA);
            else printf("%f %f %f",b,c,a);
        }

        if (b > c)
        {
            if (c > a) printf("%f %f %f",*pA,*pC,*pB);
            else printf("%f %f %f",c,a,b);
        }

        if (c > a)
        {
            if (a > b) printf("%d %d %d",*pB,*pA,*pC);
            else printf("%f %f %f",a,b,c);
        }
    break;

    case 2:         // Orfem decrescente
        if (a > b)
        {
            if (b > c) printf("%f %f %f",*pA,*pB,*pC);
            else printf("%f %f %f",a,c,b);
        }

        if (b > c)
        {
            if (c > a) printf("%f %f %f",*pB,*pC,*pA);
            else printf("%f %f %f",b,a,c);
        }

        if (c > a)
        {
            if (a > b) printf("%f %f %f",*pC,*pA,*pB);
            else printf("%f %f %f",c,b,a);
        }
    break;

        case 3:         // Ordem decrescente
        if (a > b && a > c)
        {
            printf("%f %f %f",c,a,b);
        }

        if (b > c && b > a)
        {
            printf("%f %f %f",a,b,c);
        }

        if (c > a && c > b)
        {
           printf("%f %f %f",a,c,b);
        }
    break;
    }
    return 0;
}
