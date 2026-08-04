#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    float alt,   // altura
          peso;  // peso
    char  cat;   // categoria


    // Recebendo valores
    printf ("Digite seu peso: ");
    scanf ("%f",&peso);
    printf ("Digite seu altura: ");
    scanf ("%f",&alt);


    // Codicional
    if ( alt < 1.2)
    {
          if (peso < 60)
          {
            cat = 'A';
          }
          else if  (60 <= peso && peso <= 90)
          {
              cat = 'D';
          }
          else if  (90 < peso)
          {
              cat = 'G';
          }


    }


    else if (1.2 <= alt && alt <=1.7)
    {
          if (peso < 60)
          {
            cat = 'B';
          }
          else if  (60 <= peso && peso <= 90)
          {
              cat = 'E';
          }
          else if  (90 < peso)
          {
              cat = 'H';
          }

    }

    else if (1.7 <= alt)
    {
          if (peso < 60)
          {
            cat = 'C';
          }
          else if  (60 <= peso && peso <= 90)
          {
              cat = 'F';
          }
          else if  (90 < peso)
          {
              cat = 'I';
          }

    }

    printf ("A categoria e: %c\n",cat);






    return 0;
}
