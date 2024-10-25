/*
Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
pessoa (nome, idade, altura) e imprima o resultado.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;
} informacoes;

int main()
{
    printf("Tamanho da estrutura: %d bytes\n", sizeof(informacoes));

    return 0;
}
