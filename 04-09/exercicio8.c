#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    printf("Calculando a soma dos %d primeiros numeros impares:\n", n);

    
    for (int i = 0; i < n; i++) {
        int impar = 2 * i + 1; 
        soma += impar;
        printf("%d ", impar);
        if (i < n - 1) { 
            printf("+ ");
        }
    }

    printf("= %d\n", soma);

    return 0;
}