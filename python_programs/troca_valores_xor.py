# Algoritmo usando operador lógico XOR (ou exclusivo)
num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))

num1 = num1^num2
num2 = num1^num2
num1 = num1^num2

print("Após a troca: numero 1 =", num1, "numero 2 =", num2 )
print(f'Após a troca: numero 1 = {num1} e numero 2 = {num2}') #F-Strings