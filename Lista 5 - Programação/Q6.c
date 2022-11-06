/*6) Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da
cidade i para a cidade j. Dado um itinerário com k cidades, calcular o custo total para o
itinerário.*/

#include <stdio.h>

// n[linha][coluna]

int main () {

    int cont, n[3][3], a, i, j, sum = 0;

        n[0][0] = 4;
        n[0][1] = 1;
        n[0][2] = 2;
        n[0][3] = 3;
        n[1][0] = 5;
        n[1][1] = 2;
        n[1][2] = 1;
        n[1][3] = 400;
        n[2][0] = 2;
        n[2][1] = 1;
        n[2][2] = 3;
        n[2][3] = 8;
        n[3][0] = 7;
        n[3][1] = 1;
        n[3][2] = 2;
        n[3][3] = 5;

    printf ("Digite quantos intinerarios seram feitos: ");
    scanf ("%d", &a);

    printf ("Digite os valores de I e J\n");

    for (cont = 0; cont < a; cont++){
        scanf ("%d %d", &i, &j);
        sum += n[i][j];
    }

    printf ("A soma dos intinerarios da: %d", sum);

    return 0;
}
