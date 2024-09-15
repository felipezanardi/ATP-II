/*
Desenvolva uma função recursiva para calcular a sequência de Fibonacci
até o enésimo termo.
*/

#include <stdio.h>

int fibonacci(int x)
{
    // condição ? valor_se_verdadeiro : valor_se_falso;
    return (x < 2) ? x : fibonacci(x-1) + fibonacci(x-2);
}

int main()
{
    int numero;

    printf("Digite o termo que deseja: ");
    scanf("%d", &numero);

    printf("%do termo da sequência de Fibonacci: %d\n", numero, fibonacci(numero));
    
    return 0;
}
