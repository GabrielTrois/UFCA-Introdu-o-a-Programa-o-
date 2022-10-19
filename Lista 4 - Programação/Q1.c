/*1) Entrar com números inteiros em um vetor A[10]. Gerar e imprimir o vetor B onde
cada elemento é o quadrado do elemento, na respectiva posição, do vetor A.*/

#include <stdio.h>
#define RANGE 10

int main () {

    int A[RANGE], B[RANGE], i;

    printf ("Digite %d valores inteiros para A: \n", RANGE);
    for (i = 0; i < RANGE; i++){
        scanf ("%d", &A[i]);

        B[i] = A[i] * A[i];
    }

    for (i = 0; i < RANGE; i++){
        printf ("O quadrado de %d e: %d\n", A[i], B[i]);
    }

    return 0;
}
