#include <stdio.h>
int main ()
{
    float n1, n2, n3, media;

    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1+ n2 + n3) / 3;

    if (media>8)
        printf("Aprovado com Distinção.\n");
    else if (media>=6)
        printf("Aprovado Direto.\n");
    else if (media>=4)
        printf("Vai para Recuperação.\n");
    else
        printf("Reprovado Direto.");


    printf("Sua media: %.1f", media);

    return 0;
}
