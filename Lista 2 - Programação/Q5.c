/*5) Dado um natural n, faça um programa para determinar o número harmônico Hn definido como:

Hn = ∑
k=1
n
1
k*/

#include <stdio.h>

int main () {

unsigned int n;
float k, harmony = 0;

printf ("Digite um numero natural: ");
scanf ("%u", &n);

for (k = 1; k < n || n == k; k ++){
    harmony += (1/k);
}
printf ("O harmonico Hn e %f", harmony);

return 0;
}
