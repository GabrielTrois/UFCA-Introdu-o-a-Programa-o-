/*4) Criar uma função que receba um número inteiro como parâmetro e retorne 1, se sua
raíz quadrada for exata, e 0 em caso contrário.*/

#include <stdio.h>

int RQ (int n);

int RQ (int n) {
    for (float i = 1; i <= n/2; i++){
        if (n / i == i) return 1;
    }
    return 0;
}