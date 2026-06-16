
/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1028
Data        : 07/04/2026
Objetivo    : Calcular o Máximo Divisor Comum (MDC) entre a quantidade de figurinhas de dois amigos utilizando o algoritmo de Euclides.
Aprendizado : Implementação de estruturas de repetição encadeadas e o algoritmo de Euclides para encontrar o MDC.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n, f1, f2, resto;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &f1, &f2);
       
        while (f2 != 0) {
            resto = f1 % f2;
            f1 = f2;
            f2 = resto;
        }
        
       
        printf("%d\n", f1);
    }
    
    return 0;
}
