/*
Crie uma função que recebe uma estrutura de funcionário (nome, salário,
departamento) como parâmetro e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    char dpt[100]; // dpt = departamento
    float salario;
} info_func;

void imprimir(info_func x);

int main()
{
    info_func funcionario = {"Felipe", "Vendas", 10000};

    imprimir(funcionario);

    return 0;
}

void imprimir(info_func x)
{
    printf("Nome: %s\n"
           "Departamento: %s\n"
           "Salario: R$%.2f\n", x.nome, x.dpt, x.salario);
}
