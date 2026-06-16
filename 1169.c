/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1169
Data        : 16/06/2026
Objetivo    : Calcular a quantidade de quilos de trigo acumulados em um tabuleiro de xadrez usando uma função recursiva de potência de base 2.
Aprendizado : Aplicação de recursividade, uso de tipos de dados de 64 bits sem sinal (unsigned long long) e conversão de unidades (grãos para gramas e quilos).
-------------------------------------------------------------------------- */
#include <stdio.h>

unsigned long long graos (int quadrados){
    
    if(quadrados<=1){
        return 1;
    }
    
    return 2 * graos(quadrados-1);
}


int main()
{
    int n;
    int quadrados;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &quadrados);
        printf("%llu kg\n", (graos(quadrados))/6000); 
    }
     return 0;
}
