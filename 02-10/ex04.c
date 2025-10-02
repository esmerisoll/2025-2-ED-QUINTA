#include <stdio.h>

// Procedimento para mostrar a contagem entre A e B
void mostrarContagem(int a, int b) {
    printf("\nA contagem entre %d e %d e:\n", a, b);
    if (a <= b) {
        // Contagem crescente
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        // Contagem decrescente
        for (int i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Função para solicitar e ler os valores do usuário usando ponteiros
void obterValores(int *a, int *b) {
    printf("Digite o valor inicial da contagem (A): ");
    scanf("%d", a);

    printf("Digite o valor final da contagem (B): ");
    scanf("%d", b);
}

int main() {
    int valor_inicial;
    int valor_final;

    // Chama a função para obter os valores do usuário
    obterValores(&valor_inicial, &valor_final);

    // Chama o procedimento para mostrar a contagem
    mostrarContagem(valor_inicial, valor_final);

    return 0;
}