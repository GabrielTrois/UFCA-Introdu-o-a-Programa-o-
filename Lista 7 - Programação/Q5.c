/*5) Escreva um registro Aluno, no qual ele deve conter 3 campos, um nome
(um vetor de char), idade e altura. Faça um programa que um usuário
preencha o campo de 3 alunos e os armazene em um vetor a. Faça uma
função que passe a lista de Alunos, a quantidade de alunos na lista e um
número: para 1 a função imprime o aluno mais velho; 2 o aluno mais alto e 3
o aluno com maior nome.*/

#include <stdio.h>
#include <string.h>

int ALUNOS (char nome[], int idade[], float height[], int n, int *size, int *tall);

int main () {

    char nome[3][256];
    int idade[3], i, a, b;
    int n, *size, *tall, v;
    float height[3];

    size = &a;
    tall = &b;

    for (i = 1; i <= 3; i++){
    printf ("Digite o nome da pessoa %d: \n", i);
    scanf ("%s", nome[i]);
    printf ("Digite a idade da pessoa %d: \n", i);
    scanf ("%s", idade[i]);
    printf ("Digite o altura da pessoa %d: \n", i);
    scanf ("%f", height[i]);
    }

    n = strlen(idade);

    v = ALUNOS (nome, idade, height, n, size, tall);

    printf ("O aluno mais velho e %s\n", nome[v]);
    printf ("O aluno mais alto e %s\n", nome[*tall]);
    printf ("O aluno com o maior nome e %s\n", nome[*size]);

    return 0;
}

int ALUNOS (char nome[], int idade[], float height[], int n, int *size, int *tall){
    int v, maior, i;

        for (i = 1; i <= n; i++){
            if (i == 0){
                maior = strlen(nome[i]);
                *size = i;
            }

            else{
                if (strlen(nome[i]) > maior)
                maior = strlen(nome[i]);
                *size = i;
            }
    }

        for (i = 1; i <= n; i++){
            if (i == 0){
                maior = height[0];
                *tall = i;
            }

            else{
                if (height[i] > maior)
                maior = height[i];
                *tall = i;
            }
    }

        for (i = 1; i <= n; i++){
            if (i == 0){
                maior = idade[0];
                v = i;
            }

            else{
                if (idade[i] > maior)
                maior = idade[i];
                v = i;
            }
    }
        return maior;
}