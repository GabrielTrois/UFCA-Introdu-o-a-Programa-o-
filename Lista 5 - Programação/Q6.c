/*6) Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da
cidade i para a cidade j. Dado um itinerário com k cidades, calcular o custo total para o
itinerário.*/

/*      n[0][0] = 4;
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
        n[3][3] = 5;*/

#include <stdio.h>
#include <string.h>
#define RANGE 4

// n[linha][coluna]

int main () {

    int cont, v[RANGE],n[3][3], i[RANGE], j[RANGE], t = 0, l = 0, sum = 0;

    printf ("Digite os valores do vetor\n");

        for (cont = 0; cont < RANGE; cont++){
            scanf ("%d", &v[cont]);
        }

        for (cont = 0; cont < RANGE; cont++){
            if (cont % 2 == 0){
                i[l] = v[l];
                l++;
            }
            else{
                j[t] = v[t];
                t++;
            }
            }

    printf ("A soma dos intinerarios da: %d", sum);

    return 0;
}

