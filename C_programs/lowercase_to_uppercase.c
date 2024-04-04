#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char caracter, convertido;
	
	printf("digite uma letra minuscula: ");
	scanf("%c", &caracter);
	convertido = caracter - 32;
	printf("A letra em maiusculo eh: %c", convertido);
	
	return 0;
}