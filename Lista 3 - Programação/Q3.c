/*3) No dia da estreia do filme Pantera Negra, a emissora de TV realizou uma pesquisa logo após o
encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e
sua opinião em relação ao ao filme: excelente – 3; bom – 2; regular – 1. Criar um algoritmo que
possa receber a idade e a opinião de 20 espectadores. Calcule e imprima:
• a média das idades das pessoas que responderam excelente;
• a quantidade de pessoas que responderam regular;
• a percentagem de pessoas que responderam bom entre todos os expectadores analisados.*/

#include <stdio.h>

int main () {

int idade, nota, i, sum, notaType[3];
float media, percent;

printf ("Voce foi selecionado para participar de uma pesquisa sobre o filme Pantera Negra!!!\n");

for (i = 0; i < 20; i++){

printf ("Informe sua idade: ");
scanf ("%d", &idade);
    if (idade <= 0){
        printf("Idade invalida");
        return 0;
    }

printf ("De uma nota para o filme\n3 - Exelente\n2 - Bom\n1 - Regular\n");
scanf ("%d", &nota);
    if (nota < 0 && nota > 4){
        printf ("Nota invalida");
        return 0;
    }
    switch (nota){
case 1:
    notaType [0] ++;
    break;
case 2:
    notaType [1] ++;
    break;
case 3:
    notaType [2] ++;
    break;
    }

    sum += idade;
}

media = sum / 20;
percent = (notaType[1] * 10) / 2;

printf ("A media das idades e: %.2f\n", media);
printf ("%d pessoas deram nota \"Regular\" para o filme\n", notaType[0]);
printf ("%.0f%% porcento dos entrevistados deram nota \"Bom\"\n", percent);


return 0;
}
