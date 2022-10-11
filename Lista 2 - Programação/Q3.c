//3) Dado um inteiro não-negativo n, determinar n!

#include <stdio.h>

int main () {

int n, nfat, counter = 1;

printf ("Digite um numero: ");
scanf ("%d", &n);
nfat = n;

if (n < 0){
    printf ("Impossivel");
    return 0;
}

    if (n == 0)
    printf ("\nFatorial de %d e 1\n", n);

    else
    {
        while ((counter <= n) && (n > 1))
        {
            nfat *= (n-1);
            n -= 1;
            counter ++;
        }
        printf ("\nO fatorial e %d\n", nfat);
    }

}
