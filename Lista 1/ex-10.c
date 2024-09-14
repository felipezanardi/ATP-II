/*
Escreva um programa em C que preencha um array de 10
inteiros com números aleatórios entre 50 e 150. Calcule e imprima a média dos
elementos do array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[10], i, soma=0;

    srand(time(NULL)); // gerar seed

    for (i=0; i<10; i++)
    {
        // formula para definir o range: rand() % (max + 1 - min) + min
        num[i] = rand() % (150 + 1 - 50) + 50;

        soma += num[i];
    }

    printf("Media: %f\n", (double) soma/10);

    return 0;
}
