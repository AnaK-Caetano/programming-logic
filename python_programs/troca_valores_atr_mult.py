# Algoritmo utilizando operadores de atribuição múltipla
num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))

num1, num2 = num2, num1

print("Após a troca, num1 =", num1, "e num2 =", num2)