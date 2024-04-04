#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char caracter, convertido;
	
	printf("digite uma letra maiuscula: ");
	scanf("%c", &caracter);
	convertido = caracter + 32;
	printf("A letra em minusculo eh: %c", convertido);
	
	return 0;
}