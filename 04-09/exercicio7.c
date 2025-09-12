#include <stdio.h>

int main() {
    int opcao;

    do {
        // Exibe o menu
        printf("\n--- MENU DE OPCOES ---\n");
        printf("1) Dobrar um numero\n");
        printf("2) Metade de um numero\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        
        switch (opcao) {
            case 1: {
                int num;
                printf("Digite um numero para dobrar: ");
                scanf("%d", &num);
                printf("O dobro de %d e %d\n", num, num * 2);
                break;
            }
            case 2: {
                float num;
                printf("Digite um numero para ver sua metade: ");
                scanf("%f", &num);
                printf("A metade de %.1f e %.1f\n", num, num / 2.0);
                break;
            }
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0); 

    return 0;
}