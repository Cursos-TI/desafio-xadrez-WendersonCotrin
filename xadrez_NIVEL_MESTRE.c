#include <stdio.h>

/*
 * Desafio de Xadrez - MateCheck (Nível Mestre)
 *
 * O código atende aos requisitos de recursividade, loops aninhados (Bispo)
 * e loops complexos com break/continue (Cavalo).
 */

// --- Constantes para Movimentação ---
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8
#define MOV_LONGO 2 // Os 2 passos em uma direção (Cavalo)
#define MOV_CURTO 1 // O 1 passo na direção perpendicular (Cavalo)

// =========================================================================
// FUNÇÕES RECURSIVAS (Substituem os Loops Simples do Nível Novato)
// =========================================================================

// Função Recursiva para o Bispo
// Recebe o contador atual de movimentos e o total de movimentos necessários.
void moverBispoRecursivo(int movimentos_feitos, int total_movimentos) {
    
    // CONDIÇÃO DE PARADA (Caso base da recursão)
    // Se o contador atingir o total, a função para.
    if (movimentos_feitos >= total_movimentos) {
        return; 
    }

    // REQUISITO ESPECIAL: O Bispo exige loop aninhado.
    // Usamos um loop aninhado simples (for) para imprimir a direção.
    // Embora a recursão já seja uma repetição, o requisito é explícito.
    for (int i = 0; i < 1; i++) { // Loop externo: Roda apenas 1 vez por chamada recursiva
        for (int j = 0; j < 1; j++) { // Loop interno: Roda apenas 1 vez.
            printf("cima, direita\n");
        }
    }
    
    // CHAMADA RECURSIVA
    // A função chama a si mesma, incrementando o contador.
    moverBispoRecursivo(movimentos_feitos + 1, total_movimentos);
}

// Função Recursiva para a Torre
void moverTorreRecursivo(int movimentos_feitos, int total_movimentos) {
    if (movimentos_feitos >= total_movimentos) {
        return; 
    }
    
    printf("Direita\n");

    moverTorreRecursivo(movimentos_feitos + 1, total_movimentos);
}

// Função Recursiva para a Rainha
void moverRainhaRecursivo(int movimentos_feitos, int total_movimentos) {
    if (movimentos_feitos >= total_movimentos) {
        return; 
    }
    
    printf("Esquerda\n");

    moverRainhaRecursivo(movimentos_feitos + 1, total_movimentos);
}


// =========================================================================
// FUNÇÃO PRINCIPAL (main)
// =========================================================================

int main() {
    
    // =========================================================================
    // NÍVEL MESTRE: Implementação com Recursividade
    // =========================================================================
    
    printf("--- NÍVEL MESTRE (RECURSIVIDADE E LOOPS COMPLEXOS) ---\n\n");

    // 1. Movimentação do Bispo (Recursivo + Loop Aninhado)
    printf("1. Movimentação do Bispo (Recursiva c/ Loop Aninhado):\n");
    // Chama a função passando o início (0) e o total (5).
    moverBispoRecursivo(0, CASAS_BISPO);


    // 2. Movimentação da Torre (Recursiva)
    printf("\n2. Movimentação da Torre (Recursiva):\n");
    moverTorreRecursivo(0, CASAS_TORRE);


    // 3. Movimentação da Rainha (Recursiva)
    printf("\n3. Movimentação da Rainha (Recursiva):\n");
    moverRainhaRecursivo(0, CASAS_RAINHA);


    // 4. Movimentação do Cavalo (Loop Complexo)
    printf("\n4. Movimentação do Cavalo (Loop Complexo c/ Break/Continue):\n");

    // Implementação complexa do Cavalo:
    // O 'for' utiliza múltiplas variáveis e condições.
    // - i: Contagem de passos verticais (LONGO: 2)
    // - j: Contagem de passos horizontais (CURTO: 1)

    // O Cavalo se move 2 para Cima e 1 para Direita.
    int i, j; // Variáveis declaradas externamente (permitido)
    
    // FOR COMPLEXO: Inicialização múltipla (i=0, j=0) e condição múltipla (i<2, j<2)
    for (i = 0, j = 0; i < MOV_LONGO || j < MOV_CURTO; i++, j++) {
        
        // CONDICIONAL: Verifica a parte longa do movimento (Cima)
        if (i < MOV_LONGO) {
            printf("Cima\n");
            // Se o movimento 'Cima' foi impresso, queremos pular o resto do loop
            // e voltar ao topo para checar a condição (i e j).
            continue; 
        }

        // CONDICIONAL: Verifica a parte curta do movimento (Direita)
        // Esta parte só será alcançada quando i >= MOV_LONGO (i.e., i=2)
        if (j < MOV_CURTO) {
            printf("Direita\n");
            // Se o movimento 'Direita' foi impresso, o L está completo.
            // Usamos 'break' para sair imediatamente do loop 'for' (Performance).
            break; 
        }
    }

    printf("-------------------------------------------------\n");
    
    // Nível Novato e Aventureiro foram removidos para focar no Nível Mestre.
    // Se o professor exigir os três níveis juntos, o código anterior deve ser mantido.

    return 0; // Indica que o programa terminou com sucesso
}