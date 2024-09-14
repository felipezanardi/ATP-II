/*
Escreva um programa em C que preencha uma matriz 4x4 com
números aleatórios e depois ordene os elementos de cada linha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 4
#define COLUNA 4

void imprimir_matriz(int *ptr_matriz, int linha, int coluna);

void preencher_matriz(int matriz[LINHA][COLUNA]);

int main()
{
    int matriz[LINHA][COLUNA];

    preencher_matriz(matriz);

    printf("Matriz gerada:\n");
    imprimir_matriz(matriz, LINHA, COLUNA);

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

void preencher_matriz(int matriz[LINHA][COLUNA])
{
    srand(time(NULL)); // gerar seed

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            // formula para definir o range: rand() % (max + 1 - min) + min
            matriz[i][j] = rand() % (9 + 1); // números aleatorios de 0 à 9
        }
    }
}
