/*
Escreva um programa em C que conte o número de elementos
pares e ímpares em um array de 20 inteiros.
*/

#include <stdio.h>

int main()
{
    int i, par=0, impar=0;
    int array[20] = {2, 8, 3, 5, 4, 8, 2, 5, 8, 7,
    2, 8, 3, 5, 4, 8, 2, 5, 8, 7};

    printf("Elementos da array inicial:\n");

    for (i=0; i<20; i++)
    {
        printf("%d ", array[i]);
    }

    for (i=0; i<20; i++)
    {
        if(array[i] % 2 == 0)
        {
            par++;
        }
        else if(array[i] % 2 != 0)
        {
            impar++;
        }
    }

    printf("\nPar: %d\n"
           "Impar: %d\n", par, impar);

    return 0;
}
