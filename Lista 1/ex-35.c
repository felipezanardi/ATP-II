/*
Escreva um programa em C que receba um número inteiro
como argumento na linha de comando e verifique se ele é par ou ímpar.
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

    int num = atoi(argv[1]);

    if (num % 2 == 0)
    {
        printf("O numero %d eh par\n", num);
    }
    else
    {
        printf("O numero %d eh impar\n", num);
    }

    return 0;
}
