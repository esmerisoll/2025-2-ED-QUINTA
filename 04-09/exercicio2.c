#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);

    printf("%d - %d = %d\n", a, b, a - b);

    printf("%d * %d = %d\n", a, b, a * b);

    printf("%d / %d = %.2f\n", a, b, (float)a / b);

    return 0;
}