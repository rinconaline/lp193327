/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1168
Data        : 21/05/2026
Objetivo    : Calcular a quantidade de leds necessária para o número.
Aprendizado : Utilização do switch.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include<string.h>
    
    int main (){
    int n, quantidade;
    char numero[1000000];

    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        quantidade=0;
        scanf("%s", &numero);
        for(int j=0;j<strlen(numero); j++){
            switch(numero[j]){
                case '1':
                quantidade+=2;
                break;
                case '2':
                quantidade+=5;
                break;
                case '3':
                quantidade+=5;
                break;
                case '4':
                quantidade+=4;
                break;
                case '5':
                quantidade+=5;
                break;
                case '6':
                quantidade+=6;
                break;
                case '7':
                quantidade+=3;
                break;
                case '8':
                quantidade+=7;
                break;
                case '9':
                quantidade+=6;
                break;
                case '0':
                quantidade+=6;
                break;
            }
            
        }
        printf("%d leds\n", quantidade);
    }
    
    return 0;
}
