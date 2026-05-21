/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1179
Data        : 21/05/2026
Objetivo    : Preencher vetor.
Aprendizado : Preencher vetores pares e impares.
-------------------------------------------------------------------------- */
#include <stdio.h>

    
    int main (){
    
    int par[5], impar[5], numero,contadorPar=0, contadorImpar=0;
    
    for(int i=0;i<15;i++){
        scanf("%d", &numero );
        if(numero%2==0){
            par[contadorPar] = numero;
            contadorPar++;
        } else {
            impar[contadorImpar] = numero;
            contadorImpar++;
        }
        if(contadorPar==5){
            for(int j=0; j<5; j++){
                printf("par[%d] = %d\n",j, par[j]);
            }
            contadorPar = 0;
        }
        if(contadorImpar==5){
            for(int k=0; k<5; k++){
                printf("impar[%d] = %d\n",k, impar[k]);
            }
            contadorImpar = 0;
        }
        
    }
    
    for(int contador=0;contador<=contadorImpar-1;contador++){
        printf("impar[%d] = %d\n",contador, impar[contador]);
    }
     for(int contador=0;contador<=contadorPar-1;contador++){
        printf("par[%d] = %d\n",contador, par[contador]);
    }
    
    
    return 0;
}
