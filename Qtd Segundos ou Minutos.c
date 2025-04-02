#include <stdio.h>
int main ()
{
    float hora, min, seg, qs, qm;

    printf("digite a hora, minuto, segundo:");
    scanf("%f %f %f", &hora, &min, &seg);

    if(hora>1 && min>15)
    {
    qs= (hora*3600.0 + min*60 + seg);
    printf("Quantidade de segundos: %f\n", qs);
    }
    else
    {
    qm= (hora*60 + min + seg/60);
    printf("Quantidade de minutos: %f\n", qm);
    }
    return 0;
}
