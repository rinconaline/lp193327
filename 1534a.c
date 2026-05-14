/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1534
Data        : 13/05/2026
Objetivo    : Matriz com diagonais.
Aprendizado : Utilização de matriz.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int mat[70][70];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                if (i + j == n - 1) {
                    mat[i][j] = 2;
                } 
                else if (i == j) {
                    mat[i][j] = 1;
                } 
                else {
                    mat[i][j] = 3;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
