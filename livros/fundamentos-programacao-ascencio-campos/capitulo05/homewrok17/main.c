#include <stdio.h>
#include <stdlib.h>

int main ()
{
// Declarando variaveis
float salJ, salC, rendeu,meses = 0 ;

// Recebendo variaveis
printf("Digite o salario de Joao: ");
scanf("%f",&salJ);
printf("Digite o salario de Carlos: ");
scanf("%f",&salC);

salJ = salC / 3;
// Criando grande laco
while (salJ < salC)
{
    salC = salC + (salC * 0.02);
    salJ = salJ + (salJ * 0.05);
    meses++;

}
printf("sal carlos: %.2f\n",salC );
    printf("sal joao: %.2f\n",salJ );


return 0;
}

