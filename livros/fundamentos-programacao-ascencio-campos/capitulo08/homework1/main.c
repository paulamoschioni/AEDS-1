#include <stdio.h>
#include <stdlib.h>

int definePN (int N)
{
  // Definindo variaveis
  int valorR;

  // Condicionais
  if (N <= 0) valorR = 0;
  else if (N > 0) valorR = 1;

  return valorR;
}

int main ()
{
 // Declarando variveis
 int resultado,  N;

 // Recebendo numero
 printf("Numero: ");
 scanf("%d",&N);

 // Acionando funcao e resultado
 resultado = definePN(N);
 if (resultado == 1) printf("POSITIVO\n");
 else if ( resultado == 0) printf("NEGATIVO\n");

 return 0;
 }
