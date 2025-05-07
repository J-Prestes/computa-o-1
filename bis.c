#include <stdio.h>
int bis (int ano)
{
    if(ano % 4 == 0 &&(ano % 100 !=0 || ano% 400 == 0))
    {
        printf("Ano %d é bissexto", ano);
    }
    else
    {
        printf("Ano %d não é bissexto", ano);
    }
}

int main()
{
    int anob;
    printf("coloque um ano que quer verificar:\n");
    scanf("%d", &anob);
    bis(anob);
    return 0;
}
