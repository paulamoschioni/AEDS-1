#include <stdio.h>
#include <stdlib.h>
/*
AUTORA;: Paula Moschioni
DATA: 07/06/26
Escreva um programa em C para imprimir um vetor de caracteres ao contrário usando um ponteiro.
*/
#include <string.h>
int main() {
char *texto = malloc(333 * sizeof(char));
fgets (texto, 333, stdin);

int len = strlen(texto);
while (len > 0 && (texto[len-1] == '\n' || texto[len-1] == '\r'))
    texto[--len] = '\0';

char *p = texto + len - 1;

while (p >= texto) {
printf("%c", *p);
p--;
}
printf("\n");
free (texto);


return 0;
}
