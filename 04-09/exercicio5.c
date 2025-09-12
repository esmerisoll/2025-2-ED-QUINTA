#include <stdio.h>

int main() {
    float nota, soma = 0.0;
    int quantidade = 0;

    printf("Digite as notas (um valor negativo para parar):\n");

   
    while (1) { 
        scanf("%f", &nota);

        
        if (nota < 0) {
            break;
        }

        soma += nota;
        quantidade++;
    }

    
    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("Quantidade de notas lidas: %d\n", quantidade);
        printf("Media das notas: %.2f\n", media);
    } else {
        printf("Nenhuma nota valida foi digitada.\n");
    }

    return 0;
}