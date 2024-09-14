/*
Escreva um programa em C que preencha uma matriz 5x5 com
números primos.
*/

#include <stdio.h>

#define SIZE 5

void imprimir_matriz(int matriz[SIZE][SIZE]);

void preencher_matriz(int matriz[SIZE][SIZE]);

int num_primo(int primo_x);

int eh_primo(int num, int divisor);

/* ------- main ------- */

int main()
{
    int matriz[SIZE][SIZE];

    preencher_matriz(matriz);

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    return 0;
}

void imprimir_matriz(int matriz[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

void preencher_matriz(int matriz[SIZE][SIZE])
{
    int primo_x = 1; // pegar o xº numero primo existente
                     // ex: quando primo_x = 3, pega o terceiro numero primo existente (5)
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matriz[i][j] = num_primo(primo_x);
            primo_x++;
        }
    }
}

int num_primo(int primo_x)
{
    int num = 1;
    int i = primo_x; // contador, roda até chegar no xº numero primo

    while (i != 0)
    {
        num++;

        if (eh_primo(num, 2) == 1)
        {
            i--;
        }
    }

    return num;
}

int eh_primo(int num, int divisor) // 1 = é primo, 0 = nao é primo
{
    if (divisor * divisor > num)
    {
        return 1;
    }

    if (num % divisor == 0)
    {
        return 0;
    }

    return eh_primo(num, divisor + 1);
}
