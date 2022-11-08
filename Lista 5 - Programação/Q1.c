/*1) Faça um programa que recebe uma frase e a retorna criptografada da seguinte
maneira: troca todas as ocorrências de A por 1, de E por 2, de I por 3, de O por 4 e de
U por 5.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char frase[100] = "";

    printf ("Digite uma frase: ");
    scanf ("%[^\n]s", frase);

    for (int i = 0; i < strlen(frase); i++){
            switch (frase[i]){
            case 'A':
                frase[i] = '1';
                break;
            case 'E':
                frase[i] = '2';
                break;
            case 'I':
                frase[i] = '3';
                break;
            case 'O':
                frase[i] = '4';
                break;
            case 'U':
                frase[i] = '5';
                break;      

            default:
                break;
            }
        }

    for (int i = 0; i < 100; i++){
    printf ("%c", frase[i]);
    }


    return 0;
}

