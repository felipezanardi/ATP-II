/*
Escreva um programa em C que conte o número de elementos
pares e ímpares em um array de 20 inteiros.
*/

#include <stdio.h>

int main()
{
    int par = 0, impar = 0;
    int array[20] = {2, 8, 3, 5, 4, 8, 2, 5, 8, 7,
    2, 8, 3, 5, 4, 8, 2, 5, 8, 7};

    for (int i=0; i<20; i++)
    {
        if (array[i] % 2 == 0)
        {
            par++;
        }
        else if (array[i] % 2 != 0)
        {
            impar++;
        }
    }

    printf("Par: %d\n"
           "Impar: %d\n", par, impar);

    return 0;
}
