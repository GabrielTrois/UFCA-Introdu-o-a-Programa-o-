/*7) Crie uma função recursiva para calcular a soma dos elementos positivos de um
vetor.*/

#include <stdio.h>
#include <string.h>

int sumarray (int v[], int size);

int sumarray (int v[], int size) {

    int i;

    for (i = 0; i < strlen(v); i++){
        if (v[i] >= 0)
            v[i] = v[i];
        else 
        v[i] = 0;
    }
    
        if (size == 0) return 0;

        return v[size - 1] + sumarray (v, size - 1);
}

