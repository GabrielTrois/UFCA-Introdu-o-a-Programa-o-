/*7) Criar um programa que leia dois vetores, A e B, contendo cada um 25 elementos
inteiros. Intercalar esses dois conjuntos (A[0]/B[0]/A[1]/B[1]/...), formando um vetor
V de 50 elementos. Imprima o vetor V.*/

#include <stdio.h>
#define RANGE 25

int main () {

    int A[RANGE], B[RANGE], V[RANGE * 2], i, j = 0, t = 0;

    for (i = 0; i < RANGE; i++){
        printf ("Digite um valor para A[%d]: \n", i + 1);
        scanf ("%d", &A[i]);
        printf ("Digite um valor para B[%d]: \n", i + 1);
        scanf ("%d", &B[i]);
    }
    printf ("\n");

    for (i = 0; i < RANGE * 2; i++){
        if (i % 2 == 0){
        V[i] = A[j];
        j++;
        }
        else{
        V[i] = B[t];
        t++;
        }
    }
    for (i = 0; i < RANGE * 2; i++){
        printf ("%d", V[i]);
    }
    

    return 0;
}
