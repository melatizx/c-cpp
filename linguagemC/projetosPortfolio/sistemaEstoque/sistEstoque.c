#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

#define MAX_ITENS 100

typedef struct sistEstoque
{
    char nomeItem[50];
    float precoItem;
    int qtdItem;
} Item;

// Funções
void cadastrarItem(Item estoque[], int *total)
{
    if (*total >= MAX_ITENS)
    {
        printf("Estoque cheio!");
        return;
    }

    system("cls");
    printf("Nome do item:\n");
    scanf(" %[^\n]", estoque[*total].nomeItem);

    printf("Preço do item:\n");
    scanf(" %f", &estoque[*total].precoItem);

    printf("Quantidade do item:\n");
    scanf(" %d", &estoque[*total].qtdItem);

    (*total)++;

    printf("Item cadastrado!");
}

void listarItem(Item estoque[], int *total)
{
    int i;

    if (total == 0)
    {
        printf("Estoque vazio!");
        return;
    }

    system("cls");
    printf("\n======ESTOQUE======\n");

    for (i = 0; i < *total; i++)
    {
        printf("Item: %d\n", i + 1);
        printf("Nome do item: %s\n", estoque[i].nomeItem);
        printf("Preço do item: R$%.2f\n", estoque[i].precoItem);
        printf("Quantidade do item: %d\n\n", estoque[i].qtdItem);
    }
}

void excluirItem()
{
    printf(">>Excluindo item...");
}
void editarItem()
{
    printf(">> Editando item...\n");
}

void salvarEstoque(Item estoque[], int *total)
{
    FILE *fptr = fopen("estoque.txt", "w");

    if (fptr == NULL)
    {
        printf("Erro ao abrir o arquivo!");
        return;
    }

    for (int i = 0; i < *total; i++)
    {
        fprintf(fptr, "%s; R$%.2f; %d\n", estoque[i].nomeItem, estoque[i].precoItem, estoque[i].qtdItem);
    }

    fclose(fptr);
}

void carregarEstoque(Item estoque[], int *total)
{
    FILE *fptr = fopen("estoque.txt", "r");

    if (fptr == NULL)
    {
        *total = 0;
        return;
    }

    *total = 0;

    while (fscanf(fptr, " %49[^;];%f;%d", estoque[*total].nomeItem, &estoque[*total].precoItem, &estoque[*total].qtdItem) == 3)
    {
        (*total)++;
    }

    fclose(fptr);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Item estoque[MAX_ITENS];
    int option, total = 0;
    carregarEstoque(estoque, &total);

    do
    {
        printf("\n======MENU======\n");
        printf("1 - Cadastrar item\n");
        printf("2 - Listar Estoque\n");
        printf("3 - Excluir item\n");
        printf("4 - Editar item\n");
        printf("5 - Baixar estoque\n");
        printf("6 - Sair\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            cadastrarItem(estoque, &total);
            break;

        case 2:
            listarItem(estoque, &total);
            break;

        case 3:
            excluirItem();
            break;

        case 4:
            editarItem();
            break;

        case 5:
            salvarEstoque(estoque, &total);
            break;

        case 6:
            printf("Saindo...");
            break;

        default:
            printf("Opção invalida");
        }

    } while (option != 6);

    return 0;
}
