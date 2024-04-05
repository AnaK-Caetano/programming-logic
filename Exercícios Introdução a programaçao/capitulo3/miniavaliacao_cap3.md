# Miniavaliação do capítulo 3


### 1. Faça um programa em linguagem C que receba do teclado o peso (KG) e a altura (m) de um usuário, calcule e imprima no console, com duas casas decimais, o IMC deste usuário.

[calculadora_imc.c](../../C_programs/calculadora_imc.c) | [calculadora_imc.py](../../python_programs/calculadora_imc.py) | [calculadoraImc.js](../../javascript_programs/calculadoraImc.js) | [calculadoraImc.java](../../java_programs/calculadoraImc.java)

### 2. A média para que o aluno seja aprovado no IFPE sem precisar fazer prova final é 7,0. Ou seja, se um determinado estudante obtiver nota 7,0 ou superior estará aprovado, inferior a 7,0 não está aprovado. Faça um programa que receba UMA nota de zero (0) a dez (10) (considere a nota correta) e imprima uma mensagem informando a situação do estudante quanto a sua aprovação. (Pesquise a utilização da cláusula if)

[aprovado.c](../../C_programs/aprovado.c) | [aprovado.py](../../python_programs/aprovado.py) | [aprovado.js](../../javascript_programs/aprovado.js) | [aprovado.java](../../java_programs/aprovado.java)


### 3. Receba um número do usuário e imprima uma mensagem informando se ele é par ou impar. (Dica: use o operador resto)

[par_impar.c](../../C_programs/par_impar.c) | [par_impar.py](../../python_programs/par_impar.py) | [parImpar.js](../../javascript_programs/parImpar.js) | [parImpar.java](../../java_programs/parImpar.java)


### 4. Identifique e corrija os erros em cada uma das instruções a seguir (Nota: pode haver mais de um erro por instrução):    

- a) ` scanf("d", valor); `
```
scanf("%d", &valor);
```

- b) ` printf("O produto de %d e %k é %d"\n, x, y) ; `
```
printf("O produto de %d e %d é %d\n", x, y, x*y);
```

- c) ` primeiroNumero + segundoNumero = somaDosNumeros `
```
somaDosNumeros = primeiroNumero + segundoNumero;
```

- d) ` */Programa para determinar o maior de tres inteiros/* `
```
/* Programa para determinar o maior de tres inteiros */
```

- e) ` Scanf ("%á", umlnteiro) ; `
```
scanf("%d", &umlnteiro);
```

- f) ` printf("0 resto de %d dividido por %â e\n", x, y, x % y); `
```
printf("0 resto de %d dividido por %d e %d\n", x, y, x % y);
```

- g) ` print("A soma e %d\n, " x + y) ; `
```
printf("A soma e %d\n", x + y); 
```

- h) ` Printf("O valor fornecido e: %d\n, &valor); `
```
printf("O valor fornecido eh: %d\n", valor);
```

### 5. Escreva um programa que leia cinco números inteiros e então determine e imprima o maior e o menor inteiro do grupo.

[maior_e_menor_if.c](../../C_programs/maior_e_menor_if.c) | [maior_e_menor_if.py](../../python_programs/maior_e_menor_if.py) | [maiorEMenorIf.js](../../javascript_programs/maiorEMenorIf.js) | [maiorEMenorIf.java](../../java_programs/maiorEMenorIf.java)

### 6.  Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo. (Dica: Use o operador resto.)

[multiplo.c](../../C_programs/multiplo.c) | [multiplo.py](../../python_programs/multiplo.py) | [multiplo.js](../../javascript_programs/multiplo.js) | [multiplo.java](../../java_programs/multiplo.java)
