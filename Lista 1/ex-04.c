/*
Declare um array de 8 n�meros de ponto flutuante e inicialize-o
com os valores dos primeiros 8 n�meros da sequ�ncia de Fibonacci.
Imprima todos os elementos do array.
*/

#include <stdio.h>
int main(){
    float array[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    printf("Elementos do array:\n");
    for(int i=0; i<8; i++){
        printf("%f\n", array[i]);
    }
    return 0;
}
