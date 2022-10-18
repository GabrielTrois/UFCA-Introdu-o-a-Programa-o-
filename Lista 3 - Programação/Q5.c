/*5) Faça um programa que lê um número inteiro positivo n e imprima os valores
j
∑ i
i=1

para j de 1 até n, um valor por linha.*/

#include <stdio.h>

int main () {

    unsigned int n;
    int i, j, res = 0;

    printf ("Digite um numero natural: ");
    scanf ("%u", &n);

    for (i = 1; i <= n; i++){

        for (j = 1; j <= i; j ++){
            res += j;
        }
        printf ("O somatorio de 1 ate %d resulta em %d\n", i, res);
        res = 0;
    }

    return 0;
}
