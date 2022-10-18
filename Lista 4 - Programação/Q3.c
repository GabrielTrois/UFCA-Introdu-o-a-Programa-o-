#include <stdio.h>

int main () {

    long long int n[2];

    n[0] = 0;
    n[1] = 1;

    printf ("%lld\n", n[0]);
    sleep(1);
    printf ("%lld\n", n[1]);
    sleep(1);

    while (1){
        n[2] = n[0] + n[1];
        n[0] = n[1];
        n[1] = n[2];

        printf ("%lld\n", n[2]);
        sleep(1);
    }
    return 0;
}
