#include <stdio.h>
int main ()
{
    int b, a, A;
    float p=0.8, peri, perit;

    printf("insira a base em metros:\n");
    scanf("%d", &b);

    printf("insira a altura em metros:\n");
    scanf("%d", &a);

    perit = 2*b+2*a;
    peri = perit-p;
    A = b*a;
    printf("O perimetro total é: %.1f\nA quantidade de rodapé é: %.1f\nA Area é: %.1f", perit, peri, A);

    return 0;
}
