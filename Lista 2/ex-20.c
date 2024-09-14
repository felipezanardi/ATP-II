/*
Escreva um programa em C que calcule a soma das colunas de
uma matriz 4x3.
*/

#include <stdio.h>

#define LINHA 4
#define COLUNA 3

void imprimir_matriz(int *ptr_matriz, int linha, int coluna);

int main()
{
    int matriz[LINHA][COLUNA] = {{1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}};

    printf("Matriz:\n");
    imprimir_matriz(matriz, LINHA, COLUNA);

    for (int i = 0; i < COLUNA; i++)
    {
        int soma_coluna = 0;

        for (int j = 0; j < LINHA; j++)
        {
            soma_coluna += matriz[j][i];
        }

        printf("\nSoma da coluna %d: %d\n", i+1, soma_coluna);
    }

    return 0;
}

void imprimir_matriz(int *ptr_matriz, int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            // formula para acessar elemento: linha * quant elementos da linha + coluna
            printf("%d  ", *(ptr_matriz + i * coluna + j));
        }
        printf("\n");
    }
}
