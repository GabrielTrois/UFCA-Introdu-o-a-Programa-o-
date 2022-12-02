//2)Desenvolva um programa que conta as linhas de um determinado arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    FILE *file;

    file = fopen ("ex.txt", "r");

    if (file == NULL){
        printf ("Nao foi possivel abrir o arquivo");
        scanf ("%d");
        exit(0);
    }

    char ch;
    int line = 0;

    while (ch != EOF){
        ch = fgetc(file);
        //printf("%c", ch);
          if (ch == '.')
            line++;
    }

        fclose(file);

        printf ("\nA quantidade de linhas e de: %d\n", line);

    return 0;
}
