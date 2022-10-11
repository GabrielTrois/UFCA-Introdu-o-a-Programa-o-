//6) Dado n, calcular o n-ésimo termo da série de Fibonacci.

#include <stdio.h>

int main () {

int n, counter;
long long int n1, n2, n3;
n1 = 0;
n2 = 1;
n3 = 1;

printf ("Digite um numero para encontrar n-esimo termo da serie de Fibonacci: ");
scanf ("%d", &n);

if (n == 1){
    printf ("O n-esimo termo da serie de Fibonacci e 0");
}
    else{

// golden ratio
for (counter = 2; counter <= n; counter ++){
    n3 = n1 + n2;
    n2 = n3;
    n1 = n2;
}

printf ("O n-esimo termo da serie de Fibonacci e %lld", n3);
    }
return 0;
}
