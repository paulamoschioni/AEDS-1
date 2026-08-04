#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    //Declarando as variaveis
    float angulo, //angulo escada-chao em graus
        esc, //medida da escada
        altura, //altura da escada
        radiano; // angulo em rad

        //Recebendo as variaveis
        printf ("Digite o valor em graus do angulo:");
        scanf ("%f",&angulo);
        printf ("Digite a medida da altura:");
        scanf ("%f",&altura);


        //Passando o angulo em graus para rad
        radiano= (angulo*3.14)/180;

        //Calculando a medida de escada
        esc = altura/ sin(radiano);

        //mostre valor de escada
        printf ("O valor da escada é: %.2f\n", esc);
}
