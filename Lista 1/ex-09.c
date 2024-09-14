/*
Escreva um programa em C que preencha um array de 20 inteiros
com números aleatórios entre 1 e 100. Em seguida, imprima todos os elementos
do array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[20], i;

    srand(time(NULL)); // gerar seed
    
    printf("Numeros gerados:\n");

    for (i=0; i<20; i++)
    {
        // formula para definir o range: rand() % (max + 1 - min) + min
        num[i] = rand() % 100 + 1;

        printf("%d: %d\n", i+1, num[i]);
    }

    return 0;
}
