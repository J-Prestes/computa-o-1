#include <math.h>
#include <stdio.h>
int main ()
{
    float L, A, Lar, M2;
    int nb=1;

    printf("Insira a altura e a largura da parede em metros\n");
    scanf("%f %f", &A, &Lar);

    M2 = A*Lar;

    printf("A área total é de %.1f\n", M2);

        L= M2/2;
           nb = floor(L);
        if (L == nb)
        {
            printf("%.0f litros\n", L);
        }
        else
        {
            printf("%d litros\n", nb+1);
        }



    return 0;
}
