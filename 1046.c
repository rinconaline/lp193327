/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1046
Data        : 21/05/2026
Objetivo    : Calcular a duração do jogo.
Aprendizado : Cálculo com horas.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int inicio, final, duracao;
    
    scanf("%d %d", &inicio, &final);
    
    duracao = final-inicio;
    
    if(duracao<=0){
        duracao = duracao+24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    
    return 0;
}
