#include <stdio.h>

int main() {
    int n;

    printf("Quantas temperaturas voce deseja converter? ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        float celsius, fahrenheit;

        printf("Digite a temperatura %d em Celsius: ", i);
        scanf("%f", &celsius);

        
        fahrenheit = (celsius * 1.8) + 32;

       
        printf("%.1f C equivale a %.1f F\n", celsius, fahrenheit);
    }

    return 0;
}