#include <stdio.h>

int main() {
    float num, maior;
    int num1 = 1;

    printf("Digite numeros inteiros ou um negativo para encerrar:\n");
    scanf("%f", &num);

    while(num >= 0) {
        if(num1 || num > maior) {
            maior = num;
            num1 = 0;
        }

        printf("Digite numeros inteiros ou um negativo para encerrar:\n");
        scanf("%f", &num);
    }

    if(num1)
        printf("Nenhum numero valido foi digitado.\n");
    else
        printf("O maior numero digitado foi: %.2f\n", maior);

    return 0;
}
