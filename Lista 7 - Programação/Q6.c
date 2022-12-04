//6) Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são vogais.

#include <stdio.h>
#include <ctype.h>

int main () {

    FILE *file;

    file = fopen ("ex.txt", "r");

    if (file == NULL){
        printf ("Nao foi possivel abrir o arquivo");
        scanf ("%d");
        exit(0);
    }

    char ch;
    int n= 0;

    while (ch != EOF){
    ch = fgetc(file);
        switch (toupper(ch)){
        case 'A':
            n++;
            break;
        case 'E':
            n++;
            break;
        case 'I':
            n++;
            break;
        case 'O':
            n++;
            break;
        case 'U':
            n++;
            break;
        
        default:
            break;
        }
    }

    printf ("%d", n);

    return 0;
}