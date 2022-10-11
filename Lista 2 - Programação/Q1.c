/*1) Escreva um programa em C que realiza a soma de vários números. A quantidade de números a
serem somados não é conhecida a priori e nem fornecida pelo usuário explicitamente. O programa
deve começar lendo do usuário um número. Em seguida, o programa deve perguntar ao usuário se
mais algum número vai ser digitado; se o usuário digitar 1, o programa deve ler mais um número e
então novamente perguntar se mais algum número vai ser digitado; quando o usuário finalmente
digitar um número diferente de 1, o programa deve imprimir na tela a soma de todos os números
que foram digitados (não incluindo, porém, os números digitados como resposta à pergunta sobre se
mais algum número deve ser digitado).*/

#include <stdio.h>

int main () {

int n, repeat, sum;

printf ("Digite um numero: ");
scanf ("%d", &n);
printf ("Deseja digitar mais algum numero? (1 para sim, 0 para nao) ");
scanf ("%d", &repeat);

sum = n;

while (repeat == 1) {
    printf ("Digite um numero: ");
    scanf ("%d", &n);

    sum += n;

    printf ("Deseja digitar mais algum numero? (1 para sim, 0 para nao) ");
    scanf ("%d", &repeat);
}

printf ("%d", sum);

return 0;
}
