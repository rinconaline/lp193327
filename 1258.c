/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1258
Data        : 16/06/2026
Objetivo    : Ordenar uma lista de camisetas personalizadas por cor (ascendente), tamanho (descendente: P, M, G) e nome do estudante (ascendente).
Aprendizado : Manipulação de estruturas (structs), uso de funções de comparação personalizadas (strcmp), ordenação de registros e leitura de strings com espaços.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    char color[20];
    char size;
} Shirt;

int compare(Shirt s1, Shirt s2) {
    int color_cmp = strcmp(s1.color, s2.color);
    if (color_cmp != 0) return color_cmp;
    
    if (s1.size != s2.size) {
        return (s2.size - s1.size);
    }
    
    return strcmp(s1.name, s2.name);
}

void sort_shirts(Shirt arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compare(arr[j], arr[j + 1]) > 0) {
                Shirt temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int first_case = 1;
    Shirt shirts[65];
    
    while (scanf("%d", &n) == 1 && n != 0) {
        if (!first_case) {
            printf("\n");
        }
        first_case = 0;
        
        for (int i = 0; i < n; i++) {
            scanf(" %[^\n]", shirts[i].name);
            scanf("%s %c", shirts[i].color, &shirts[i].size);
        }
        
        sort_shirts(shirts, n);
        
        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", shirts[i].color, shirts[i].size, shirts[i].name);
        }
    }
    
    return 0;
}
