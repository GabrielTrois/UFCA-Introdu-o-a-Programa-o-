#*3) Converter uma determinada quantia, dada em reais, para uma das seguintes moedas:
#- Euro
#- Dólar americano
#- Libra esterlina
#- Peso argentino

real = float(input("Digite uma quatia em reais: "))

print("Seu dinheiro vale")
print("{:.2f} Dolares".format(real / 5.26))
print("{:.2f} Euros".format(real / 5.72))
print("{:.2f} Pesos".format(real * 28,37))