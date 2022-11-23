/*2) Faça um programa para calcular a área e o perímetro de um hexágono regular. O
programa deve implementar uma função chamada calc_hexa que calcula a área e o
perímetro de um hexágono regular de lado L. O programa deve solicitar ao usuário o
lado do polígono, calcular e imprimir a área e o perímetro do polígono. O programa
termina quando for digitado um valor negativo qualquer para o lado. A função deve
obedecer o seguinte protótipo:
void calc_hexa(float l, floar *area, float *perimetro);
Lembrando que a área e o perímetro de um hexágono regular são dados por:
area=(3×L

2×√3)/2 e

perimetro=6×L, respectivamente. Para os cálculos, obrigatoriamente você deve utilizar
as funções sqrt e pow da biblioteca math.h.*/

#include <stdio.h>
#include <math.h>

void cal_hexa (float L, float *area, float *perimetro);

int main () {

    float L, *area, *perimetro;
    float areaf = 0, perimetrof = 0;

    area = &areaf;
    perimetro = &perimetrof;

    printf ("Digite o valor do lado: ");
    scanf ("%f", &L);
        if (L < 0){
            printf ("Valor invalido");
            return 0;
        }

    cal_hexa (L, area, perimetro);

    printf ("\nArea = %f\nPerimetro = %f", areaf, perimetrof);

    return 0;
}

void cal_hexa (float L, float *area, float *perimetro){
    *perimetro = L * 6;

    *area = (3 * pow(L, 2) * sqrt(3) / 2);
}