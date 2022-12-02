//2)Desenvolva um programa que conta as linhas de um determinado arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countChar (char *str, char c);

int main () {

    FILE *file;

    file = fopen ("ex.txt", "r");

    if (file == NULL){
        printf ("Nao foi possivel abrir o arquivo");
        scanf ("%d");
        exit(0);
    }

    char text[500];
    char c = ".";

    fscanf (file, "%[^\n]s\n", text);
    printf ("%s\n", text);
    printf ("%d", countChar (text, c));

    /*while (!feof(file)){
        printf ("%s\n", text);
    }*/
        fclose(file);

    return 0;
}

int countChar(char *str, char c) {
  char* nextChar = strchr(str, c);
  int count = 0;

  while (nextChar) {
    count++;
    nextChar = strchr(nextChar + 1, c);
  }

  return count;
}