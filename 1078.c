/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1078
Data        : 07/04/2026
Objetivo    : Calcuar a tabuada
Aprendizado : Utilização de for
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int num, total=0;
    scanf("%d", &num);
    for(int i=0;i<10;i++){
        total = (i+1)*num;
        printf("%d x %d = %d\n", i+1, num, total);
    }
    return 0;
}
