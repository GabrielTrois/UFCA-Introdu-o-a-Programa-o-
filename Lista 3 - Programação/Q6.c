/*6) Faça um programa que leia um número inteiro n e imprima n linhas na tela com o seguinte
formato (exemplo se n = 6):
+
* +
* * +
* * * +
* * * * +
* * * * * +*/

#include <stdio.h>

int main () {

    int n, i, j;

    printf ("De um valor a n: ");
    scanf ("%d", &n);
    if (n <= 0){
        printf ("Invalido");
        return 0;
    }
    for (i = 1; i <= n; i++){

        for (j = 1; j < i; j++){
            printf ("*");
        }
        printf ("+\n");
    }

    return 0;
}
