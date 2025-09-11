#include <stdio.h>

int main() {
    float nota, soma = 0.0;
    int quantidade = 0;

    printf("Digite as notas (um valor negativo para parar):\n");

    // Loop infinito que será interrompido por um 'break'
    while (1) { // ou while(true) se usar <stdbool.h>
        scanf("%f", &nota);

        // Critério de parada: se a nota for negativa, sai do loop
        if (nota < 0) {
            break;
        }

        // Se a nota for válida, acumula na soma e incrementa o contador
        soma += nota;
        quantidade++;
    }

    // Após o loop, verifica se alguma nota foi lida para evitar divisão por zero
    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("Quantidade de notas lidas: %d\n", quantidade);
        printf("Media das notas: %.2f\n", media);
    } else {
        printf("Nenhuma nota valida foi digitada.\n");
    }

    return 0;
}