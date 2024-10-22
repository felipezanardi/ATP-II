/*
Escreva um programa em C que declare um array de 5 inteiros.
Use um ponteiro para acessar e imprimir todos os elementos do array.
*/

#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;

    printf("Elementos do array:");

    for (int i=0; i<5; i++)
    {
        printf(" %d", *(ptr + i));
    }
    printf("\n");

    return 0;
}
