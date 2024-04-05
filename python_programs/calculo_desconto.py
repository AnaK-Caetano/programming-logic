preco = float(input("Digite o preço do produto: "))
desconto = float(input("Digite o percentual de desconto (Ex: Se foi 30,5%, digite apenas 30.5): "))
preco = preco * (1 - (desconto/100))
print("preço final do produto é R$", preco)
print("preço final do produto é R$", "%.2f" %preco) #printf-style String Formatting
print("preço final do produto é R$ {preco:.2f}") #F-Strings