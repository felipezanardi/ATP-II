/*
Escreva um programa em C que encontre o maior e o menor
elemento em um array de 10 inteiros.
*/

#include <stdio.h>

int main()
{
    int i, maior, menor;
    int array[10] = {2, 8, 3, 5, 4, 8, 2, 5, 8, 7};

    printf("Elementos da array inicial:\n");

    for (i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }

    for (int i=0; i<10; i++)
    {
        if(array[i] > maior  || i == 0)
        {
            maior = array[i];
        }

        if(array[i] < menor || i == 0)
        {
            menor = array[i];
        }
    }

    printf("\nMaior: %d\n"
           "Menor: %d\n", maior, menor);
           
    return 0;
}
