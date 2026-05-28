
#include <stdio.h>

unsigned long long graos (int quadrados){
    
    if(quadrados<=1){
        return 1;
    }
    
    return 2 * graos(quadrados-1);
}


int main()
{
    int n;
    int quadrados;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &quadrados);
        printf("%llu kg\n", (graos(quadrados))/6000); 
    }
     return 0;
}
