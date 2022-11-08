/*7) Crie uma função recursiva para calcular a soma dos elementos positivos de um
vetor.*/

#include <stdio.h>
#include <string.h>
#define RANGE 3

int sumarray (int v[], int size);

int main () {
    int v[RANGE], size = RANGE;

    for (int i = 0; i < RANGE; i++){
    scanf ("%d", &v[i]);
    }

    printf ("%d", sumarray (v, size));
}

int sumarray (int v[], int size) {
    int i;

    for (i = 0; i < RANGE; i++);{
        if (v[i] >= 0){
            if (size == 0) return 0;

            return v[size - 1] + sumarray (v, size - 1);
        }
        return 0;
}
}
