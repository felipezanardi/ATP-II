/*
Utilize a declaração de tipos (typedef) para simplificar a definição de uma
estrutura para armazenar as informações de um contato (nome, telefone, email)
e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    char telefone[20];
    char email[70];
} Contato;

int main()
{
    Contato contato;

    printf("Digite o nome da pessoa: ");
    fgets(contato.nome, 50, stdin);

    printf("Digite o telefone da pessoa: ");
    fgets(contato.telefone, 20, stdin);

    printf("Digite o email da pesssoa: ");
    fgets(contato.email, 70, stdin);

    printf("\nNome: %s"
           "Telefone: %s"
           "Email: %s",
           contato.nome, contato.telefone, contato.email);

    return 0;
}
