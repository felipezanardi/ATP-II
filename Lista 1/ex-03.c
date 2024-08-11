/*
Declare um array de 7 inteiros e inicialize-o com os valores dos
primeiros 7 números primos. Escreva um programa em C que imprima todos os
elementos do array.
*/

#include <stdio.h>
int main(){
    int array[7] = {2, 3, 5, 7, 9, 11, 13};
    printf("Elementos do array:\n");
    for(int i=0; i<7; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}
