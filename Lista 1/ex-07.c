/*
Escreva um programa em C que leia 6 valores de ponto flutuante
e calcule a média dos valores.
*/

#include <stdio.h>
int main(){
    float num, soma=0;
    for(int i=0; i<6; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%f",&num);
        soma += num;
    }
    printf("Media: %f\n", soma/6);
    return 0;
}
