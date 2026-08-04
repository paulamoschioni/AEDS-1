#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Declarando arquivo
   FILE *arquivo;
    int contadorA = 0;
    char cadeia[100];  // precisa declarar antes de usar

   // Abrindo arquivo
   arquivo = fopen("texto.txt","r");

   // Ler cadeia do arquivo anterior e contar a
   while (!feof(arquivo))       /// Laco externo para ler o arquivo ate END OF FILE
   {
    fgets(cadeia,100,arquivo);          /// Lendo caracteres de dentro do arquivo

    for (int i = 0; i < 100; i++){
    if (cadeia[i] == 'a' || cadeia[i] == 'A')  /// Laco interno para acessar a posicao i do vetor cadeia
    {
       contadorA++;
    }
    }

    }
    return 0;
}
