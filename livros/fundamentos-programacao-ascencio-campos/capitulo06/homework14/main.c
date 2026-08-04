#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*AUTORA: Paula Moschioni
DATA: 20/05/2026
Faça um programa que armazene nome, salário e tempo de serviço de 5 funcionários. Mostre os funcionários
sem aumento e os que terão aumento, exibindo o novo salário. O aumento será de 35% para quem tiver mais de
 5 anos de serviço e salário menor que R$800,00; 25% apenas por tempo de serviço; e 15% apenas por salário inferior a R$800,00.
*/
int main()
{
    // Declaracao de variaveis
    char nome[5][20];
    int salario[5], tmpS[5];
    float aumento;

    srand(time(NULL));

    // Definido vetores
    for (int i = 0; i < 5; i++){
        scanf(" %[^\n]",nome[i]);
    }
    for(int j = 0; j < 5; j++){
        salario[j] = rand()%1001+1000;  /// Numeros randomicos de 1000 a 2000
        printf("R$%d  ",salario[j]);
    }
    printf("\n");
    for(int p = 0; p < 5; p++){
        tmpS[p] = rand()%21 + 1;  /// Numeros randomicos de 1 a 20
        printf("%d ",tmpS[p]);
    }
    printf("\n");


    // Aumento
    for(int q = 0; q < 5; q++){
        if (5 <= tmpS[q] && salario[q] <= 800){
            aumento = (float) 1.35 * salario[q];
        printf("%s %d teve seu salario aumentado para R$%.2f\n ",nome[q],aumento);
        }
        else if (5 <= tmpS[q]){
            aumento = (float) 1.25 * salario[q];
        printf("O funcionario %d teve seu salario aumentado para R$%.2f\n ",q+1,aumento);
        }
        else if ( salario[q] <= 800){
            aumento = (float) 1.15 * salario[q];
        printf("O funcionario %d teve seu salario aumentado para R$%.2f\n ",q+1,aumento);
    }}








    return 0;
}
