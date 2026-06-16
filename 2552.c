#include <stdio.h>

int main() {
    int N, M;

    while (scanf("%d %d", &N, &M) != EOF) {
        int board[100][100];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (scanf("%d", &board[i][j]) != 1) return 0;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (board[i][j] == 1) {
                    printf("9");
                } else {
                    int count = 0;
                    if (i > 0 && board[i - 1][j] == 1) count++;
                    if (i < N - 1 && board[i + 1][j] == 1) count++;
                    if (j > 0 && board[i][j - 1] == 1) count++;
                    if (j < M - 1 && board[i][j + 1] == 1) count++;
                    printf("%d", count);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
