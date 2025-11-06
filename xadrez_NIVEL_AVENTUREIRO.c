#include <stdio.h>

/*
 * Desafio de Xadrez - MateCheck (Nível Novato e Aventureiro)
 *
 * O código deve ser bem documentado, conforme os requisitos não funcionais.
 */

// --- Constantes Nível Novato ---
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

// --- Constantes Nível Aventureiro (Movimento em L) ---
// O L é composto de duas partes:
#define MOV_LONGO 2 // Os 2 passos em uma direção
#define MOV_CURTO 1 // O 1 passo na direção perpendicular

int main() {
    
    // =========================================================================
    // Nível Novato - Movimentação das Peças (Concluído)
    // =========================================================================

    // -------------------------------------------------------------------------
    // Desafio 1: Implementação com Estrutura 'for'
    // -------------------------------------------------------------------------
    printf("--- SIMULAÇÃO DE MOVIMENTO (USANDO FOR) ---\n\n");

    // Implementação de Movimentação do Bispo (5 casas)
    printf("Movimentação do Bispo (for):\n");
    for (int i = 0; i < CASAS_BISPO; i++) {
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
    printf("--- SIMULAÇÃO DE MOVIMENTO (USANDO WHILE) ---\n\n");

    int i_while = 0;

    // Implementação de Movimentação do Bispo (while)
    printf("Movimentação do Bispo (while):\n");
    i_while = 0; 
    while (i_while < CASAS_BISPO) {
        printf("cima, direita\n");
        i_while++; 
    }

    // Implementação de Movimentação da Torre (while)
    printf("\nMovimentação da Torre (while):\n");
    i_while = 0; 
    while (i_while < CASAS_TORRE) {
        printf("Direita\n");
        i_while++;
    }

    // Implementação de Movimentação da Rainha (while)
    printf("\nMovimentação da Rainha (while):\n");
    i_while = 0; 
    while (i_while < CASAS_RAINHA) {
        printf("Esquerda\n");
        i_while++;
    }

    printf("\n-------------------------------------------------\n\n");

    // -------------------------------------------------------------------------
    // Desafio 3: Implementação com Estrutura 'do-while'
    // -------------------------------------------------------------------------
    printf("--- SIMULAÇÃO DE MOVIMENTO (USANDO DO-WHILE) ---\n\n");

    int i_do = 0;

    // Implementação de Movimentação do Bispo (do-while)
    printf("Movimentação do Bispo (do-while):\n");
    i_do = 0; 
    do {
        printf("cima, direita\n");
        i_do++; 
    } while (i_do < CASAS_BISPO);

    // Implementação de Movimentação da Torre (do-while)
    printf("\nMovimentação da Torre (do-while):\n");
    i_do = 0; 
    do {
        printf("Direita\n");
        i_do++;
    } while (i_do < CASAS_TORRE);

    // Implementação de Movimentação da Rainha (do-while)
    printf("\nMovimentação da Rainha (do-while):\n");
    i_do = 0; 
    do {
        printf("Esquerda\n");
        i_do++;
    } while (i_do < CASAS_RAINHA);

    printf("\n-------------------------------------------------\n");


    // =========================================================================
    // Nível Aventureiro - Movimentação do Cavalo (Loops Aninhados)
    // =========================================================================
    //
    // O objetivo é usar loops aninhados para gerar a saída "Cima, Cima, Direita".
    // Para cumprir o requisito de "aninhado", o loop externo simula a "jogada"
    // (executando 1 vez) e o loop interno simula os 2 passos.
    //
    // -------------------------------------------------------------------------
    
    printf("\n--- NÍVEL AVENTUREIRO (LOOPS ANINHADOS) ---\n\n");

    // --- Implementação 1: 'for' aninhado em 'for' ---
    // (Obrigatório o uso de 'for')
    
    printf("Movimentação do Cavalo (for + for aninhado):\n");

    // Loop externo: Representa UMA jogada de Cavalo
    for (int jogada = 0; jogada < 1; jogada++) {
        
        // Loop interno (aninhado): Executa a parte longa (2 passos) do L
        // Esta é a exigência de "loop aninhado".
        for (int passo_longo = 0; passo_longo < MOV_LONGO; passo_longo++) {
            printf("Cima\n");
        }
        
        // O passo curto (1 passo) é executado em sequência,
        // ainda dentro do loop externo "jogada".
        printf("Direita\n");
    }


    // --- Implementação 2: 'while' aninhado em 'for' ---
    // (Cumprindo a exigência de 'for' + 'outra estrutura')
    
    printf("\nMovimentação do Cavalo (while aninhado em for):\n");

    // Loop externo 'for' (Obrigatório)
    for (int jogada = 0; jogada < 1; jogada++) {
        
        // Loop interno 'while' (A "outra estrutura")
        int passo_longo = 0; // Resetar contador
        
        // Este loop 'while' está ANINHADO dentro do loop 'for'
        while (passo_longo < MOV_LONGO) {
            printf("Cima\n");
            passo_longo++;
        }
        
        // O passo curto
        printf("Direita\n");
    }

    printf("\n-------------------------------------------------\n");


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // (A ser implementado no próximo desafio)


    return 0; // Indica que o programa terminou com sucesso
}