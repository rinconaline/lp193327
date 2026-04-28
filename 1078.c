#include <stdio.h>

int main()
{
    int num, total=0;
    scanf("%d", &num);
    for(int i=0;i<10;i++){
        total = (i+1)*num;
        printf("%d x %d = %d\n", i+1, num, total);
    }
    return 0;
}
