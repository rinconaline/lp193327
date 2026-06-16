#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) == 1 && N != 0) {
        int arr[100][100];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int min = i + 1;
                if (j + 1 < min) min = j + 1;
                if (N - i < min) min = N - i;
                if (N - j < min) min = N - j;
                arr[i][j] = min;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%3d", arr[i][j]);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
