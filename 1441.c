#include <stdio.h>

int main() {
    int h;
    
    while (scanf("%d", &h) == 1 && h != 0) {
        int max_val = h;
        
        while (h != 1) {
            if (h % 2 == 0) {
                h = h / 2;
            } else {
                h = 3 * h + 1;
            }
            
            if (h > max_val) {
                max_val = h;
            }
        }
        
        printf("%d\n", max_val);
    }
    
    return 0;
}
