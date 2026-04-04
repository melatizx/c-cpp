#include <stdio.h>
#include <locale.h>

// Validação de dados
char lerChar()
{
    char c;

    while (1)
    {
        if (scanf(" %c", &c) != 1)
        {
            printf("Entrada invalida. Tente novamente!\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        return c;
    }
}

int main()
{
    char option;

    printf("Selecione qual opção você deseja");
    printf("1 - Cadastrar item \n2 - Buscar \n3 - Excluir item \n4 - Editar item \n5 - Salvar estoque \n6 - Sair\n");
    option = lerChar();

    printf(" %c", option);

    return 0;
}
