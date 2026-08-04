#include <stdio.h>
#include <stdlib.h>

/*
AUTORA: Paula Moschioni
DATA: 06/06/26
Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias são:
nome, endereço e telefone. Deve ser usada uma estrutura de registro para a construção deste
cadastro.
*/
typedef struct Clientes{
    char nome[20];
    char ende[30];
    char tel[15];
}clientes;

int main(){
    clientes cliente1;
    clientes cliente2;

    // Preenche dados
    scanf(" %[^\n]",cliente1.nome);
    scanf(" %[^\n]",cliente1.ende);
    scanf(" %[^\n]",cliente1.tel);

    scanf(" %[^\n]",cliente2.nome);
    scanf(" %[^\n]",cliente2.ende);
    scanf(" %[^\n]",cliente2.tel);

    // Printando
    printf("%s ",cliente1.nome);
    printf("%s ",cliente1.ende);
    printf("%s.\n",cliente1.tel);

    printf("%s ",cliente2.nome);
    printf("%s ",cliente2.ende);
    printf("%s.\n",cliente2.tel);
    return 0;
}
