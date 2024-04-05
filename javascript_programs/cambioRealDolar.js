let real = parseFloat(prompt("Digite uma quantia em R$: "))
let cambio = parseFloat(prompt("Cotação do dólar hoje: "))

let dolar = real / cambio
console.log(`R$${real.toFixed(2)} está valendo hoje US$${dolar.toFixed(2)}`)