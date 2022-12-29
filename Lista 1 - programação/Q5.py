#5) Ler dois números inteiros do usuário ("digite um inteiro: ", "digite outro inteiro"). Em seguida, o programa deve ler um terceiro inteiro ("digite uma operação: "). Se esse último inteiro for 1, então o programa deve  imprimir a soma dos dois primeiros inteiros lidos. Se o último inteiro for 2, então a subtração deve ser  impressa. Idem para 3, 4, 5: multiplicação, quociente, resto da divisão. Caso o terceiro inteiro não seja um  número de 1 a 5, o programa deve imprimir algo como "operação inválida". O programa também deve  imprimir uma mensagem de erro em caso de divisão por zero.

n1 = int(input("Digite um numero inteiro: "))
n2 = int(input("Digite outro numero inteiro: "))

print("")
print("Digite 1 para Soma")
print("Digite 2 para Subtracao")
print("Digite 3 para Multiplicacao")
print("Digite 4 para o Quociente da Divisao")
print("Digite 5 para o Resto da divisao")

operation = input()

match operation:
    case "1":
        print("{}".format(n1 + n2))
    case "2":
        print("{}".format(n1 - n2))
    case "3":
        print("{}".format(n1 * n2))
    case "4":
        if n2 != 0:
            print("{}".format(n1 / n2))
        else:
            print("Erro. Multiplicação por zero")
    case "5":
        if n2 != 0:
            print("{}".format(n1 % n2))
        else:
            print("Erro. Multiplicação por zero")
    case _:
        print("Operação invalida")
