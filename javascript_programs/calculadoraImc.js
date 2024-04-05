let peso = parseFloat(prompt("Digite seu peso (ex: 60.4), em kg: "))
let altura = parseFloat(prompt("Digite sua altura (ex: 1.61), em metros: "))
let imc = peso / (altura**2)
console.log(`O seu imc é ${imc.toFixed(2)}`)