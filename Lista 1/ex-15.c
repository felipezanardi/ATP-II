/*
Escreva um programa em C que declare um array de 7
inteiros e use um ponteiro para calcular a soma dos elementos do array.
*/

#include <stdio.h>

void imprimir_array(int array[]);

int main()
{
    int soma = 0, array[7] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = array;

    printf("Elementos do array:");
    imprimir_array(array);

    for (int i=0; i<7; i++)
    {
        soma += *(ptr + i);
    }

    printf("Soma: %d\n", soma);

    return 0;
}

void imprimir_array(int array[])
{
    for (int i=0; i<7; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
}
