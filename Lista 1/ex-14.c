/*
Escreva um programa em C que declare um array de 5
inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
dos elementos do array. Imprima o array resultante.
*/

#include <stdio.h>

int main()
{
    int i, array[5] = {1, 2, 3, 4, 5};
    int *ponteiro = &array;

    printf("Elementos da array inicial:\n");

    for (i=0; i<5; i++)
    {
        printf("%d ", *(ponteiro+i));
    }

    printf("\nElementos da array modificada:\n");

    for (i=0; i<5; i++)
    {
        *(ponteiro+i) *= 6;

        printf("%d ", *(ponteiro+i));
    }

    printf("\n");

    return 0;
}
