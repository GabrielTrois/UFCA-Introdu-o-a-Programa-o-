#4) Escreva um programa que recebe o salário de uma pessoa e imprime o desconto mensal correspondente do INSS segundo a seguinte tabela:
#Valor do salário desconto
#menor ou igual a R$ 900,00 isento
#maior que R$ 900,00 e menor ou igual a R$ 1500,00 8%
#maior que R$ 1500,00 e menor ou igual a R$ 2500,00 10%
#maior que R$ 2500,00 12%

salario = float(input("Digite seu salário: "))

if salario <= 900:
    print("Isento")
elif 900 < salario < 1500:
    print("Desconto de: {:.2f}".format(salario * 0.08))
elif 1500 < salario < 2500:
    print("Desconto de: {:.2f}".format(salario * 0.1))
else:
    print("Desconto de: {:.2f}".format(salario * 0.12))