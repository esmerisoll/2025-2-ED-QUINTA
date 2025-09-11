#include <stdio.h>

int main() {
    int idade;

    // Pede a idade pela primeira vez
    printf("Digite uma idade entre 0 e 120: ");
    scanf("%d", &idade);

    // Enquanto a idade estiver fora do intervalo, continua pedindo
    while (idade < 0 || idade > 120) {
        printf("Valor invalido! A idade deve estar entre 0 e 120.\n");
        printf("Digite novamente: ");
        scanf("%d", &idade);
    }

    // Quando o loop termina, a idade é válida
    printf("Idade valida: %d\n", idade);

    return 0;
}
