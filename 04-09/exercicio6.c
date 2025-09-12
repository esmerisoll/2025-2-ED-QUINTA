#include <stdio.h>

int main() {
    int n;

    
    printf("Digite um numero inteiro positivo para a contagem regressiva: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Numero invalido. Por favor, digite um numero positivo: ");
        scanf("%d", &n);
    }

    
    printf("Iniciando contagem...\n");
    while (n >= 0) {
        printf("%d\n", n);
        n--; 
    }

    printf("FIM!\n");

    return 0;
}