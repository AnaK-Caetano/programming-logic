peso = float(input("Digite seu peso (ex: 60.4), em kg: "))
altura = float(input("Digite sua altura (ex: 1.61), em metros: "))
imc = peso /(altura**2)
print("o seu imc é", imc)
print("o seu imc é", "%.2f" %imc) ##printf-style String Formatting
print("O seu IMC é", round(imc, 2)) #função round
print(f'O seu imc é {imc:.2f}') #F-Strings
