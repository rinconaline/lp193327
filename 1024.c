/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Problema    : https://judge.beecrowd.com/en/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criar mensagens criptografadas.
Aprendizado : Modificiadores de string, getchar e utilização do for.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char frase[1001];
    
    scanf("%d", &n);
    getchar();
    
    for (int i=0; i<n; i++){
        
        fgets(frase, 1001, stdin);
        
        frase[strcspn(frase, "\n")]='\0';
        int tamanho = strlen(frase);
        
        for (int j=0; j<tamanho; j++){
            if(frase[j]>= 'a' && frase[j]<= 'z' || frase[j]>='A' && frase[j]<= 'Z'){
                frase[j] = frase[j] + 3;
            }
        }
        for (int k=0; k<tamanho/2; k++){
            char aux = frase[k];
            frase[k] = frase[tamanho-1-k];
            frase[tamanho-1-k] = aux;
        }
        for(int m=tamanho/2; m<tamanho; m++){
            frase[m] = frase[m]-1;
        }   
        printf("%s\n", frase);
    }
    return 0;
}
