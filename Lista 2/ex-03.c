/*
Escreva um programa em C que verifique se duas matrizes 2x2
s�o iguais.
*/

#include <stdio.h>

#define SIZE 2

int main()
{
    int eh_igual = 1;
    int matriz_1[SIZE][SIZE] = {{1,2}, {3,4}};
    int matriz_2[SIZE][SIZE] = {{1,2}, {3,4}};

    for (int i = 0; i < SIZE && eh_igual == 1; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matriz_1[i][j] != matriz_2[i][j])
            {
                eh_igual = 0;
                break;
            }
        }
    }

    if (eh_igual == 1)
    {
        printf("As matrizes sao iguais\n");
    }
    else
    {
        printf("As matrizes nao sao iguais\n");
    }

    return 0;
}
