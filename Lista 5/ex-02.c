/*
Implemente uma função recursiva para calcular a soma dos
primeiros N números naturais.
*/

#include <stdio.h>

int soma(int x)
{
    if(x <= 1)
    {
        return x;
    }
    else
    {
        return x + soma(x-1);
    }
}

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Resultado: %d", soma(numero));
    
    return 0;
}
