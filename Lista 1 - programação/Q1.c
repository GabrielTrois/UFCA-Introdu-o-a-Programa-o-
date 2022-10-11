//1) Receber três números e imprimir o maior.

#include <stdio.h>

int main () {
    int num1, num2, num3;
    printf("Digite o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf ("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf ("%d", &num3);

    if (num1 > num2)
        printf ("%d", num1);
        else if (num1 > num3)
            printf ("%d", num1);

    else if (num2 > num1)
        printf ("%d", num2);
        else if (num2 > num3)
            printf ("%d", num2);

    else
        printf("%d", num3);
return 0;
}
