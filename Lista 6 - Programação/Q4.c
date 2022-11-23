/*4) Qual o resultado do código abaixo? Explique cada linha.
int x = 100, *p, **pp;
p = &x;
pp = &p;
printf(“Valor de pp: %d\n”, **pp);*/

#include <stdio.h>

int main (){
    int x = 100, *p, **pp;

    p = &x;
    pp = &p;

    printf ("Valor de pp: %d\n", **pp);

    return 0;
}