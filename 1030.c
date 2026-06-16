#include <stdio.h>

int josephus(int n, int k) {
    int posicao = 0;
    for (int i = 2; i <= n; i++) {
        posicao = (posicao + k) % i;
    }
    return posicao + 1;
}

int main() {
    int nc;
    int n, k;
    
    if (scanf("%d", &nc) != 1) return 0;
    
    for (int caso = 1; caso <= nc; caso++) {
        if (scanf("%d %d", &n, &k) == 2) {
            int sobrevivente = josephus(n, k);
            printf("Case %d: %d\n", caso, sobrevivente);
        }
    }
    
    return 0;
}
