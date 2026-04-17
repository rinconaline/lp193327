/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Problema    : https://judge.beecrowd.com/en/problems/view/1071
Data        : 17/04/2026
Objetivo    : Ler dois números e calcular a soma dos valores ímpares entre eles.
Aprendizado : Uso de if, for.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int x, y, troca, i, soma;

    scanf("%d %d", &x, &y);
    soma = 0;

    if (y < x) {
        troca = x;
        x = y;
        y = troca;
    }

    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
