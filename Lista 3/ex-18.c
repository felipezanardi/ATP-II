/*
Declare e inicialize uma estrutura aninhada para armazenar as informações de
um endereço (rua, número, cidade) e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    char estado[50];
} tp_cidade;

typedef struct
{
    char rua[100];
    int numero;
    tp_cidade cidade;
} tEndereco;

int main()
{
    tEndereco endereco = {"Rua Semnome", 100, {"Sao Paulo", "Sao Paulo"}};

    printf("Rua: %s\n"
           "Numero: %d\n"
           "Cidade: %s\n"
           "Estado: %s\n",
           endereco.rua, endereco.numero, endereco.cidade.nome, endereco.cidade.estado);

    return 0;
}
