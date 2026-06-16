/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1175
Data        : 16/06/2026
Objetivo    : Ler um vetor de 20 posições e inverter a ordem de seus elementos, trocando o primeiro com o último, o segundo com o penúltimo, etc.
Aprendizado : Manipulação de vetores (arrays unidimensionais), lógica de inversão de elementos utilizando uma variável auxiliar (swap) e controle de índices espelhados.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N[20];

    for (int i = 0; i < 20; i++) {
        if (scanf("%d", &N[i]) != 1) return 0;
    }

    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
