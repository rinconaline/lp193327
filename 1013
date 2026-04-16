/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1013
Data        : 07/04/2026
Objetivo    : Ler três valores inteiros e determinar o maior entre eles.
Aprendizado : Utilizar operações matemáticas e a função abs para comparar valores e encontrar o maior sem usar estruturas condicionais.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b, c;
    int maiorAB, maior;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
