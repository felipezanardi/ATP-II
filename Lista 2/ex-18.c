/*
Escreva um programa em C que verifique se uma matriz 3x3 é
uma matriz identidade.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int eh_identidade = 1;
    int matriz[SIZE][SIZE] = {{1,0,0}, {0,1,0}, {0,0,1}};

    for (int i = 0; i < SIZE && eh_identidade == 1; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if ((i != j && matriz[i][j] != 0) || (i == j && matriz[i][j] != 1))
            {
                eh_identidade = 0;
                break;
            }
        }
    }

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    if (eh_identidade == 1)
    {
        printf("\nA matriz eh identidade\n");
    }
    else
    {
        printf("\nA matriz nao eh identidade\n");
    }

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
