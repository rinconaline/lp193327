/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1180
Data        : 16/06/2026
Objetivo    : Ler um valor N e um vetor X[N], identificar o menor elemento presente nesse array e a sua respectiva posição (índice).
Aprendizado : Manipulação de vetores de tamanho dinâmico (VLA), varredura linear de arrays e lógica de busca pelo valor mínimo e armazenamento de índices.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int X[N];
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &X[i]) != 1) return 0;
    }

    int menor = X[0];
    int posicao = 0;

    for (int i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
