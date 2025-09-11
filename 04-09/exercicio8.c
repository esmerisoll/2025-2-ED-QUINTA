#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    printf("Calculando a soma dos %d primeiros numeros impares:\n", n);

    // O loop executa N vezes. 'i' vai de 0 até n-1.
    for (int i = 0; i < n; i++) {
        int impar = 2 * i + 1; // Gera o i-ésimo número ímpar (1, 3, 5, ...)
        soma += impar;
        printf("%d ", impar);
        if (i < n - 1) { // Adiciona o sinal de '+' entre os números
            printf("+ ");
        }
    }

    printf("= %d\n", soma);

    return 0;
}