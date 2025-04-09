#include <stdio.h>

int main()
{
    int n;

    printf("Digite um número positivo:");
    scanf("%d", &n);

        int i = 1;
        while (i<=100)
        {
            if (i%n == 2)
            {
                printf("%d\n", i);
            }
            i = i + 1;
        }


    return 0;
}
