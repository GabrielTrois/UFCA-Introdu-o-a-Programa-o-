/*3) Desenvolva um programa que lê o conteúdo do arquivo e cria um arquivo
com o mesmo conteúdo, mas com todas as letras minúsculas convertidas para
maiúsculas.*/

#include <stdio.h>
#include <ctype.h>
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

    char text[500];
    int i;

    fscanf (file, "%[^\n]s\n", text);

    for (i = 0; i < strlen(text); i++){
        if (isupper(text[i])){
            text[i] = tolower(text[i]); 
        }
        else {
            text[i] = toupper(text[i]);
        }
    }
    printf ("%s", text);

    fclose(file);

    return 0;
}