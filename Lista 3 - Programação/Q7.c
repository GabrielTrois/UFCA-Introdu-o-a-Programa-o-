/*7) Crie um programa para gerenciar as contas correntes dos clientes do Banco X. O algoritmo
deverá ler, para cada cliente, o código do cliente (tipo inteiro), o saldo anterior (tipo real) e as
movimentações da conta.
Cada movimentação é composta por um código (inteiro, 1, 2 ou 3, indicando crédito, débito ou fim
das movimentações deste cliente) e um valor, para as operações 1 ou 2. Deverá ser impresso, para
cada cliente, o seu código e o saldo atual (após o processamento das movimentações).
Ao final, deverá ser impresso o total de dinheiro em caixa no banco (soma dos saldos de todos os
clientes) e o código do cliente que possui o maior saldo. O programa se encerra quando se digita um
código de cliente com valor menor ou igual a zero.*/

#include <stdio.h>
// RANGE = A quantidade de clientes com contas no Banco X
#define RANGE 5

int main () {

    int code[RANGE], move, i, t;
    float saldo[RANGE], money, totalsaldo = 0, maior;

    for (i = 0; i < RANGE; i++){
        printf ("Digite o codigo de cliente %d: \n", i + 1);
        scanf ("%d", &code[i]);
        printf ("Digite o saldo anterior do cliente %d: \n", i + 1);
        scanf ("%f", &saldo[i]);

        if (code < 0 || saldo < 0){
            return 0;
        }

    printf ("Qual modificaçao de conta deseja fazer? (1 para credito, 2 para debito e 3 para finalizar modificaçoes)");
    scanf ("%d", &move);

        t = 1;

        while (t = 1){
            switch (move)
            {
            case 1:
                printf ("Digite o valor que deseja depositar: ");
                scanf ("%d", &money);
                printf ("Seu saldo agora e de %.2f", saldo[i] + money);
                break;
            case 2:
                printf ("Digite o valor que deseja sacar: ");
                scanf ("%d", &money);
                printf ("Seu saldo agora e de %.2f", saldo[i] - money);
                break;
            case 3:
                t = 0;
            default:
                break;
            }
        }
        printf ("O codigo do cliente %d e: %d", i, code[i]);
        printf ("O saldo atual do cliente %d e: %2.f", i, saldo[i]);     
    }


    for (i = 0; i < RANGE; i++)
    {
        totalsaldo += saldo[i];
    }

    for (i = 0; i < RANGE; i++){
        if (i = 0){
            maior = saldo[i];
        }
        else{
            if (maior < saldo[i]){
                maior = saldo[i];
            }
        }
    }

    printf ("O total de dinheiro em caixa no banco e de: %.2f", totalsaldo);
    printf ("O maior saldo e de: %.2f", maior);

    return 0;
}