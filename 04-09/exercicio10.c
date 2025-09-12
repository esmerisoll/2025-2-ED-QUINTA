#include <stdio.h>

int main() {
    float preco, total = 0.0;
    int quantidadeItens = 0;

    printf("--- CAIXA REGISTRADORA ---\n");
    printf("Digite o preco de cada item (digite 0 para finalizar):\n");

    while (1) { 
        printf("Preco do item: ");
        scanf("%f", &preco);

        
        if (preco == 0) {
            break;
        }

        
        if (preco < 0) {
            printf("Preco invalido. O valor sera ignorado.\n");
            continue; 
        }

        
        total += preco;
        quantidadeItens++;
    }

    printf("\n--- FIM DA COMPRA ---\n");
    printf("Total de itens: %d\n", quantidadeItens);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}