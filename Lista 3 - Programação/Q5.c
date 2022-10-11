#include <stdio.h>

int main () {

unsigned int j;
int i, res = 0;

printf ("Digite um numero natural: ");
scanf ("%u", &j);

for (i = 1; i <= j; i ++){
    res += i;
}
printf ("O somatorio resulta em %d", res);

return 0;
}
