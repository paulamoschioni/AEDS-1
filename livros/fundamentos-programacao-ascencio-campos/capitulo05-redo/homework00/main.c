#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, somaP = 0, menorP, iI = 0, i, tempar = 0;

   // Criando laco
   for (i = 1; i <= 100; i++) {
    /// Recebendo numero
    printf("Digite um numero: ");
    scanf("%d",&n);

    /// Condicional para definir par ou impar
    if (n % 2 == 0) {
        somaP += n;

        if (tempar == 0){
         menorP = n;
         tempar = 1;
        }
        else
        {
        if (n < menorP) menorP = n;
        }
    else  {
    iI++;
        }
        }
  }
  printf("Soma dos numeros pares: %d\n",somaP);
  printf("Menor numero par: %d\n",menorP);
  printf("Quantidade de numeros impares: %d\n",iI);


    return 0;
}
