/*
Declare e inicialize uma estrutura para armazenar as informações de um
funcionário (nome, salário, departamento) e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50], dpt[100]; // dpt = departamento
    float salario;
} info_func;

int main()
{
    info_func funcionario;

    printf("Digite o nome do funcionario: ");
    fgets(funcionario.nome, 50, stdin);

    printf("Digite o departamento do funcionario: ");
    fgets(funcionario.dpt, 100, stdin);

    printf("Digite o salario do funcionario: R$");
    scanf("%f", &funcionario.salario);

    printf("\nNome do funcionario: %s"
           "Departamento do funcionario: %s"
           "Salario do funcionario: R$%.2f\n",
           funcionario.nome, funcionario.dpt, funcionario.salario);

    return 0;
}
