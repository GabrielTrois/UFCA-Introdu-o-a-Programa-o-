/*4) Num campeonato de vôlei de praia, se inscreveram 15 equipes. Sabendo que na ficha de
inscrição de cada time consta, além de outros dados, o peso e a idade de 2 jogadores, criar um
programa que apresente: peso médio e idade média de cada equipe e peso médio e idade média de
todos os participantes.*/

#include <stdio.h>

int main () {

    int peso[15], idade[15], peso2[15], idade2[15], i;
    float pmedio[15], imedia[15];

    for ( i = 1; i <= 2; i++)
    {
      printf ("Digite o peso e idade do jogador 1 do time %d: ", i);
      scanf ("%d %d", &peso[i], &idade[i]);
      printf ("Digite o peso e idade do jogador 2 do time %d: ", i);
      scanf ("%d %d", &peso2[i], &idade2[i]);

        if (peso[i] < 0 || idade[i] < 0){
            printf ("Valor Invalido");
            return 0;
        }

      pmedio[i] += peso[i] + peso2[i];
      imedia[i] += idade[i] + idade2[i];

      pmedio[0] += peso[i] + peso2[i];
      imedia[0] += idade[i] + idade2[i];
    }

    for (i = 1; i <= 2; i++)
    {
        printf ("O peso medio do time %d e %.2f\n", i, pmedio[i] / 2);
        printf ("A idade media do time %d e %.2f\n", i, imedia[i] / 2);
    }

        printf ("\nO peso medio total e %.2f\n", pmedio[0] / 30);
        printf ("A idade media total e %.2f\n", imedia[0] / 30);

    return 0;
}
