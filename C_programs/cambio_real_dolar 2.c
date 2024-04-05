#include <stdio.h>

int main()
{
	float real, taxa;

	printf("Diga um valor em R$: ");
	scanf("%f", &real);
	printf("Diga a taxa de câmbio de hoje: ");
	scanf("%f", &taxa);

	float dolar = real / taxa;
	printf("R$%.2f equivale a %.2f dólares ", real, dolar);
	
	return 0;
}