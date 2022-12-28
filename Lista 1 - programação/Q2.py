#2) Ler três números, possíveis lados de um triângulo, e imprimir a classificação segundo os lados (se for o  caso)

l1 = int(input("Digite os lados do triângulo "))
l2 = int(input("Digite os lados do triângulo "))
l3 = int(input("Digite os lados do triângulo "))

m = (l1 + l2 + l3) - max(l1, l2, l3)

if (max(l1, l2, l3)) > m:
    print("O triângulo não existe")

else:
    if l1 != l2 and l2 != l3 and l3 != l1:
        print("O triângulo é Escaleno")
    elif l1 == l2 == l3:
        print("O triângulo é Equilatero")
    else:
        print("O triângulo é Isoceles")
