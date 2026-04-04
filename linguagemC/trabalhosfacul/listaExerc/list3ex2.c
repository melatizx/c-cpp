#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    float num1, num2, resul;
    char option;

    printf("Selecione dois numeros: \n");
    scanf(" %f %f", &num1, &num2);

    while (scanf(" %f %f", &num1, &num2) != 2)
    {
        printf("Entrada inválida, tente novamente!");

        while (getchar() != '\n')
            ;
    }

    printf("Qual opção você deseja realizar? \n1 - Média \n2 - Dif entre numeros \n3 - Prod entre os numeros \n4 - Div real do primeiro com o segundo");
    scanf(" %c", &option);

    while (scanf(" %c", &option) != 1)
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
        resul = num1 - num2;
    }
    else if (option == '3')
    {
        resul = num1 * num2;
    }
    else if (option == '4')
    {
        resul = num1 / num2;
    }
    else
    {
        printf("Entrada inválida, tente novamente!");
    }

    printf("Resultado: %f", resul);

    return 0;
}
