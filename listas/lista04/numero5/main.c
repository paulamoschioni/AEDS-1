#include <stdio.h>
#include <stdlib.h>
int calculaMDC (int a, int b)
{
   if (b == 0)  return a;

   else return calculaMDC(b, a % b);
}
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    printf("%d\n",calculaMDC(x,y));
    return 0;
}
