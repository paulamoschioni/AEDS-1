#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pe, pol, jar, mi;

    //constantes
    1 pe = 12 pol;
    1 jar = 3 pe;
    1 mi = 1.76;


    //quantos pes
    printf ("Digite o a quantidade de pes:);
    scanf ("%f",&pe);


    //conversoes
    pol = pe*12;
    printf ("A conversao em polegadas eh: %f\n", pol);
    jar = pe/3;
    printf ("A conversao em jardas eh: %f\n", jar);
    mil = jar/1.760;
    printf ("A conversao em milhas eh: %f\n", mil);
    return 0;
}
