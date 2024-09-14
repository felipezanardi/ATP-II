/*
Crie uma função recursiva para encontrar o máximo elemento em um array.
*/

#include <stdio.h>

int max_elemento(int array[], int inicio, int final)
{
    if(inicio == final)
    {
        return array[inicio];
    }

    int meio = (inicio+final) / 2;

    int max_esquerda = max_elemento(array, inicio, meio);
    int max_direita = max_elemento(array, meio+1, final);

    // condição ? valor_se_verdadeiro : valor_se_falso;
    return (max_esquerda > max_direita) ? max_esquerda : max_direita;
}

int main()
{
    int array[5] = {3,7,4,2,2};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Maximo elemento: %d\n", max_elemento(array, 0, tamanho-1));
    
    return 0;
}
