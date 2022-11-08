/*2) Faça um programa que recebe uma frase e retorna a mesma frase com a seguinte
modificação: a primeira letra de cada palavra deve ser maiúscula (Dica: utilizar função
toupper de ctype.h).*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {

    char frase[100] = "";

    scanf ("%[^\n]s", frase);

    frase[0] = toupper (frase[0]);

    for (int i = 1; i < strlen(frase); i++){
        if (frase[i] == ' ')
            frase[i + 1] = toupper (frase[i + 1]);
    }

    printf ("%s", frase);

    return 0;
}