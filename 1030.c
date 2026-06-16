/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1030
Data        : 16/06/2026
Objetivo    : Resolver o problema clássico de Flavious Josephus utilizando uma abordagem iterativa eficiente (programação dinâmica).
Aprendizado : Aplicação de modelagem matemática e aritmética modular para otimizar problemas de eliminação circular sem o uso de simulação por listas.
-------------------------------------------------------------------------- */
#include <stdio.h>

int josephus(int n, int k) {
    int posicao = 0;
    for (int i = 2; i <= n; i++) {
        posicao = (posicao + k) % i;
    }
    return posicao + 1;
}

int main() {
    int nc;
    int n, k;
    
    if (scanf("%d", &nc) != 1) return 0;
    
    for (int caso = 1; caso <= nc; caso++) {
        if (scanf("%d %d", &n, &k) == 2) {
            int sobrevivente = josephus(n, k);
            printf("Case %d: %d\n", caso, sobrevivente);
        }
    }
    
    return 0;
}
