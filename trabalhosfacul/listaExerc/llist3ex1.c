#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Informem o valor de dois numeros: \n");
    scanf(" %f %f", &n1, &n2);

    while (scanf(" %f %f", &n1, &n2) != 2)
    {
        printf("Entrada invalida. Tente novamente:\n");

        while (getchar() != '\n')
            ;
    }

    if (n1 < n2)
    {
        printf("Menor valor: %2.f", n1);
    }
    else if (n2 < n1)
    {
        printf("Menor valor: %2.f", n2);
    }
    else
    {
        printf("Valor iguais");
    }

    return 0;
}
