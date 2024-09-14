/*
Implemente uma função recursiva para imprimir os elementos de um array
na ordem inversa.
*/

#include <stdio.h>

void inverter(int array[], int tamanho)
{
    if(tamanho <= 0)
    {
        return;
    }

    printf("%d ", array[tamanho-1]);

    inverter(array, tamanho-1);
}

int main()
{
    int array[5] = {3, 8, 3, 5, 2};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Elementos da array inicial:\n");

    for (int i=0; i<5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nElementos da array invertida:\n");

    inverter(array, tamanho);
    
    printf("\n");

    return 0;
}
