/*3) Receber uma matriz e imprimir o vetor soma_linha (onde cada elemento é a soma
dos elementos de uma linha da matriz).*/

#include <stdio.h>

int main () {

    int vetor[3][3], vsum[3], i;

    //vetor [linha][coluna]

    printf ("De os valores da linha 1: ");
    scanf ("%d %d %d", &vetor[1][1], &vetor[1][2], &vetor[1][3]);
    printf ("De os valores da linha 2: ");
    scanf ("%d %d %d", &vetor[2][1], &vetor[2][2], &vetor[2][3]);
    printf ("De os valores da linha 3: ");
    scanf ("%d %d %d", &vetor[3][1], &vetor[3][2], &vetor[3][3]);

    for (i = 1; i <= 3; i++){
        vsum[i] = vetor[i][1] + vetor[i][2] + vetor[i][3];
    }

    for (i = 1; i <= 3; i++){
        printf ("%d ", vsum[i]);
    }

    return 0;
}