#include <stdio.h>

int main()
{
    int senhaUser = 5431, senhaInput;

    printf("Senha: ");
    scanf("%d", &senhaInput);

    if (senhaInput == senhaUser)
    {
        printf("Acesso permitido!");
    }
    else
    {
        printf("Acesso negado!");
    }

    return 0;
}
