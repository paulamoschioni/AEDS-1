#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
   int *ptra = &a, *ptrb = &b;

   // Lendo inteiros
   scanf("%d%d",&a,&b);

   // Printando enderecos
   printf("End 'a': %p   End: %p\n",&a,&b);

    // Comparando
    if (&a > &b) printf("%p",&a);
    else if (&a < &b) printf ("%p",&b);


    return 0;
}
