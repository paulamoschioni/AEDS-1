#include <stdio.h>
#include <stdlib.h>


void  pesquisaRegiao ()
{
  // Declarando variavei
  int i, id, sal ,acu_sal = 0, maiorid, menorid, i200 = 0, idmenorsal, menorsal;
  float  mediasal;
  char  sexo;

  // Recebendo idade para inicializar o laco
  printf("Idade: ");
  scanf("%d",&id);

  // Criando grande laco
  for (i = 0; id > 0; i++)
  {
      /// Recebendo restante dos dados
      printf("Sexo: ");
      scanf(" %c",&sexo);
      printf("Salario: ");
      scanf("%d",&sal);

      /// Acumulando salarios
      acu_sal += sal;

      /// Maior e menor idade
      if (i == 1)
      {
          maiorid = id;
          menorid = id;
          menorsal = sal;
          idmenorsal = id;
      }
      else
      {
            if (id > maiorid)
            {
                maiorid = id;
            }
            if (id < menorid)
            {
                menorid = id;
            }
      }

      /// Contando mulheres com + de 200
      if (sexo == 'F' || sexo == 'f')
      {
          if (200 < sal)
          {
              i200++;
          }
      }

      /// Idade e sexo da pessoa com menor salario
      if (i >= 2)
      {
            if (sal < menorsal)
            {
                menorsal = sal;
                idmenorsal = id;
            }
      }

      /// Recebendo idade novamente
      printf("Idade: ");
      scanf("%d",&id);
    }
    // Media salarios
    mediasal = (float) acu_sal / i;
    printf("Media salarios: %.2f\n",mediasal);

    printf("MENOR idade: %d\n MAIOR idade: %d\n",menorid, maiorid);
    printf("Quantidade mulheres ate R$200: %d\n",i200);
    printf("Idade e sexo da pessoa com menor salario: %d - R$%d\n",idmenorsal,menorsal);
}


int main ()
{
    pesquisaRegiao();
    return 0;
}
