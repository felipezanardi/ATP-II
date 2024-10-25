/*
Atribua os valores de uma estrutura de endereço para outra e imprima os valores
da nova estrutura.
*/

#include <stdio.h>

typedef struct
{
    int cep;
    char rua[50];
    int numero;
} endereco;

int main()
{
    endereco endereco_1 = {123456, "Rua Semnome", 100};

    endereco endereco_2 = endereco_1;

    printf("CEP: %d\n"
           "Nome da rua: %s\n"
           "Numero da casa: %d\n",
           endereco_2.cep, endereco_2.rua, endereco_2.numero);

    return 0;
}
