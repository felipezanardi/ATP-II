/*
Escreva uma função recursiva para calcular o fatorial de um número.
*/

#include <stdio.h>

int fat(int x)
{
    if(x < 3)
    {
        return x;
    }
    else
    {
        return x * fat(x-1);
    }
}

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Fatorial: %d", fat(numero));
    
    return 0;
}
