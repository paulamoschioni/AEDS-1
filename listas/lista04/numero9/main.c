#include <stdio.h>
#include <stdlib.h>

int divisao(int numerador, int denominador)
{
    if (numerador < denominador) return numerador;

    else return  divisao(numerador - denominador, denominador);

}
int main()
{
   int x,y;
   scanf("%d%d",&x,&y);

   printf("%d\n",divisao(x,y));
    return 0;
}

