/*6) Publicar o número de acertos de cada aluno em uma prova em forma de testes. A
prova consta de 10 questões, cada uma com cinco alternativas identificadas por A-1,
B-2, C-3, D-4 e E-5. São dados:
- o cartão gabarito;
- o número de alunos da turma;
- o cartão de respostas para cada aluno, contendo o seu número e suas respostas.*/

#include <stdio.h>
#define RANGE 100
#define RANGE2 10

int main () {

    int q[RANGE2][RANGE], alunos, i, j;

    printf ("Quantos alunos tem na turma: ");
    scanf ("%d", &alunos);
        if (alunos < 0){
            printf ("Valor impossivel");
            return 0;
        }

        // i = quantidade de alunos, j = gabarito

        for (i = 0; i < alunos; i++){
            printf ("Digite o gabarito do aluno %d (A-1, B-2, C-3, D-4 e E-5)\n", i + 1);
                for (j = 0; j < RANGE2; j++){
                    scanf ("%d", &q[j][i]);
                        
                     
                        }
                }

        printf ("\nO gabarito e: A C D E A A D E E C\n\nA turma tem %d alunos\n", alunos);
        for (i = 0; i < alunos; i++){
            printf ("\nRespostas do aluno %d\n", i + 1);
                for (j = 0; j < RANGE2; j++){
                    if (q[j][i] == 1)
                    printf ("A\n");
                        else if (q[j][i] == 2)
                        printf ("B\n");
                            else if (q[j][i] == 3)
                            printf ("C\n");
                                else if (q[j][i] == 4)
                                printf ("D\n");
                                    else 
                                    printf ("E\n");
                    }
        }
    return 0;
}