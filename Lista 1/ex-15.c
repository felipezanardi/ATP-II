/*
Escreva um programa em C que declare um array de 7
inteiros e use um ponteiro para calcular a soma dos elementos do array.
*/

#include <stdio.h>

int main()
{
    int i, soma=0, array[7] = {1, 2, 3, 4, 5, 6 ,7};
    int *ponteiro = &array;

    printf("Elementos da array:\n");

    for (i=0; i<7; i++)
    {
        printf("%d ", *(ponteiro+i));
    }

    for (i=0; i<7; i++){
        soma += *(ponteiro+i);
    }
    printf("\nSoma: %d\n", soma);
    return 0;
}
