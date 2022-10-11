//6) Dados um inteiro x e um inteiro não-negativo n, calcular x elevado a n sem utilizar funções pré-definidas.

#include <stdio.h>
//#include <math.h>

int main() {

int numX, potencia, times;
unsigned int numN;

    printf ("Digite numero inteiro: ");
    scanf ("%d", &numX);
    printf ("Digite numero natural: ");
    scanf ("%u", &numN);

potencia = numX;
times = 1;

    do {
        potencia = (potencia * numX);
        times = (times) + 1;
    } while (times <= numN);

    printf ("%d", potencia);

//int XN = pow(numX, numN);
//printf ("%d", XN);

return 0;
}
