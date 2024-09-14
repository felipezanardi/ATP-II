/*
Escreva um programa em C que preencha um array de 15
inteiros com números aleatórios entre 0 e 50. Em seguida, encontre e imprima
o maior valor do array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[15], i, maior=0;

    srand(time(NULL)); // gerar seed
    
    printf("Numeros gerados: ");

    for (i=0; i<15; i++)
    {
        // formula para definir o range: rand() % (max + 1 - min) + min
        num[i] = rand() % (50 + 1);

        if((num[i] > maior) || (i == 0))
        {
            maior = num[i];
        }
        
        printf("%d ", num[i]);
    }

    printf("\nMaior numero: %d\n", maior);

    return 0;
}
