/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/2757
Data        : 09/04/2026
Objetivo    : Deslocar as letras em dadas posições.
Aprendizado : Manuseio de strings e do valor das letras
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main()
{
    int n, deslocamento;
    char frase[50];
    
    scanf("%d", &n);
    
    for (int i=0; i<n; i++){
        scanf("%s", frase);
        scanf("%d", &deslocamento);
        
        for (int j=0; j<strlen(frase); j++){
            frase[j] = frase[j] - deslocamento;
            if (frase[j] < 'A'){
                frase[j] = frase[j] + 26;
            }
        }
        printf("%s\n", frase);
    }
    

    return 0;
}
