/*
Escreva um programa em C que receba 5 números inteiros
como argumentos na linha de comando e imprima o maior deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Nenhum argumento inserido\n");

        return 1;
    }

    int maior = atoi(argv[1]);

    for (int i=2; i<argc; i++)
    {
        if (atoi(argv[i]) > maior)
        {
            maior = atoi(argv[i]);
        }
    }

    printf("Maior numero: %d\n", maior);

    return 0;
}
