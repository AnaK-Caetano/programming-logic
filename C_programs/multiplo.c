#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro número inteiro: ");
    scanf("%d", &n2);

    if (n1 % n2 ==0){
        printf("O número %d é multiplo de %d!", n1, n2);
    }else{
        printf("O número %d não é multiplo de %d!", n1, n2);
    }

    return 0;
}