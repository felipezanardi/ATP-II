/*
Acesse os componentes de uma estrutura de cliente (nome, idade, endereço)
utilizando o operador "->" e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char rua[100];
    int numero;
} Endereco;

typedef struct
{
    char nome[50];
    int idade;
    Endereco endereco;
} Cliente;

int main()
{
    Cliente cliente;
    Cliente *ptr = &cliente;

    printf("Digite o nome do cliente: ");
    fgets(ptr->nome, 50, stdin);

    printf("Digite a idade do cliente: ");
    scanf("%d", &ptr->idade);
    fflush(stdin);

    printf("Digite o nome da rua do cliente: ");
    fgets(ptr->endereco.rua, 100, stdin);

    printf("Digite o numero da casa do cliente: ");
    scanf("%d", &ptr->endereco.numero);

    printf("\nNome do cliente: %s"
           "Idade: %d\n"
           "Nome da rua: %s"
           "Numero da casa: %d\n",
           ptr->nome, ptr->idade, ptr->endereco.rua, ptr->endereco.numero);

    return 0;
}
