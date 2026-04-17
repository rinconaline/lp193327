/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 1704/2026
Objetivo    : Armazenar 100 números em um vetor e identificar o maior valor e sua posição.
Aprendizado : Uso de vetores, controle de índices e comparação para rastrear o maior elemento e sua posição.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int v[100];
    int maior, posicao;
    
    for(int i=0;i<100; i++){
        scanf("%d", &v[i]);
        if (i==0){
            maior = v[i];
            posicao = i+1;
        }
        else {
            if(maior<v[i]){
                maior = v[i];
                posicao = i+1;
            }
        }
    }
    
    printf("%d\n", maior);
     printf("%d\n", posicao);
     
    return 0;
}
