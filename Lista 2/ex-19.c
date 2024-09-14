/*
Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x2 e armazene o resultado em uma matriz 2x2.
*/

#include <stdio.h>

#define LINHA 2
#define COLUNA 3

void imprimir_matriz(int *ptr_matriz, int linha, int coluna);

int main()
{
    int matriz_1[LINHA][COLUNA] = {{2,5,9}, {3,6,8}};
    int matriz_2[COLUNA][LINHA] = {{2,7}, {4,3}, {5,2}};
    int resultado[LINHA][LINHA];

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < LINHA; j++)
        {
            resultado[i][j] = 0;

            for (int k = 0; k < COLUNA; k++)
            {
                resultado[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
        }
    }

    printf("Matriz 1:\n");
    imprimir_matriz(matriz_1, LINHA, COLUNA);

    printf("\nMatriz 2:\n");
    imprimir_matriz(matriz_2, COLUNA, LINHA);

    printf("\nResultado:\n");
    imprimir_matriz(resultado, LINHA, LINHA);

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
