#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    float nota1, nota2, nota3 , media, nota_exame;

    //Recebendo os valores
    printf ("Digite o valor da primeira nota: ");
    scanf ("%f",&nota1);
    printf ("Digite o valor da segunda nota: ");
    scanf ("%f",&nota2);
    printf ("Digite o valor da terceira nota: ");
    scanf ("%f",&nota3);

    //calculando a media
    media = (nota1 + nota2 + nota3)/3;
    printf ("Media aritmetica: %.2f\n",media);

    //decisao final
    if (media >= 0 && media < 3)
    {
        printf ("Reprovado\n");
    }

    else if (media >= 3 && media <7)
    {
        printf ("Exame\n");
        nota_exame = 12 - media;
        printf ("Deve tirar nota: %.2f\n",nota_exame);

    }
    else if (media >= 7 && media <10)
    {
        printf ("Aprovado");
    }



    return 0;
}
