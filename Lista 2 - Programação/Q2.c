/*2) Dados o número n de alunos de uma turma de Fundamentos de Programação e suas notas da
primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e
nota mínima = 0).*/

#include <stdio.h>

int main () {

int   nAlunos, counter = 1;
float nota, menor, maior;

printf ("Quantos alunos estao na turma: ");
scanf ("%d", &nAlunos);

if (nAlunos <= 0)
{
    printf ("Numero invalido");
    return 0;
}

for (counter = 1; counter <= nAlunos; counter++){
    printf ("Digite a nota do aluno %d: ", counter);
    scanf("%f",&nota);

        if ((nota < 0) && (nota > 100))
        {
            printf ("Impossivel");
            return 0;
        }
    if (counter == 1){
        menor = nota;
        maior = nota;
    }
    else{
        if (nota > maior){
             maior = nota;
        }
        if (nota < menor){
             menor = nota;
        }
    }
}


printf("A menor nota e: %.2f \nA maior nota e: %.2f", menor, maior);
return 0;
}
