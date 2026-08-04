#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variaveis
    int i = 1, iF = 0, id;
    float alt, mediaM, mais_alto, somaM = 0;
    char sexo, sexo_maisA;

    // Recebendo idade como condicao de entrada
    printf("Digite a idade: ");
    scanf("%d",&id);


    // Criando grande laco
    while (id != 0){
    /// Recebendo o resto dos valores
    printf("Digite a altura: ");
    scanf("%f",&alt);
    printf("Digite o sexo: ");
    scanf(" %c",&sexo);

    /// Definindo mais altos
    if (i == 1) {
     mais_alto = alt;
     sexo_maisA = sexo;
    }
    else {
      if (alt > mais_alto)
      {
       mais_alto = alt;   /*atualiza*/
       sexo_maisA = sexo;
      }
    }

    /// Acumulando alturas mulheres + 30 anos
    if (sexo == 'F') {
      iF++;
     if (id >= 30) somaM += alt;
      }
    printf("Digite a idade: ");
    scanf("%d",&id);
    i++;
    }

    /// Media e resultados
    mediaM = (float) somaM/iF;
    printf("Media: %.2f\n",mediaM);

    printf("Mulheres com 30 anos ou mais: %d\n",iF);

    printf("O sexo do jogador mais alto e: %c\n",sexo_maisA);

    return 0;
}
