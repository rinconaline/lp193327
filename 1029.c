#include<stdio.h>

int n = 0;

int fibonnaci(int numero){
    if(numero==0){
        return 0;
    }
    if(numero==1){
        return 1;
    }
    n+=2;
    return fibonnaci(numero-1) + fibonnaci(numero-2);
}

int main(){
    int repeticoes;
    
    scanf("%d" , &repeticoes);
    
    for(int contador = 1; contador <= repeticoes; contador++){
        int numero;
        n = 0;
        scanf("%d" , &numero);
    
        int fib = fibonnaci(numero);
        
        
        printf("fib(%d) = %d calls = %d\n" , numero , n , fib);
    }
    

    return 0;
}
