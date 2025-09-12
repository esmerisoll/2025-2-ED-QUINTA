#include <stdio.h>

int main() {
    int idade;

    
    printf("Digite uma idade entre 0 e 120: ");
    scanf("%d", &idade);

    
    while (idade < 0 || idade > 120) {
        printf("Valor invalido! A idade deve estar entre 0 e 120.\n");
        printf("Digite novamente: ");
        scanf("%d", &idade);
    }

    
    printf("Idade valida: %d\n", idade);

    return 0;
}
