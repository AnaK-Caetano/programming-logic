#include <stdio.h>

int main()
{
	// Declaração das variáveis
	float real, taxa = 5.03085 ;
	
	// Entrada de dados
	printf("Diga um valor em R$: ");
	scanf("%f", &real);
	
	// Processamento
	float dolar = real / taxa;
	
	// Saída de dados
	printf("R$%.2f equivale a %.2f dólares ", real, dolar);
	
	return 0;
}