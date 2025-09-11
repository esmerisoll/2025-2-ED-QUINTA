#include <stdio.h>

int main() {
    float preco, total = 0.0;
    int quantidadeItens = 0;

    printf("--- CAIXA REGISTRADORA ---\n");
    printf("Digite o preco de cada item (digite 0 para finalizar):\n");

    while (1) { // Loop infinito
        printf("Preco do item: ");
        scanf("%f", &preco);

        // Condição de parada
        if (preco == 0) {
            break;
        }

        // Validação de preço negativo
        if (preco < 0) {
            printf("Preco invalido. O valor sera ignorado.\n");
            continue; // Pula para a próxima iteração do loop
        }

        // Acumula os valores válidos
        total += preco;
        quantidadeItens++;
    }

    printf("\n--- FIM DA COMPRA ---\n");
    printf("Total de itens: %d\n", quantidadeItens);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}