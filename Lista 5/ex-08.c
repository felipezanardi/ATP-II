/*
Desenvolva uma função recursiva para calcular o MDC
(Máximo Divisor Comum) de dois números.
*/

#include <stdio.h>

int mdc(int x, int y)
{
    int menor;

    if(y == 0)
    {
        return x;
    }

    return mdc(y, x % y);
}

int main()
{
    int num_1, num_2;

    printf("Digite um numero: ");
    scanf("%d",&num_1);

    printf("Digite outro numero: ");
    scanf("%d",&num_2);

    printf("MDC: %d", mdc(num_1, num_2));
    
    return 0;
}
