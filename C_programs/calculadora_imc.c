#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite seu peso, em Kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura, em m (Ex.:1.61): ");
    scanf("%f", &altura);

    imc = peso/(altura * altura);

    printf("O seu imc eh %.2f", imc);

    return 0;
}