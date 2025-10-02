#include <stdio.h>

// Procedimento para imprimir os elementos de um vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função que implementa o Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor_entrada[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int tamanho = 10;

    printf("Vetor original: ");
    imprimirVetor(vetor_entrada, tamanho);

    // Chama a função de ordenação
    bubbleSort(vetor_entrada, tamanho);

    printf("Vetor ordenado: ");
    imprimirVetor(vetor_entrada, tamanho);

    return 0;
}