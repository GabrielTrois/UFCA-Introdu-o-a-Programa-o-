//1) Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos

#include <stdio.h>

int main () {

int sum = 0, i, n;

printf ("Digite um numero inteiro positivo: ");
scanf ("%d", &n);

if (n < 0){
    printf ("Valor invalido");
    return 0;
}

for (i = 1; i <= n; i ++){
    sum += i;
}
printf ("A soma dos primeiros %d numeros e %d", n, sum);

return 0;
}

