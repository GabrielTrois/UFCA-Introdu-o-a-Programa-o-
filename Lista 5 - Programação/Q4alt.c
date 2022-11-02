#include <stdio.h>

int square (int n);

int main () {

    int n;

    printf ("Digite um valor inteiro: ");
    scanf ("%d", &n);
    
    if (square (n) != 0)
    printf ("\nA raiz quadrada de %d e %d\n", n, square (n));

    else
    printf ("\n%d nao possui raiz exata\n", n);

    return 0;
}

int square (int n) {
    for (int i = 1; i <= n/2; i++){
        if (n / i == i) return i;
    }
    return 0;
}