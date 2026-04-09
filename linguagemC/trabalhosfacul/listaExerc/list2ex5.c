#include <stdio.h>

int main()
{
    float salario;

    printf("Informe o salario do funcionario: \n");
    scanf("%f", &salario);

    if (salario <= 3000)
    {
        printf("Salario reajustado: R$%.2f", salario * 1.35);
    }
    else
    {
        printf("Salario reajustado: R$%.2f", salario * 1.15);
    }

    return 0;
}