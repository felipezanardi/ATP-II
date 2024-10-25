/*
Utilize a declaração de tipos (typedef) para simplificar a definição de uma
estrutura para armazenar as informações de um professor (nome, disciplina, salário)
e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    char disciplina[20];
    float salario;
} Professor;

int main()
{
    Professor prof;

    printf("Digite o nome do professor: ");
    fgets(prof.nome, 50, stdin);

    printf("Digite a disciplina do professor: ");
    fgets(prof.disciplina, 20, stdin);

    printf("Digite o salario do professor: R$");
    scanf("%f", &prof.salario);

    printf("\nNome: %s"
           "Disciplina: %s"
           "Salario: R$%.2f\n", prof.nome, prof.disciplina, prof.salario);

    return 0;
}
