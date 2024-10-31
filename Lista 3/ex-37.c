/*
Declare e inicialize uma estrutura para armazenar as informações de um cliente
(nome, idade, endereço) e imprima seus valores.
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
    Cliente cliente = {"Felipe Zanardi", 18, {"Rua Semnome", 123}};

    printf("Nome do cliente: %s\n"
           "Idade: %d\n"
           "Nome da rua: %s\n"
           "Numero da casa: %d\n",
           cliente.nome, cliente.idade, cliente.endereco.rua, cliente.endereco.numero);

    return 0;
}
