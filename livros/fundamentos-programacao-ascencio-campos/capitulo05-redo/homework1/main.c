#include <stdio.h>
#include <stdlib.h>
void ordemNum()
{
 int a, b, c, d, temp, i;

 for (i = 1; i <= 5; i++)
 {
    printf("Digite quatro numeros: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    printf("Ordem lida: %d %d %d
           %d\n",a,b,c,d);

    if (a > b)  {temp = a; a = b; b = temp;}
    if (a > c)  {temp = a; a = c; c = temp;}
    if (a > d)  {temp = a; a = d; d = temp;}
    if (b > c)  {temp = b; b = c; c = temp;}
    if (b > d)  {temp = b; b = d; d = temp;}
    if (c > d)  {temp = c; c = d; d = temp;}

    printf("Ordem crescente: %d %d %d %d\n",a, b, c, d);
    printf("Ordem decrescente: %d %d %d %d\n",d, c, b, a);

 }
}


int main()
{
    int resultado;

    ordemNum();

    return 0;
}
