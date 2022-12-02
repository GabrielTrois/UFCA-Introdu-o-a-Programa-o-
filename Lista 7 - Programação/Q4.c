/*4) Escrever um programa que cadastre o nome, a matrícula e duas notas de
vários alunos. Em seguida imprima a matrícula, o nome e a média de cada
um deles.*/

#include <stdio.h>
#include <stdlib.h>

float MEDIA (float v[], int size);

int main () {
    
    int n, i;
    char *nome;
    int *mat;
    float *nota1, *nota2;

    printf ("Digite quantos alunos serao cadastrados: ");
    scanf ("%d", &n);

    nome = (int*)malloc(n*sizeof(char));
    mat = (int*)malloc(n*sizeof(int));
    nota1 = (int*)malloc(n*sizeof(float));
    nota2 = (int*)malloc(n*sizeof(float));

    for (i = 0; i < n; i++){
        printf ("Aluno %d: \n", (i+1));
        printf ("Digite o nome do aluno: ");
        scanf ("%s", nome);
        printf ("Digite a matricula do aluno: ");
        scanf ("%d", mat[i]);
        printf ("Digite a primeira nota do aluno: ");
        scanf ("%f", nota1[i]);
        printf ("Digite a segunda nota do aluno: ");
        scanf ("%f", nota2[i]);
    }

    return 0;
}

float MEDIA (float v[], int size){
    if (size == 0) return 0;

    else if (size == size) return (v[size - 1] + MEDIA(v, size - 1)) / size;
    else return v[size - 1] + MEDIA(v, size - 1);
}