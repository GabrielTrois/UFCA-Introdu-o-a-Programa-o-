#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float MEDIA (int v[], int size);
float MAIOR (float v[], int size);
int MENOR (int v[], int size);

int main () {

    int *filhos, *idade, *mediaEX, *media, i = 1, size = 0, t = 0;
    float *salario;
    char *sexo;

    salario = (int*)malloc(1*sizeof(int));
    sexo = (int*)malloc(1*sizeof(int));
    filhos = (int*)malloc(1*sizeof(int));
    idade = (int*)malloc(1*sizeof(int));
    mediaEX = (int*)malloc(1*sizeof(int));

    while (1){
        salario = (int*)realloc(salario, i*sizeof(int));
        sexo = (int*)realloc(sexo, i*sizeof(int));
        filhos = (int*)realloc(filhos, i*sizeof(int));
        idade = (int*)realloc(idade, i*sizeof(int));

        printf ("\nDados da pessoa %d\n\n", i);

        printf ("Digite sua idade: ");
        scanf ("%d", &idade[i-1]);
            while (idade[i-1] < 0){
                printf ("Idade invalido\nDigite uma idade valida: ");
                 scanf ("%d", &idade[i-1]);
            }
                
                if (idade[i-1] == 0){
                    for (i = 0; i < size; i++){
                            if (sexo[i] == 'f' || sexo[i] == 'F' && salario[i] < 300){
                                t++;
                                mediaEX = (int*)realloc(mediaEX, t*sizeof(int));
                                mediaEX[i] = idade[i];
                            }
                            else{}
                    }

                    printf ("\nA media da idade das mulheres com menos de 300 reais de salario e de: %.f Anos\n", MEDIA (mediaEX, t));
                    printf ("A media das idades e de: %.f Anos\n", MEDIA (idade, size));
                    printf ("A media da quantidade de filhos e de: %.1f Filhos\n", MEDIA (filhos, size));
                    printf ("O maior salario e de: %.2f Reais\n", MAIOR (salario, size));
                    printf ("A menor idade e de: %d Anos\n", MENOR (idade, size));
                return 0;
                }

        printf ("Digite seu salario: ");
        scanf ("%f", &salario[i-1]);
            while (salario[i-1] < 0){
                printf ("Salario invalido\nDigite um valor valido: ");
                 scanf ("%f", &salario[i-1]);
            }
        
        printf ("Digite seu sexo (M ou F): ");
        scanf ("%s", &sexo[i-1]);
            while (sexo[i-1] != 'F' && sexo[i-1] != 'f' && sexo[i-1] != 'M' && sexo[i-1] != 'm'){
                printf ("Sexo invalido\nDigite um sexo valido: ");
                 scanf ("%c", &sexo[i-1]);
            }

        printf ("Digite a quantidade de filhos que tem: ");
        scanf ("%d", &filhos[i-1]);
            while (filhos[i-1] < 0){
                printf ("Quantidade de filhos invalida\nDigite uma quantidade de filhos valida: ");
                 scanf ("%d", &filhos[i-1]);
            }

        i++;
        size++;
    }

    return 0;
}

float MEDIA (int v[], int size){
    if (size == 0) return 0;

    else if (size == size) return (v[size - 1] + MEDIA(v, size - 1)) / size;
    else return v[size - 1] + MEDIA(v, size - 1);
}

float MAIOR (float v[], int size){
    float maior;
    int i;

    for (i = 0; i < size; i++){
        if (i == 0)
            maior = v[0];

        else{
            if (v[i] > maior)
             maior = v[i];
        }
    return maior;
}
}

int MENOR (int v[], int size){
    int menor, i;

    for (i = 0; i < size; i++){
        if (i == 0)
            menor = v[0];

        else{
            if (v[i] < menor)
             menor = v[i];
        }
    return menor;
}
}