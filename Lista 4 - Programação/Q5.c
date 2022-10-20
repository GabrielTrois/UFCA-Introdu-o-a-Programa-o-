/*5) Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como dois
números inteiros de n algarismos, calcular a sequência de números que representa a
soma dos dois inteiros.*/

#include <stdio.h>
#define RANGE 2

int main () {

    int n, v[RANGE], v2[RANGE], i;

    printf ("Digite o tamanho das sequencias: ");
    scanf ("%d", &n);

    for (i = 0; i < n; i++){
    printf ("Digite o valor %d da sequencia 1\n", i + 1);
    scanf ("%d", &v[i]);
        if (v[i] < 0 || v[i] > 9){
            printf ("Valor invalido");
            return 0;
        }
    printf ("Digite o valor %d da sequencia 2\n", i + 1);
    scanf ("%d", &v2[i]);
        if (v2[i] < 0 || v2[i] > 9){
                printf ("Valor invalido");
                return 0;
        }
    }


    return 0;
}
