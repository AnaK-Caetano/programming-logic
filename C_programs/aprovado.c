#include <stdio.h>

int main()
{
    float nota;

    printf("Digite sua nota, de 0 a 10: ");
    scanf("%f", &nota);

    if (nota <= 10 && nota >= 0){
        if(nota >= 7){
            printf("Você está aprovado com nota %.2f", nota);
        }else{
            printf("Você está reprovado com nota %.2f", nota);
        }
    }else{
        printf("Digite um número válido!!");
    }

    return 0;
}