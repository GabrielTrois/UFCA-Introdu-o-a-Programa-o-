/*5) Criar uma função que calcule o número de combinações de n elementos p a p. A
fórmula da combinação é dada da seguinte forma: Cn,p = n!/p!(n-p)!*/

#include <stdio.h>

float FAT (int n);

float COMB (int n, int p);


float FAT (int n) {
    if (n == 0) return 1;

        float nfat = n;

        for (int i = 0; i < n; i++){
            n --;
            nfat *= n;
        }
        return nfat;
}

float COMB (int n, int p){

    float nfat, pfat, npfat;
    int np = n - p;

    nfat  = FAT (n);
    pfat  = FAT (p);
    npfat = FAT (np);

    return nfat / (pfat * npfat);
}
