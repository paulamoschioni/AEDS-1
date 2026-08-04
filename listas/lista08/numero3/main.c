#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AUTORA: Paula Moschioni
DATA: 06/06/26
Criar um programa em C para calcular a conta de clientes de internet (máx. 500). Dados por cliente: Código, e-mail, horas de acesso e se tem página (S/N).
Cálculo do valor: Até 20 horas: Valor fixo de 35,00 Kz. Hora extra (mais de 20h): +2,50 Kz por hora excedente. Se tem página (S): Adicionar +40,00 Kz.
*/
typedef struct Clientes {
    char codigo[10];
    char email[30];
    int horas;
    char pagina;
}Clientes;

int main()
{
   Clientes *cliente = malloc(500*sizeof(Clientes));
   int i = 0;
   float vp;

   // Recebendo infos
   scanf("%s",cliente[0].codigo);
   while(strcmp((cliente+i)->codigo, "0") != 0){
        scanf("%s",(cliente+i)->email);
        scanf("%d",(cliente+i)->horas);
        scanf(" %c",(cliente+i)->pagina);
    i++;
    scanf("%s",(cliente+i)->codigo);

   }

   // Calculando infos e printando
   for(int j = 0; j < i; j++){
        vp = 0;
    printf("Cliente %d:\n",j+1);
    printf("Codigo: %s\n",(cliente+j)->codigo);
    printf("Email: %s\n",(cliente+j)->email);
    printf("Horas de acesso: %d\n",(cliente+j)->horas);
    printf("Possui Pagina: %c\n",(cliente+j)->pagina);
        if((cliente+j)->pagina == 'S'){
        vp+=40;}
        if((cliente+j)->horas > 20){
        vp += ((cliente+j)->horas - 20) * 2.5 + 35;
    printf("Valor a pagar: %.2f Quanzas\n",vp);
        } else {
    printf("Valor a pagar: %.2f Quanzas\n",vp+35.0);
        }
   }
   free(cliente);
    return 0;
}
