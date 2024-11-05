/*
Resolva um problema de cadastro de funcionários utilizando estruturas.
*/

#include <stdio.h>

#define FUNCS 3 // define a quantidade de funcionarios

typedef struct
{
    char nome[50];
    int dpt[100]; // dpt = departamento
    float salario;
} cadastro;

int main()
{
    cadastro func[FUNCS];

    for (int i=0; i<FUNCS; i++)
    {
        printf("Digite o nome do %do funcionario: ", i+1);
        fgets(func[i].nome, 50, stdin);

        printf("Digite o departamento do %do funcionario: ", i+1);
        fgets(func[i].dpt, 100, stdin);

        printf("Digite o salario do %do funcionario: R$", i+1);
        scanf("%f", &func[i].salario);

        fflush(stdin);
        printf("\n");
    }

    printf("Cadastro dos funcionarios concluido\n");

    return 0;
}
