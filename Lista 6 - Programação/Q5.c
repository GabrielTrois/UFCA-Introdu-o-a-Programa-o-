/*5) Escreva uma função que recebe uma string de caracteres e uma letra e devolve um
vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi
encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais
encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro para
guardar o tamanho do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int position (char v[], char c, int *size, int i);

int main () {

    char v[100], c;
    int *size, *vc, u, i = 0, j = 0;

    size = &u;

    printf ("Digite uma frase: ");
    gets(v);
    printf ("Digite uma letra: ");
    scanf ("%c", &c);

    vc = (int*)malloc(sizeof(int));

    for (i = 0; i <= strlen(v); i++){
        position (v, c, size, i);
        if (position (v, c, size, i) != 0){
            vc[j] = (position (v, c, size, i) != 0);
            j++;
            vc = (int*)realloc(vc, (j+1)*sizeof(int));
        }
    }

    for (i = 0; i <= u; i++){
    printf ("%d ", vc[i]);
    }
    printf ("%d", u);

    return 0;
}

int position (char v[], char c, int *size, int i){
    int vc, tam = 0;

        if (v[i] == c){
            vc = i;
            tam ++;

            *size += tam;

            return vc;
        }

    return 0;
}