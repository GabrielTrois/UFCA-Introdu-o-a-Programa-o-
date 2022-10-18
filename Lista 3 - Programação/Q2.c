/*2) Uma pessoa aplicou um capital de x reais a juros mensais de z durante 1 ano. Determinar o
montante de cada mês durante este período considerando juros simples e juros compostos.*/

#include <stdio.h>

int main () {

int x, i;
float z, mJS, mJC;

printf ("Digite o capital em reais: ");
scanf ("%d", &x);
printf ("Digite a porcentagem de juros: ");
scanf ("%f", &z);

printf ("\nJuros Simples\n");

for (i = 1; i <= 12; i++){
    mJS = (x * i * (z/100)) + x;
    printf ("O montante no mes %d e de %.2f\n", i, mJS);
}

printf ("\nJuros Compostos\n");

for (i = 1; i <= 12; i++){
    mJC = (x * i * (z/100)) + x;
    x = mJC;
    printf ("O montante no mes %d e de %.2f\n", i, mJC);
}

return 0;
}
