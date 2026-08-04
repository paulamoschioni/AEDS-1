#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    int num, i;
    int cont_3e9 = 0, cont_2 = 0, cont_5 = 0;

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);

        if(num % 3 == 0 && num % 9 == 0)
        {
            cont_3e9++;
        }

        if(num % 2 == 0)
        {
            cont_2++;
        }

        if(num % 5 == 0)
        {
            cont_5++;
        }

        if(num % 3 != 0 && num % 9 != 0 && num % 2 != 0 && num % 5 != 0)
        {
            printf("Numero nao eh divisivel pelos valores\n");
        }
    }

    printf("%d Numeros sao divisiveis por 3 e 9\n", cont_3e9);
    printf("%d Numeros sao divisiveis por 5 \n", cont_5);
    printf("%d Numeros sao divisiveis por 2\n", cont_2);

    return 0;
}
