#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 03/06/26
Faça um programa que receba o nome completo de uma pessoa e mostre os nomes intermediários entre
o primeiro nome e o último sobrenome abreviados
*/
int main()
{
    char nome[60];
    char palavra[20];
    int j = 0, cont = 0;
    gets(nome);
    int tam = strlen(nome);

    for (int i = 0; i <= tam; i++){
        if (nome[i] != ' ' &&  nome[i] != '\0'){        /// Se estiver em uma palavra
            palavra[j] = nome[i];
            j++;
        }   else  {
            cont++;
            palavra[j] = '\0';

            if (nome[i] == ' '){    // Tudo que nao for o ultimo sobrenome
                if (cont == 1) printf("%s ",palavra);   /// Se for o primeiro nome
                if(cont > 1) printf("%c. ",palavra[0]); /// Se for um sobrenome
            }

            if (nome[i] == '\0'){
                printf("%s",palavra);
            }
            j = 0;
        }
    }

    return 0;
}
