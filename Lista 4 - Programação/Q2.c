/*2) Ler dados de um vetor de tamanho 10 com valores entre 0 e 100 imprimir o maior,
o menor, o percentual de números pares e a média dos elementos do vetor.*/

#include <stdio.h>
#define RANGE 10

int main () {

    int a[RANGE], i, min, max, par = 0;
    float media;

    printf ("Digite um valor 10 entre 0 - 100 para A: \n");
    for (i = 0; i < RANGE; i++){
        scanf ("%d", &a[i]);
            if (a[i] < 0 || a[i] > 100){
                printf ("Valor Invalido");
                return 0;
            }
        if (i == 0) {
            min = a[i];
            max = a[i];
        }
        else {
            if (a[i] > max){
                max = a[i];
            }
            if (a[i] < min){
                min = a[i];
            }
        }
            if (a[i] % 2 == 0){
                par++;
            }
        media += a[i];
    }
    printf ("O menor valor e: %d\nO maior valor e: %d\n", min, max);
    printf ("A media dos valores e de: %.2f\n", media / RANGE);
    printf ("%d%% dos valores sao pares\n", (par * 100) / RANGE);

    return 0;
}
