/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/2757
Data        : 09/04/2026
Objetivo    : Ler três valores inteiros e exibi-los com diferentes formatações de saída.
Aprendizado : Utilizar especificadores de formatação no printf para controlar o alinhamento, largura e preenchimento dos números na saída.
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
     int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    
    return 0;
}
