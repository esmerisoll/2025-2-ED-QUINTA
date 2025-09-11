#include <stdio.h>

int main() {
    int n;

    // Validação da entrada
    printf("Digite um numero inteiro positivo para a contagem regressiva: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Numero invalido. Por favor, digite um numero positivo: ");
        scanf("%d", &n);
    }

    // Loop para a contagem regressiva
    printf("Iniciando contagem...\n");
    while (n >= 0) {
        printf("%d\n", n);
        n--; // Decrementa o valor de n a cada iteração
    }

    printf("FIM!\n");

    return 0;
}