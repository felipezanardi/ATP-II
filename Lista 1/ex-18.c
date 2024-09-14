/*
Escreva um programa em C que declare um array de 10
inteiros e use aritmética de ponteiros para calcular a soma de todos os elementos
do array. Imprima a soma.
*/

#include <stdio.h>

int main()
{
    int i, soma = 0, array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ponteiro = array;

    printf("Elementos da array inicial:\n");

    for (i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }

    for (i=0; i<10; i++)
    {
        soma += *(ponteiro+i);
    }

    printf("\nSoma: %d\n", soma);
    
    return 0;
}
