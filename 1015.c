/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1015
Data        : 14/05/2026
Objetivo    : Calcular a distância entre dois pontos.
Aprendizado : Utilização da biblioteca math.h.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x1,x2,y1,y2, distance;
    
    scanf("%lf %lf", &x1,&y1);
    scanf("%lf %lf", &x2, &y2);
    
    distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("%.4lf\n", distance);
 
    return 0;
}
