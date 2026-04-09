#include <stdio.h>

int main()
{
    float valorAtual, valorFinal, valorDesc;

    printf("Informe o valor do produto: ");
    scanf("%f", &valorAtual);

    if (valorAtual < 800)
    {
        valorDesc = 0;
    }
    else
    {
        valorDesc = valorAtual * 0.04;
        valorFinal = valorAtual - valorDesc;
    }

    printf("\nValor atual: R$%.2f\n", valorAtual);
    printf("Desconto de: R$%2f\n", valorDesc);
    printf("Valor final: R$%.2f", valorFinal);

    return 0;
}
