#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raio, area;
    printf ("Digite o raio:");
    scanf ("%d",&raio);

    //area

    area = 3.1415*(raio*raio);
    printf ("A area eh: %d\n",area);
        return 0;
}
