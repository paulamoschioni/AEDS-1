#include <stdio.h>
#include <stdlib.h>

// Sub-rotina para converter min em horas, min e seg
int transformarSeg(int seg)
{
  // Declarando vairvaveis locais
  int h, m ,s;

  // Tranformando
  h = seg / 3600;
  m = (seg % 3600) / 60;
  s = seg % 60;

  return h, m, s;
}


int main()
{
    // Declarando variaveis
    int seg, resultado;

    // Recebendo segundos
    printf("Segundos: ");
    scanf("%d",&seg);

    // Acionando funcao e resultado
    resultado = transformarSeg(seg);
    printf("Resultado: %d%d%d",resultado);

    return 0;
}
