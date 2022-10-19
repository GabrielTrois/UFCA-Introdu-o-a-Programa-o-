/*4) Dadas duas sequ�ncias com n n�meros inteiros entre 0 e 9 (cada uma em um
vetor), calcular a sequ�ncia de n�meros que representa a soma dos inteiros que est�o
na mesma posi��o.*/

#include <stdio.h>
#define RANGE 100

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

    for (i = 0; i < n; i++){
        printf ("As soma do valor %d da sequencia 1 com o valor %d da sequencia 2 e de %d\n", i + 1, i + 1, v[i] + v2[i]);
    }

    return 0;
}

