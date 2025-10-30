#include <stdio.h>
#include <stdlib.h> // Para system("pause") ou system("cls") se necessário

// --- Declaração das Funções (Protótipos) ---
// (Boas práticas para organizar o código)

// Função para o menu (Opcional)
void exibirMenu();

// Função para Ordenação (Etapa 2 - Bubble Sort, baseado no PDF "Parte I")
void bubbleSort(int vetor[], int tamanho);

// Função de Busca (Etapa 3 - Pesquisa Binária, baseado no PDF "BB")
int pesquisaBinaria(int vetor[], int tamanho, int chave);

// Função para exibir o vetor (Item 2 do Menu)
void exibirProdutos(int vetor[], int tamanho);


// --- Função Principal ---
int main() {
    int maxProdutos = 100; // Define um tamanho máximo para o vetor
    int codigos[maxProdutos]; // Vetor para armazenar os códigos (Etapa 1)
    int totalCadastrados = 0; // Controla quantos produtos realmente temos
    int opcao;
    int codigoBusca, resultadoBusca;
    
    // (OPCIONAL) Menu interativo
    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // --- ETAPA 1: ENTRADA DE DADOS ---
                printf("--- Cadastro de Produtos ---\n");
                printf("Quantos produtos deseja cadastrar? ");
                scanf("%d", &totalCadastrados);

                if (totalCadastrados > maxProdutos) {
                    printf("Erro: Numero excede o limite de %d.\n", maxProdutos);
                    totalCadastrados = 0; // Reseta para evitar problemas
                } else {
                    printf("Digite os codigos dos produtos:\n");
                    for (int i = 0; i < totalCadastrados; i++) {
                        printf("Produto %d: ", i + 1);
                        scanf("%d", &codigos[i]);
                    }
                    
                    // --- ETAPA 2: ORDENAÇÃO DOS DADOS ---
                    // Chama a função Bubble Sort logo após o cadastro
                    bubbleSort(codigos, totalCadastrados);
                    
                    printf("\nProdutos cadastrados e ordenados com sucesso!\n");
                }
                break;

            case 2:
                // (OPCIONAL) Exibir produtos ordenados
                if (totalCadastrados == 0) {
                    printf("\nNenhum produto cadastrado ainda.\n");
                } else {
                    printf("\n--- Produtos Ordenados (Bubble Sort) ---\n");
                    exibirProdutos(codigos, totalCadastrados);
                }
                break;

            case 3:
                // --- ETAPA 3: BUSCA BINÁRIA ---
                if (totalCadastrados == 0) {
                    printf("\nNenhum produto cadastrado para buscar.\n");
                } else {
                    printf("\n--- Consulta de Produto (Busca Binaria) ---\n");
                    printf("Digite o codigo do produto a buscar: ");
                    scanf("%d", &codigoBusca);

                    // Chama a função de pesquisa binária
                    resultadoBusca = pesquisaBinaria(codigos, totalCadastrados, codigoBusca);

                    // --- ETAPA 4: SAÍDA DE DADOS ---
                    if (resultadoBusca != -1) {
                        printf("\n-------------------------------------\n");
                        printf("  Produto encontrado! (Na posicao %d do vetor)\n", resultadoBusca);
                        printf("-------------------------------------\n");
                    } else {
                        printf("\n-------------------------------------\n");
                        printf("  Produto nao encontrado no sistema.\n");
                        printf("-------------------------------------\n");
                    }
                }
                break;

            case 4:
                printf("\nEncerrando o sistema SmartMarket...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

        if (opcao != 4) {
             // Pausa para o usuário ler a saída antes de limpar o menu
             printf("\nPressione Enter para continuar...");
             // Limpa o buffer de entrada (para o getchar() funcionar)
             while (getchar() != '\n'); 
             getchar(); // Espera o Enter
        }

    } while (opcao != 4);

    return 0;
}


// --- Implementação das Funções ---

// (OPCIONAL) Função para mostrar o menu
void exibirMenu() {
    // system("cls"); // Descomente esta linha se quiser limpar a tela (Windows)
    // system("clear"); // Descomente esta linha se quiser limpar a tela (Linux/Mac)
    printf("\n--- Sistema de Estoque SmartMarket ---\n");
    printf("1 - Cadastrar novos produtos\n");
    printf("2 - Exibir todos os produtos ordenados\n");
    printf("3 - Buscar um produto pelo codigo\n");
    printf("4 - Encerrar o programa\n");
    printf("--------------------------------------\n");
    printf("Escolha uma opcao: ");
}

/**
 * ETAPA 2: Ordenação (Bubble Sort)
 * Baseado no PDF "Estrutura de Dados - Parte I"
 * Percorre o vetor, comparando pares de elementos adjacentes e
 * trocando-os de lugar se estiverem fora de ordem.
 * Repete o processo até que nenhum troca seja necessária.
 */
void bubbleSort(int vetor[], int tamanho) {
    int i, j, aux;
    // Loop externo que diminui a cada passagem (o maior já está no final)
    for (i = 0; i < tamanho - 1; i++) {
        // Loop interno que compara os pares
        for (j = 0; j < tamanho - 1 - i; j++) {
            // Se o elemento da esquerda for maior que o da direita, troca
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

/**
 * ETAPA 3: Pesquisa Binária
 * Baseado no PDF "Estrutura de Dados - BB"
 * Funciona apenas em vetores ORDENADOS.
 * Compara a chave de busca com o elemento do meio do vetor.
 * Se for igual, retorna a posição.
 * Se for menor, busca na metade esquerda.
 * Se for maior, busca na metade direita.
 * Retorna -1 se não encontrar.
 */
int pesquisaBinaria(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2; // Calcula o índice do meio

        // 1. Verifica se a chave está no meio
        if (chave == vetor[meio]) {
            return meio; // Encontrou! Retorna a posição.
        }
        
        // 2. Se a chave for menor, descarta a metade direita
        if (chave < vetor[meio]) {
            fim = meio - 1;
        } 
        // 3. Se a chave for maior, descarta a metade esquerda
        else {
            inicio = meio + 1;
        }
    }

    return -1; // Não encontrou
}

/**
 * (OPCIONAL) Função auxiliar para o item 2 do menu
 * Simplesmente percorre o vetor e imprime seus valores.
 */
void exibirProdutos(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Codigo: %d\n", vetor[i]);
    }
}