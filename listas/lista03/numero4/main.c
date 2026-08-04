#include <stdio.h>
#include <stdlib.h>

void checarTriangulo ()
{
  // Declarando variaveis
  int x, y, z, i;
  int somaXY, somaXZ, somaYZ;

  // Recebendo 1os 3 valores de x, y e z

  scanf("%d%d%d",&x,&y,&z);

  // Criando grande laco
  while (0 <= x && 0 <= y && 0 <= z)
  {/*somando lados*/
      somaXY = x + y;
      somaXZ = x + z;
      somaYZ = y + z;

   /*condicional para ver se eh um triangulo*/
   if (x < somaYZ && z < somaXY && y < somaXZ)
   {
    if (x == y && x == z && y == z)   printf("TRIANGULO EQUILATERO\n");
    else if (x == z || y == z || x == y)   printf("TRIANGULO ISOSCELES\n");
    else printf("TRIANGULO ESCALENO\n");
   }
   else  printf("NAO TRIANGULO\n");

    /*recebendo novos valores*/
     scanf("%d%d%d",&x,&y,&z);
   }
  }


int main ()
{
    checarTriangulo ();

    return 0;
}
