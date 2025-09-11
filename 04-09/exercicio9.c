#include <stdio.h>

int main() {
    int inicio, fim, k;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);
    printf("Digite o numero para buscar seus multiplos (k): ");
    scanf("%d", &k);

    printf("Multiplos de %d no intervalo [%d, %d]:\n", k, inicio, fim);

    // O loop 'for' percorre cada número do início ao fim
    for (int i = inicio; i <= fim; i++) {
        // Se o número 'i' é divisível por 'k', ele é um múltiplo
        if (i % k == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}