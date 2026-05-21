/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1017
Data        : 21/05/2026
Objetivo    : Calcular a quantidade de litros da viagem.
Aprendizado : Modificação de tipo de variável para divisão.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int tempo, velocidade;
    double litros;
    
    scanf("%d %d", &tempo, &velocidade);
    
    litros = (double)tempo*velocidade/12;
    printf("%.3lf\n", litros);

    return 0;
}
