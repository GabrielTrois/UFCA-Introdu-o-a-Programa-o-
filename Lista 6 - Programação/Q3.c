/*3) Escreva um programa que declare uma matriz 10x10 de inteiros. Você deve criar uma
função do tipo void para inicializar a matriz com zeros usando um ponteiro para a
matriz. Faça outra função void para preencher depois a matriz com os números de 99 a
0, também usando ponteiro para matriz como parâmetro. Por fim, o programa deve
imprimir a matriz.*/

#include <stdio.h>
#include <stdlib.h>

void zero (int *v);

int main () {

    int *v[9][9];
    
    zero (v);

    printf ("%d", v[0][0]);

    return 0;
}

void zero (int *v){
    int i, j;

    for (i = 0; i < 9; i++){
        for (i = 0; i < 9; i++){
            v[i][j] = 0;
        }
    }
}