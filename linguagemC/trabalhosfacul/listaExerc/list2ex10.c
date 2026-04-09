#include <stdio.h>

int main(int argc, char const *argv[])
{
    int altura;
    float pesoIdeal;
    char sexoUser;

    printf("Altura em cm: ");
    scanf("%d", &altura);

    printf("Sexo usuario (M - Masculino ou F - Feminino): ");
    scanf("%c", &sexoUser);

    if (sexoUser == 'M' || sexoUser == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58;
    }
    else if (sexoUser == 'F' || sexoUser == 'f')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else
    {
        printf("Entrada de sexo invalida");
    }

    printf("Peso ideal: %.3f", pesoIdeal);

    return 0;
}
