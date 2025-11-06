#include <stdio.h>

/*
 * Desafio de Xadrez - MateCheck (Nível Novato)
 * * Objetivo: Implementar a movimentação de três peças (Bispo, Torre, Rainha)
 * usando as três estruturas de repetição (for, while, do-while) para
 * demonstrar o mesmo resultado em todas elas.
 * * Requisitos:
 * - Bispo: 5 casas na diagonal superior direita ("cima, direita")
 * - Torre: 5 casas para a direita ("Direita")
 * - Rainha: 8 casas para a esquerda ("Esquerda")
 *
 * O código deve ser bem documentado, conforme os requisitos não funcionais.
 */

// 1. Entrada de Dados (Constantes)
// Define constantes para o número de casas, facilitando a manutenção
// e evitando "números mágicos" no código.
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
    
    // Nível Novato - Movimentação das Peças
    
    // -------------------------------------------------------------------------
    // Desafio 1: Implementação com Estrutura 'for'
    // -------------------------------------------------------------------------
    // O 'for' é ideal quando sabemos exatamente quantas vezes o loop
    // deve executar (um número definido de movimentos).
    printf("--- SIMULAÇÃO DE MOVIMENTO (USANDO FOR) ---\n\n");

    // Implementação de Movimentação do Bispo (5 casas)
    printf("Movimentação do Bispo (for):\n");
    // A variável 'i' é declarada localmente na estrutura 'for'.
    for (int i = 0; i < CASAS_BISPO; i++) {
        // Requisito especial do Bispo: "cima, direita"
        printf("cima, direita\n");
    }

    // Implementação de Movimentação da Torre (5 casas)
    printf("\nMovimentação da Torre (for):\n");
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha (8 casas)
    printf("\nMovimentação da Rainha (for):\n");
    for (int i = 0; i < CASAS_RAINHA; i++) {
        printf("Esquerda\n");
    }

    printf("\n-------------------------------------------------\n\n");

    // -------------------------------------------------------------------------
    // Desafio 2: Implementação com Estrutura 'while'
    // -------------------------------------------------------------------------
    // O 'while' (enquanto) exige que a variável de controle seja
    // declarada e incrementada manualmente.
    printf("--- SIMULAÇÃO DE MOVIMENTO (USANDO WHILE) ---\n\n");

    // Variável de controle para os loops 'while'
    int i_while = 0;

    // Implementação de Movimentação do Bispo (while)
    printf("Movimentação do Bispo (while):\n");
    i_while = 0; // Reseta o contador para a peça
    while (i_while < CASAS_BISPO) {
        printf("cima, direita\n");
        i_while++; // Incremento manual
    }

    // Implementação de Movimentação da Torre (while)
    printf("\nMovimentação da Torre (while):\n");
    i_while = 0; // Reseta o contador
    while (i_while < CASAS_TORRE) {
        printf("Direita\n");
        i_while++;
    }

    // Implementação de Movimentação da Rainha (while)
    printf("\nMovimentação da Rainha (while):\n");
    i_while = 0; // Reseta o contador
    while (i_while < CASAS_RAINHA) {
        printf("Esquerda\n");
        i_while++;
    }

    printf("\n-------------------------------------------------\n\n");

    // -------------------------------------------------------------------------
    // Desafio 3: Implementação com Estrutura 'do-while'
    // -------------------------------------------------------------------------
    // O 'do-while' (faça...enquanto) é similar ao 'while', mas garante
    // que o bloco de código execute Pelo Menos UMA vez, pois a
    // condição é verificada no final.
    printf("--- SIMULAÇÃO DE MOVIMENTO (USANDO DO-WHILE) ---\n\n");

    // Variável de controle para os loops 'do-while'
    int i_do = 0;

    // Implementação de Movimentação do Bispo (do-while)
    printf("Movimentação do Bispo (do-while):\n");
    i_do = 0; // Reseta o contador
    do {
        printf("cima, direita\n");
        i_do++; // Incremento manual
    } while (i_do < CASAS_BISPO);

    // Implementação de Movimentação da Torre (do-while)
    printf("\nMovimentação da Torre (do-while):\n");
    i_do = 0; // Reseta o contador
    do {
        printf("Direita\n");
        i_do++;
    } while (i_do < CASAS_TORRE);

    // Implementação de Movimentação da Rainha (do-while)
    printf("\nMovimentação da Rainha (do-while):\n");
    i_do = 0; // Reseta o contador
    do {
        printf("Esquerda\n");
        i_do++;
    } while (i_do < CASAS_RAINHA);

    printf("\n-------------------------------------------------\n");
    
    // Os Níveis Aventureiro e Mestre são deixados para
    // os próximos desafios.
    
    return 0; // Indica que o programa terminou com sucesso
}