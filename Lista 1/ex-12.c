/*
Escreva um programa em C que preencha um array de 12
inteiros com números aleatórios entre -20 e 20. Em seguida, conte e imprima
quantos números são negativos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, numeros[12], num_negativo=0;

    printf("Numeros gerados: ");
    
    srand(time(0)); // NULL == 0

    for (i=0; i<12; i++)
    {
        // formula para definir o range: rand() % (max + 1 - min) + min
        numeros[i] = rand() % (20 + 1 + 20) - 20;

        printf("%d ", numeros[i]);

        if(numeros[i] < 0)
        {
            num_negativo++;
        }
    }

    printf("\nNumeros negativos: %d\n", num_negativo);

    return 0;
}
