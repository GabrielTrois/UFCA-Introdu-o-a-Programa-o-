/*5) Ler dois números inteiros do usuário ("digite um inteiro: ", "digite outro inteiro"). Em seguida, o programa deve ler um terceiro inteiro ("digite uma operação: "). Se esse último inteiro for 1, então o programa deve  imprimir a soma dos dois primeiros inteiros lidos. Se o último inteiro for 2, então a subtração deve ser  impressa. Idem para 3, 4, 5: multiplicação, quociente, resto da divisão. Caso o terceiro inteiro não seja um  número de 1 a 5, o programa deve imprimir algo como "operação inválida". O programa também deve  imprimir uma mensagem de erro em caso de divisão por zero. */


#include <stdio.h>

int main () {

int n1, n2;

printf ("Digite um inteiro ");
scanf ("%d", &n1);
printf ("Digite outro inteiro ");
scanf ("%d", &n2);

        int operation = 0;

        printf("Digite 1 para Soma\n");
        printf("Digite 2 para Subtracao\n");
        printf("Digite 3 para Multiplica�ao\n");
        printf("Digite 4 para o Quociente da Divisao\n");
        printf("Digite 5 para o Resto da divisao\n");

        scanf("%d", &operation);

         switch(operation){
        case 1:
            printf("Resultado = %d", (n1 + n2));
        break;

        case 2:
            printf("Resultado = %d", (n1 - n2));
        break;

        case 3:
            printf("Resultado = %d", (n1 * n2));
        break;

        case 4:
            if (n2 == 0)
                printf ("Erro");
            else
            printf("Resultado = %d\n", (n1 / n2));
        break;

        case 5:
            printf("Resto = %d\n", (n1 % n2));
        break;

        default:
            printf("Operacao invalida\n");
        break;
         }

return 0;
}
