#include <stdio.h>

int main()
{
    float num1, num2, resul;
    int option;

    printf("Selecione dois numeros: \n");
    scanf(" %f %f", &num1, &num2);

    while (scanf(" %f %f", &num1, &num2) != 2)
    {
        printf("Entrada inválida, tente novamente!");

        while (getchar() != '\n')
            ;
    }

    printf("Qual opção você deseja realizar? \n1 - Média \n2 - Prod entre os numeros \n");
    scanf(" %d", &option);

    while (scanf(" %d", &option) != 1)
    {
        printf("Entrada inválida, tente novamente!");

        while (getchar() != '\n')
            ;
    }

    if (option == '1')
    {
        resul = (num1 + num2) / 2;
    }
    else if (option == '2')
    {
        resul = num1 * num2;
    }
    else
    {
        printf("Entrada inválida, tente novamente!");
    }

    printf("Resultado: %f", resul);
    return 0;
}
