#include <stdio.h>

// Função recursiva para movimentar o Bispo (diagonal cima-direita)
void mover_bispo(int passos) {
    if (passos == 0) return;  // Condição de parada
    printf("-> %d. Cima Direita\n", passos);
    mover_bispo(passos - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Torre (direita)
void mover_torre(int passos) {
    if (passos == 0) return; 
    mover_torre(passos - 1);
    printf("-> %d. Direita\n", passos);
}

// Função recursiva para movimentar a Rainha (esquerda)
void mover_rainha(int passos) {
    if (passos == 0) return; 
    printf("-> %d. Esquerda\n", passos);
    mover_rainha(passos - 1);
}

int main() {
    printf("\n===== Nível Mestre - MateCheck =====\n");

    // Movimentação do Bispo
    printf("\n-- Movimentando o Bispo --\n");
    mover_bispo(5);

    // Movimentação da Torre
    printf("\n-- Movimentando a Torre --\n");
    mover_torre(5);

    // Movimentação da Rainha
    printf("\n-- Movimentando a Rainha --\n");
    mover_rainha(8);

    // Movimentação do Cavalo
    printf("\n-- Movimentando o Cavalo --\n");

    // O cavalo anda em "L" (2 cima + 1 direita, ou 2 baixo + 1 esquerda, etc.)
    // Aqui usamos loops aninhados com break e continue
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if ((x == 2 && y == 1) || (x == 1 && y == 2)) {
                printf("Movimento em L: (%d cima, %d direita)\n", x, y);
                break; // Saímos assim que achamos o movimento válido
            }
            else {
                continue; // Ignora movimentos inválidos
            }
        }
    }

    printf("\n===== Fim do Jogo =====\n");
    return 0;
}
