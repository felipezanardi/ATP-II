/*
Escreva um programa em C que declare um array de 5 inteiros
e use aritmética de ponteiros para somar 10 a cada elemento do array. Imprima
o array resultante.
*/

#include <stdio.h>

void imprimir_array(int array[]);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;

    printf("Array inicial:");
    imprimir_array(array);

    for (int i=0; i<5; i++)
    {
        *(ptr + i) += 10;
    }

    printf("Array final:");
    imprimir_array(array);

    return 0;
}

void imprimir_array(int array[])
{
    for (int i=0; i<5; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
}
