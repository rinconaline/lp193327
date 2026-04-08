#include <stdio.h>
 
int main() {
 
    int a, b, c, maior;
    scanf("%d", &a);
    maior = a;
    scanf("%d", &b);
    if (b>maior) {
        maior = b;
    } 
    scanf("%d", &c);
    if (c>maior){
        maior = c;
    }
    printf("%d eh o maior\n", maior);
    
    return 0;
}
