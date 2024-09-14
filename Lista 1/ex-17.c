/*
Escreva um programa em C que declare um array de 5 inteiros
e use aritmética de ponteiros para somar 10 a cada elemento do array. Imprima
o array resultante.
*/

#include <stdio.h>

int main()
{
    int i, array[5] = {1, 2, 3, 4, 5};
    int *ponteiro = array;

    printf("Elementos da array inicial:\n");

    for (i=0; i<5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nElementos da array final:\n");

    for (i=0; i<5; i++)
    {
        *(ponteiro+i) += 10;

        printf("%d ", array[i]);
    }

    printf("\n");
    
    return 0;
}
