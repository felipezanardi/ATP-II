/*
Declare um array de 10 inteiros e inicialize-o com valores de 0 a 9.
Escreva um programa em C que imprima todos os elementos do array.
*/

#include <stdio.h>
int main(){
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Elementos do array:\n");
    for(int i=0; i<10; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}
