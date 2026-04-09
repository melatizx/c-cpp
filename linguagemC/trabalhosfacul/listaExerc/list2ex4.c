#include <stdio.h>

int main()
{
    float salario;

    printf("Informe o salario do funcionario: \n");
    scanf("%f", &salario);

    if (salario <= 1500)
    {
        printf("Salario reajustado: R$%.2f", salario * 1.30);
    }
    else
    {
        printf("Salario nao tem direito ao reajuste");
    }

    return 0;
}
