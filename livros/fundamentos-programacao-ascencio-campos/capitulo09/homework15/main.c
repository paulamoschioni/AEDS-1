#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 02/06/2026
Leia um nome completo e gere um login em letras minúsculas:
1-sobrenome: primeira letra do nome + sobrenome.
2- ou mais sobrenomes: primeira letra do nome + primeira letra do primeiro sobrenome + último sobrenome.
*/
int main()
{
    char nome[50];
    char palavra[15];
    int qntosNomes = 0;
    int j = 0;

    gets(nome);
    strlwr(nome);
    // Percorre frase caractere por caractere
     for(int i = 0; i <= strlen(nome); i++){  /// Incluir  o 0
            if (nome[i] != ' ' && nome[i] != '\0'){
                palavra[j] = nome[i];
                j++;
            } else {
            qntosNomes++;       /// Adiciona mais um numero de palavras

            palavra[j] = '\0';

            if(qntosNomes == 1 ){        /// Se for o nome inicial, printa primeira letra minuscula
            printf("%c",palavra[0]);
            }


            if(qntosNomes == 2 && nome[i] == '\0'){ /// Se tiver apenas um sobrenome, printa ele
                printf("%s",palavra);
            }
            else if(qntosNomes == 2 && nome[i] == ' '){ /// Se tiver apenas mais de sobrenome, printa primeira letra dele
                printf("%c",palavra[0]);
            }


            if(qntosNomes == 3 && nome[i] == '\0'){ /// Se tiver dois sobrenome, printa ele
                printf("%s",palavra);
            }

            if(4 <= qntosNomes && nome[i] == '\0'){ /// Se tiver mais de dois sobrenomes, printa o ultimo
             printf("%s",palavra);
            }
            j = 0;
          }
     }






    return 0;

}
