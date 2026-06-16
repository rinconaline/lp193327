/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1441
Data        : 16/06/2026
Objetivo    : Simular a sequência da Conjectura de Collatz (problema 3n + 1) para um valor inicial 'h' e identificar o maior valor atingido durante o processo.
Aprendizado : Implementação de estruturas de repetição condicionais complexas, aplicação de regras aritméticas baseadas na paridade de um número e controle de máximos globais.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int h;
    
    while (scanf("%d", &h) == 1 && h != 0) {
        int max_val = h;
        
        while (h != 1) {
            if (h % 2 == 0) {
                h = h / 2;
            } else {
                h = 3 * h + 1;
            }
            
            if (h > max_val) {
                max_val = h;
            }
        }
        
        printf("%d\n", max_val);
    }
    
    return 0;
}
