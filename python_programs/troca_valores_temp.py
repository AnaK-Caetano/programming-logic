# Algoritmo utilizando uma variável temporária
num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))

temp = num1
num1 = num2
num2 = temp

print("Após a troca, num1 =", num1, "e num2 =", num2)