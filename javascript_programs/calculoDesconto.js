let preco = parseFloat(prompt("Digite o valor do produto: "))
let desconto = parseFloat(prompt("Digite o percentual de desconto (Ex. Se o desconto for 25,5%, digite apenas 25.5): "))

preco = preco * (1 - (desconto/100))

console.log(`O preço final do produto após o desconto de ${desconto}% é R$${preco.toFixed(2)}`)