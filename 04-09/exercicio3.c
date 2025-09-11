#include <stdio.h>

int main() {
    int n;

    // Pergunta quantas temperaturas serão convertidas
    printf("Quantas temperaturas voce deseja converter? ");
    scanf("%d", &n);

    // O loop 'for' executa 'n' vezes
    for (int i = 1; i <= n; i++) {
        float celsius, fahrenheit;

        // Solicita cada temperatura
        printf("Digite a temperatura %d em Celsius: ", i);
        scanf("%f", &celsius);

        // Aplica a fórmula de conversão
        fahrenheit = (celsius * 1.8) + 32;

        // Mostra o resultado formatado
        printf("%.1f C equivale a %.1f F\n", celsius, fahrenheit);
    }

    return 0;
}