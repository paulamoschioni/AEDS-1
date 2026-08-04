#include <stdio.h>

// Função que recebe a idade e retorna a categoria
char categoriaNadador(int idade)
{
    if (idade >= 5 && idade <= 7)
        return 'F';
    else if (idade >= 8 && idade <= 10)
        return 'E';
    else if (idade >= 11 && idade <= 13)
        return 'D';
    else if (idade >= 14 && idade <= 15)
        return 'C';
    else if (idade >= 16 && idade <= 17)
        return 'B';
    else if (idade >= 18)
        return 'A';
}

int main()
{
    int N,i, idade;
    char categoria;

    scanf("%d",&N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &idade);
        categoria = categoriaNadador(idade);
        printf("%c\n",categoria);

    }



    return 0;
}
