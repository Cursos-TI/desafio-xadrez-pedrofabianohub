#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nível mestre - Pedro Fabiano Vieira dos Santos

void movimentoTorre(int num)
{
    if (num > 0)
    {
        printf("Direita \n");
        movimentoTorre(num - 1);
    }
}

void movimentoBispo(int num)
{
    if (num > 0)
    {
        printf("Cima ");
        for (int i = num; i >= num; i--)
        {
            printf("Direita \n");
        }

        movimentoBispo(num - 1);
    }
}

void movimentoRainha(int num)
{
    if (num > 0)
    {
        printf("Esquerda \n");
        movimentoRainha(num - 1);
    }
}

void movimentoCavalo()
{

    int quantidadeMaxHorizontal = 1;
    int quantidadeMaxVertical = 2;

    for (int i = 0; i < quantidadeMaxHorizontal; i++)
    {
        for (int j = 0; j < quantidadeMaxVertical; j++)
        {
            printf("Cima ");
        }

        printf("Direita \n");
    }
}

int main()
{

    int opcao = 0;

    do
    {
        printf("Peças de xadrez e seus movimentos:\n");
        printf("1 - Mover torre\n");
        printf("2 - Mover bispo\n");
        printf("3 - Mover rainha\n");
        printf("4 - Mover cavalo\n");
        printf("5 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            int num = 4;
            movimentoTorre(num);
            break;
        case 2:
            num = 4;
            movimentoBispo(num);
            break;
        case 3:
            num = 8;
            movimentoRainha(num);
            break;
        case 4:
            movimentoCavalo();
            break;
        default:
            if (opcao != 5)
            {
                printf("Opção inválida, tente novamente. \n");
            }
        }

    } while (opcao != 5);

    printf("Encerrando o programa...");

    return 0;
}
