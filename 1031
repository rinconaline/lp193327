/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1031
Data        : 16/06/2026
Objetivo    : Determinar o menor salto 'm' no problema de Josephus modificado para garantir que a região 13 seja a última a ser cortada.
Aprendizado : Adaptação do algoritmo clássico de Josephus, uso de força bruta (busca linear) e mapeamento de índices baseados em zero.
-------------------------------------------------------------------------- */
#include <stdio.h>

int josephus(int n, int m) {
    int position = 0;
    for (int i = 2; i <= n; i++) {
        position = (position + m) % i;
    }
    return position;
}

int main() {
    int n;
    
    while (scanf("%d", &n) == 1 && n != 0) {
        int m = 1;
        while (1) {
            if (josephus(n - 1, m) == 11) {
                printf("%d\n", m);
                break;
            }
            m++;
        }
    }
    
    return 0;
}
