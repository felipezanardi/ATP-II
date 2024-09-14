/*
Escreva uma função recursiva para verificar se um número é primo.
*/

#include <stdio.h>

int eh_primo(int x, int divisor)
{
    if (x <= 1)
    {
        return 0;
    }

    if (divisor * divisor > x)
    {
        return 1;
    }

    if (x % divisor == 0)
    {
        return 0;
    }

    return eh_primo(x, divisor + 1);
}

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (eh_primo(numero, 2))
    {
        printf("O numero %d e um numero primo\n", numero);
    }
    else
    {
        printf("O numero %d nao e um numero primo\n", numero);
    }

    return 0;
}
