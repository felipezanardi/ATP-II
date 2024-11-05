/*
Resolva um problema de cadastro de alunos utilizando estruturas.
*/

#include <stdio.h>

#define ALUNOS 5 // define a quantidade de alunos

typedef struct
{
    char nome[50];
    int ra;
    float nota;
} cadastro;

int main()
{
    cadastro aluno[ALUNOS];

    for (int i=0; i<ALUNOS; i++)
    {
        printf("Digite o nome do %do aluno: ", i+1);
        fgets(aluno[i].nome, 50, stdin);

        printf("Digite o RA do %do aluno: ", i+1);
        scanf("%d", &aluno[i].ra);

        printf("Digite a nota do %do aluno: ", i+1);
        scanf("%f", &aluno[i].nota);

        fflush(stdin);
        printf("\n");
    }

    printf("Cadastro dos alunos concluido\n");

    return 0;
}
