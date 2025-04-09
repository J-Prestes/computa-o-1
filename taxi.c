#include <stdio.h>
int main ()
{
    float A, G, Ra, Rg;

    printf("Insira: R$álcool, R$gasolina, rendimento álcool e rendimento gasolina respectivamente:");
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

    if(Ra/A>Rg/G)
        printf("A");
    else
        printf("G");

    return 0;
}

