/*
Escreva um programa em C que leia 10 valores inteiros e
calcule a soma de todos os elementos do array.
*/

#include <stdio.h>
int main(){
    int valor[10], soma=0, i;
    for(i=0; i<10; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%d",&valor[i]);
        soma += valor[i];
    }
    printf("Soma: %d\n", soma);
    return 0;
}
