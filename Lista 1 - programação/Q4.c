/*4) Escreva um programa que recebe o salário de uma pessoa e imprime o desconto mensal correspondente do INSS segundo a seguinte tabela: 
Valor do salário desconto 
menor ou igual a R$ 900,00 isento 
maior que R$ 900,00 e menor ou igual a R$ 1500,00 8% 
maior que R$ 1500,00 e menor ou igual a R$ 2500,00 10% 
maior que R$ 2500,00 12%  */


#include <stdio.h>

int main () {

int salario, desconto1, desconto2, desconto3;

    printf ("Digite seu salario: ");
    scanf ("%d", &salario);

    // Valores //
    desconto1 = (salario) * 0.08;
    desconto2 = (salario) * 0.1;
    desconto3 = (salario) * 0.12;

    if (salario <= 900)
        printf ("Isento");
    else if (900 < salario <= 1500)
        printf ("Desconto = %d", desconto1);
    else if (1500 < salario <= 2500)
        printf ("Desconto = %d", desconto2);
    else
        printf ("Desconto = %d", desconto3);


return 0;
}
