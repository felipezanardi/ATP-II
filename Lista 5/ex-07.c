/*
Crie uma função recursiva para calcular a potência de um número.
*/

#include <stdio.h>

int potencia(int base, int expoente)
{
    if(expoente == 0)
    {
        return 1;
    }
    if(expoente == 1)
    {
        return base;
    }

    return base * potencia(base, expoente-1);
}

int main()
{
    int numero, expoente, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(numero, expoente);
    
    printf("%d elevado a %d: %d\n", numero, expoente, resultado);

    return 0;
}
