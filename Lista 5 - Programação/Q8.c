//8) Faça uma função recursiva em C que calcula a média dos elementos de um vetor.

#include <stdio.h>
#include <string.h>

float midarray (int v[], int size);

float midarray (int v[], int size){
    if (size == 0) return 0;

    else if (size == strlen(v)) return (v[size - 1] + midarray(v, size - 1)) / strlen(v);
    else return v[size - 1] + midarray(v, size - 1);
}
