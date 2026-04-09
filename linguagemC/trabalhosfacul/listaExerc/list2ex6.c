#include <stdio.h>

int main()
{
    int option;
    float valorInv, valorRnd;

    printf("Informe o tipo de investimento: \n");
    printf("1 - Poupança\n");
    printf("2 - Fundo de renda fixa\n");
    scanf("%d", &option);

    printf("Valor de investimento: ");
    scanf("%f", &valorInv);

    if (option == 1)
    {
        valorRnd = valorInv * 0.03;
    }
    else if (option == 2)
    {
        valorRnd = valorInv * 0.04;
    }
    else
    {
        printf("Entrada de dados invalida");
    }

    printf("Rendimento mensal: %f", valorRnd);

    return 0;
}
