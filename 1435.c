/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1435
Data        : 16/06/2026
Objetivo    : Construir uma matriz quadrada de ordem N onde os elementos formam camadas concêntricas com valores crescentes a partir das bordas externas.
Aprendizado : Manipulação de matrizes bidimensionais e uso da lógica de distância mínima até as quatro bordas para determinação dos valores dos elementos.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) == 1 && N != 0) {
        int arr[100][100];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int min = i + 1;
                if (j + 1 < min) min = j + 1;
                if (N - i < min) min = N - i;
                if (N - j < min) min = N - j;
                arr[i][j] = min;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%3d", arr[i][j]);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
