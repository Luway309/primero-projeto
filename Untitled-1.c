#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float altura[15], maior, menor;
    int i;

    for (i = 0; i < 15; i++)
    {
        printf("digite a altura do %d aluno \n", i + 1);
        scanf("%f", &altura[i]);

        if (i == 0)
        {
            maior = altura[i];
            menor = altura[i];
        }

        if (altura[i] > maior)
        {
            altura[i] = maior;
        }
        else if (altura[i] < menor)
        {
            altura[i] = menor;
        }
    }

    printf("a  maior altura dos seus alunos é a de %f e a menor e a de %f", maior, menor);

    return 0;
}