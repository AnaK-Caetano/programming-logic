#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração de variáveis
    int n1, n2, n3, n4, n5, maior_numero, menor_numero;
    
    // Entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("Digite um número inteiro: ");
    scanf("%d", &n2);
    printf("Digite um número inteiro: ");
    scanf("%d", &n3);
    printf("Digite um número inteiro: ");
    scanf("%d", &n4);
    printf("Digite um número inteiro: ");
    scanf("%d", &n5);
    
    // Processamento de dados
    // Determinação do maior número
    maior_numero = n1;
    if (n2 > maior_numero) {
        maior_numero = n2;
    }
    if (n3 > maior_numero) {
        maior_numero = n3;
    }
    if (n4 > maior_numero) {
        maior_numero = n4;
    }
    if (n5 > maior_numero) {
        maior_numero = n5;
    }

    // Determinação do menor número
    menor_numero = n1;
    if (n2 < menor_numero) {
        menor_numero = n2;
    }
    if (n3 < menor_numero) {
        menor_numero = n3;
    }
    if (n4 < menor_numero) {
        menor_numero = n4;
    }
    if (n5 < menor_numero) {
        menor_numero = n5;
    }
    
    // Saída de dados
    printf("O maior número é: %d\n", maior_numero);
    printf("O menor número é: %d\n", menor_numero);

    return 0;
}