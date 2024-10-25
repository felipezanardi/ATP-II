/*
Acesse os componentes de uma estrutura de cliente (nome, idade, endereço)
utilizando o operador ponto '.' e imprima seus valores.
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

    printf("Digite o nome do cliente: ");
    fgets(cliente.nome, 50, stdin);

    printf("Digite a idade do cliente: ");
    scanf("%d", &cliente.idade);
    fflush(stdin);

    printf("Digite o nome da rua do cliente: ");
    fgets(cliente.endereco.rua, 100, stdin);

    printf("Digite o numero da casa do cliente: ");
    scanf("%d", &cliente.endereco.numero);

    printf("\nNome do cliente: %s"
           "Idade: %d\n"
           "Nome da rua: %s"
           "Numero da casa: %d\n",
           cliente.nome, cliente.idade, cliente.endereco.rua, cliente.endereco.numero);

    return 0;
}
