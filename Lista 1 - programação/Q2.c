//2) Ler três números, possíveis lados de um triângulo, e imprimir a classificação segundo os lados (se for o  caso).

#include <stdio.h>

int main () {

int lado1, lado2, lado3;
    printf("Digite o valor dos tres lados do triangulo: ");
    scanf ("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 == lado3 == lado1)
        printf ("O triangulo e Equilatero");

    else if (lado1 == lado2)
        printf("O triangulo e Isoceles");
            else if (lado2 == lado3)
                printf("O triangulo e Isoceles");
                else if (lado3 == lado1)
                    printf("O triangulo e Isoceles");

    else
        printf("O triangulo e Escaleno");
return 0;
}
