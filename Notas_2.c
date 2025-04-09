#include <stdio.h>
int main ()
{
    float n1, n2, n3, media, freq;

    printf("Digite as 3 notas em sequencia separadas por espaço e por ultimo sua porcentagem de frequencia: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &freq);

    media = (n1+ n2 + n3) / 3;

    if (media>8 && freq>=75)
        printf("O estudante foi aprovado com distinção pois teve média %.1f e frequência %1.f%\n", media, freq);
    else if (media>=6 && media<=8 && freq>=75)
        printf("O estudante foi aprovado direto pois teve média %.1f e frequência %1.f%\n", media, freq);
    else if (media>=4 && media<6 && freq>75 || media>=6 && freq<75 || media>=4 && freq>50 && freq<75)
        printf("O estudante vai para Recuperação pois teve média %.1f e frequência %1.f%\n", media, freq);
    else
        printf("Reprovado Direto.");

    return 0;
}
