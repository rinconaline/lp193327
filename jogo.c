#include <stdio.h>

void desenhar_tabuleiro (int tabuleiro[9][9]){
    printf("\n    1 2 3   4 5 6   7 8 9\n");
    printf("  +-------+-------+-------+\n");
    for (int i=0; i<9; i++){
        if (i>0 && i%3==0){
            printf("  +-------+-------+-------+\n");
        }
        printf("%d | ", i+1);
        for (int j=0; j<9; j++){
            if (j>0 && j%3 == 0){
                printf("| ");
            }
            if (tabuleiro[i][j] == 0) {
                printf(". "); 
            } else {
                printf("%d ", tabuleiro[i][j]);
            }
        }
        printf("|\n");
    }
    printf("  +-------+-------+-------+\n");
}

int jogada_valida_sudoku(int tabuleiro[9][9], int linha, int coluna, int numero) {
   
    for (int j = 0; j < 9; j++) {
        if (tabuleiro[linha][j] == numero) return 0;
    }

    for (int i = 0; i < 9; i++) {
        if (tabuleiro[i][coluna] == numero) return 0;
    }

    int inicio_linha = (linha / 3) * 3;
    int inicio_coluna = (coluna / 3) * 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[inicio_linha + i][inicio_coluna + j] == numero) {
                return 0; // Já existe no mesmo bloco!
            }
        }
    }

    return 1; 
}

int checar_vitoria(int tabuleiro[9][9]){
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if (tabuleiro[i][j]==0){
                return 0; 
            }
        }
    }
    return 1; 
}

int main (){
    int tabuleiro[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    int linha, coluna, numero;

    while (1){
        desenhar_tabuleiro(tabuleiro);

        if (checar_vitoria(tabuleiro)){
            printf("Parabéns! Sudoku completo!\n");
            break;
        }
        
        printf("Digite a linha (1-9), coluna (1-9) e o numero (1-9):\n");
        scanf("%d %d %d", &linha, &coluna, &numero);

        // Validação básica de limites do teclado
        if (linha < 1 || linha > 9 || coluna < 1 || coluna > 9 || numero < 1 || numero > 9){
            printf("\n[ERRO] Digite apenas coordenadas e números de 1 a 9.\n");
            continue; 
        } 

        int l = linha - 1;
        int c = coluna - 1;

        if (!jogada_valida_sudoku(tabuleiro, l, c, numero)) {
            printf("\n[MOVIMENTO INVÁLIDO]\n");
            continue;
        }

        tabuleiro[l][c] = numero;
    }
    return 0;
}
