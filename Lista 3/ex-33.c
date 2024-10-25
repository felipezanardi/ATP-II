/*
Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
funcionário (nome, salário, departamento) e imprima o resultado.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    char dpt[100];
    float salario;
} Funcionario;

int main()
{
    printf("Tamanho da estrutura: %d bytes\n", sizeof(Funcionario));

    return 0;
}
