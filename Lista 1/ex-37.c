/*
Escreva um programa em C que declare um array de 5 inteiros
e passe esse array para uma função que calcule a média dos elementos do array.
*/

#include <stdio.h>

float media(int *array, int elementos);

int main()
{
    int numeros[5] = {1, 2, 3, 4, 5};

    printf("Media: %.2f\n", media(numeros, 5));

    return 0;
}

float media(int *array, int elementos)
{
    float resultado = 0;

    for (int i=0; i<elementos; i++)
    {
        resultado += array[i];
    }

    return resultado /= elementos;
}
