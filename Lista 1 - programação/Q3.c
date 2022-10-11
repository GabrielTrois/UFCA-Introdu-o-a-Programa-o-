/*3) Converter uma determinada quantia, dada em reais, para uma das seguintes moedas: 
- Euro 
- Dólar americano 
- Libra esterlina 
- Peso argentino */


#include <stdio.h>

int main () {

 float real, dolar, libra, peso;

    printf ("Digite o valor em Reais: ")/
    scanf ("%f", &real);

    // Valores //
    dolar = (real) / 5.26;
    libra = (real) / 5.72;
    peso = (real) * 28,37;

    printf ("Dolares = %.2f\nLibras = %.2f\nPesos = %.2f", dolar, libra, peso);

return 0;
}
