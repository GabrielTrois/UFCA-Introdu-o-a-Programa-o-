/*7) Ler uma data (no formato dd, mm e aaaa, onde cada entrada é um inteiro) e imprimir se a data é válida ou
não. Sabe-se que um ano é bissexto se ele é divisível por 4 e não divisível por 100 ou ele é divisível por 400.*/

#include <stdio.h>

int main() {

int dia, mes ,ano;

printf ("Digite o dia: ");
scanf ("%d", &dia);
printf ("Digite o mes: ");
scanf ("%d", &mes);
printf ("Digite o ano: ");
scanf ("%d", &ano);

if (ano % 4 == 0)
{
    if (mes == 2 && dia >=1 || dia <=29){
            printf ("%d:%d:%d", dia, mes, ano);
            }
}
        else if (mes == 2 && dia >=1 || dia <=28){
                printf ("%d:%d:%d", dia, mes, ano);  
                }
        else if (mes % 2 == 0 && dia >=1 || dia <=30){
                printf ("%d:%d:%d", dia, mes, ano);
                }
        else if (dia >=1 && dia <=31)
        printf ("%d:%d:%d", dia, mes, ano);
        
    else
    printf ("Impossivel");

return 0;
}
