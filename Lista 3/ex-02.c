/*
Utilize a declaração de tipos (typedef) para simplificar a definição de uma
estrutura para armazenar as informações de um carro (marca, modelo, ano) e
imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char marca[20];
    char modelo[40];
    int ano;
} info_carro;

int main()
{
    info_carro carro;

    printf("Digite a marca do carro: ");
    fgets(carro.marca, 20, stdin);

    printf("Digite a modelo do carro: ");
    fgets(carro.modelo, 40, stdin);

    printf("Digite o ano do carro: ");
    scanf("%d", &carro.ano);

    printf("\nInformacoes do carro:\n");
    printf("Marca: %s"
           "Modelo: %s"
           "Ano: %d\n", carro.marca, carro.modelo, carro.ano);

    return 0;
}
