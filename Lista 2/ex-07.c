/*
Escreva um programa em C que verifique se uma matriz 3x3 é
simétrica.
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    int eh_simetrica=1;
    int matriz[SIZE][SIZE] = {
        {1,2,3},
        {2,1,4},
        {3,4,1}};

    for (int i = 0; i < SIZE && eh_simetrica == 1; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matriz[i][j] != matriz[j][i])
            {
                eh_simetrica = 0;
                break;
            }
        }
    }

    if (eh_simetrica == 1)
    {
        printf("A matriz eh simetrica\n");
    }
    else
    {
        printf("A matriz nao eh simetrica\n");
    }

    return 0;
}
