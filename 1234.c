/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1234
Data        : 26/04/2026
Objetivo    : Fazer a frase se tornar frase dançante.
Aprendizado : Como manusear a string.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int contador;
    char frase[100];
    
    while (fgets(frase, 100, stdin)) {
        contador = 1; 
        
        for (int i = 0; i < strlen(frase); i++) {
            if (frase[i] == ' ' || frase[i] == '\n') {
                continue;
            }

            if (contador % 2 == 0) {
                frase[i] = tolower(frase[i]);
            } else {
                frase[i] = toupper(frase[i]);
            }
            
            contador += 1;
        }
        
        printf("%s", frase);
    }
    
    return 0;
}
