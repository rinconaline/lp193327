/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1029
Data        : 16/06/2026
Objetivo    : Calcular o valor de um termo na sequência de Fibonacci de forma recursiva e contar o número total de chamadas de função necessárias.
Aprendizado : Compreensão de recursividade, árvore de chamadas de funções e utilização de variáveis globais para contagem de execuções.
-------------------------------------------------------------------------- */
#include<stdio.h>

int n = 0;

int fibonnaci(int numero){
    if(numero==0){
        return 0;
    }
    if(numero==1){
        return 1;
    }
    n+=2;
    return fibonnaci(numero-1) + fibonnaci(numero-2);
}

int main(){
    int repeticoes;
    
    scanf("%d" , &repeticoes);
    
    for(int contador = 1; contador <= repeticoes; contador++){
        int numero;
        n = 0;
        scanf("%d" , &numero);
    
        int fib = fibonnaci(numero);
        
        
        printf("fib(%d) = %d calls = %d\n" , numero , n , fib);
    }
    

    return 0;
}
