/*1)Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”;
(b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o
usuário entre com o caractere ‘0’;
(c) Feche o arquivo. Agora, abra e leia o arquivo, caractere por caractere, e
escreva na tela todos os caracteres armazenados.*/

#include <stdio.h>

int main () {

    FILE *file;

    file = fopen ("arq.txt", "w");

    if (file == NULL){
        printf ("Nao foi possivel abrir o arquivo");
        scanf ("%d");
        exit(0);
    }

    char phrase[100], frase[100];

    scanf ("%s", phrase);

    while (phrase[0] != '0'){
        fputs (phrase, file);

        scanf ("%s", phrase);
    }

    fclose (file);
    fopen ("arq.txt", "r");

    fscanf (file, "%s", frase);

    printf ("\n%s\n", frase);

    fclose (file);

    return 0;
}