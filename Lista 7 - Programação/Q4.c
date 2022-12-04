/*4) Escrever um programa que cadastre o nome, a matrícula e duas notas de
vários alunos. Em seguida imprima a matrícula, o nome e a média de cada
um deles.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int n, i;

    printf ("Digite quantos alunos serao cadastrados: ");
    scanf ("%d", &n);

    char nome[n][100];
    float nota1[n], nota2[n], mat[n], med[n];

    for (i = 0; i < n; i++){
        printf ("Aluno %d: \n", (i+1));

        printf ("Digite o nome do aluno: ");
        scanf ("%s", nome[i]);
        printf ("Digite a matricula do aluno: ");
        scanf ("%f", &mat[i]);
        printf ("Digite a primeira nota do aluno: ");
        scanf ("%f", &nota1[i]);
        printf ("Digite a segunda nota do aluno: ");
        scanf ("%f", &nota2[i]);

        med[i] = (nota1[i] + nota2[i]) / 2;
    }

    for (i = 0; i < n; i++){
        printf ("Aluno %d: \n", (i+1));
        printf ("Matricula: %.f\n", mat[i]);
        printf ("Nome: %s\n", nome[i]);
        printf ("Media de notas: %.1f\n\n", med[i]);
    }

    return 0;
}