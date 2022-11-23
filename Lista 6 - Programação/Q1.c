/*1) Escreva uma função que recebe como parâmetros um vetor de inteiros v, o número de
elementos dele N e ponteiros para variáveis nas quais devem ser armazenados os valores
máximo e mínimo do vetor (assuma que o valor máximo no vetor é 10000 e o valor
mínimo é 0). Sua assinatura deve ser:

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

e a memória do vetor deve ser alocada dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

void maximoMinimo(int *v, int N, int *maximo, int *minimo){
    int i;

    printf ("%d", v[0]);
    printf ("%d", v[1]);

    for (i = 0; i < N; i++){
        if (i == 0){
            *minimo = v[0];
            *maximo = v[0];
        }
        else{
            if (v[i] < *minimo){
                *minimo = v[i];
            }
            if (v[i] > *maximo){
                *maximo = v[i];
            }
        }
    }
}