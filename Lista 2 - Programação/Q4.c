/*4) Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos
diferentes de n.
Exemplo: 6 é perfeito, pois 1+2+3 = 6.
Dado um inteiro positivo n, verificar se n é perfeito.*/

#include <stdio.h>

int main () {

int n, div = 0, counter;

printf ("Digite um numero inteiro: ");
scanf ("%d", &n);

for (counter = 1;counter < n; counter ++){
    if (n % counter == 0){
        div += counter;
    }
}
if (n == div)
    printf ("%d e um numero perfeito", n);
else
    printf ("%d nao e um numero perfeito", n);
return 0;
}
