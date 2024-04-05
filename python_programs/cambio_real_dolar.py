real = float(input("Digite uma quantia em R$: "))
cambio = float(input("Cotação do dólar hoje: "))
dolar = real / cambio
print("R$", real, "está valendo hoje US$", dolar)
print(f'R${real:.2f} está valendo hoje US${dolar:.2f}') #F-Strings
