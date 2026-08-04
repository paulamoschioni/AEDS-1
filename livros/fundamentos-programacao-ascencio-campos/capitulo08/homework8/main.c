#include <stdio.h>
#include <stdlib.h>

// Declarando variaveis globais
int hf, hi, mf, mi;

// Criando funcao
int calcularHoras(int hf, int hi, int mf, int mi)
{
    // Declarando variaveis
    int dh, dm, duracao;

    // Codicional para calcular minutos
    if (mf < mi)
    {
     hf = hf - 1;
     mf = mf + 60;

      if (hf > hi)
      {
       dh = (hf - hi)*60;
      }
      else if (hf < hi)
      {
          hf = hf + 24;
          dh = (hf - hi)*60;
      }

      dm = mf - mi;
     duracao = dm + dh;
    }

    else if(mf >=  mi)
    {
      if (hf > hi)
      {
       dh = (hf - hi)*60;
      }
      else if (hf < hi)
      {
          hf = hf + 24;
          dh = (hf - hi)*60;
      }

       dm = mf - mi;
       duracao = dm + dh;
    }
     return duracao;
}


int main()
{
    // Declarando  variaveis
    int resultado;

    // Recebendo valores
    printf("Hora inicial e minuto inicial: ");
    scanf("%d%d",&hi,&mi);
    printf("Hora final e minuto final: ");
    scanf("%d%d",&hf,&mf);

    // Acionando funcao
    resultado = calcularHoras(hf, hi, mf, mi);
    printf("Resultado: %d\n",resultado);

    return 0;
}
