//8) Dado um inteiro positivo n, verificar se n é primo.

#include <stdio.h>

int main () {

int N, counter = 1, q = 1;

printf ("Digite um numero inteiro: ");
scanf ("%d", &N);

while (counter < N){
    if (N % counter == 0){
        q++;
        counter ++;
    }
    else
    counter ++;
}

    if (q > 2)
    printf ("%d nao e primo", N);
    else
    printf ("%d e primo", N);

return 0;
}
