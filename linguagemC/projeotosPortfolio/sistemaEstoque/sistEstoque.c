#include <stdio.h>
#include <locale.h>

// Validação de dados
char lerInt()
{
    int op;

    while (1)
    {
        if (scanf(" %d", &op) != 1)
        {
            printf("Entrada invalida. Tente novamente!\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        return op;
    }
}

// Funções
void cadastrarItem()
{
    printf(">>Cadastrando item...");
}
void buscarItem()
{
    printf(">>Buscando item...");
}
void excluirItem()
{
    printf(">>Excluindo item...");
}
void editarItem()
{
    printf(">> Editando item...\n");
}

void salvarEstoque()
{
    printf(">> Salvando estoque...\n");
}

int main()
{
    int option;

    do
    {
        printf("======MENU======");
        printf("Selecione qual opção você deseja:\n");
        printf("1 - Cadastrar item \n2 - Buscar \n3 - Excluir item \n4 - Editar item \n5 - Salvar estoque \n6 - Sair\n");

        option = lerInt();

        switch (option)
        {
        }

    } while (option < 1 || option > 6);

    printf(" %c", option);

    return 0;
}
